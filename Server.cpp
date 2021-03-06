#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>
#include "VirtualMemory.cpp"

using namespace std;

/**
 * Inicia al servidor
 * @param pagedArray Recibe el Paged Array utilizado para jugar
 * @return
 */
int startServer(PagedArray pagedArray){
    // Create a socket
    while(true) {
        int listening = socket(AF_INET, SOCK_STREAM, 0);
        if (listening == -1) {
            cerr << "Can't create a socket! Quitting" << endl;
            return -1;
        }

        //Implementacion de memoria virtual

        // Bind the ip address and port to a socket
        sockaddr_in hint;
        hint.sin_family = AF_INET;
        hint.sin_port = htons(54000);
        inet_pton(AF_INET, "0.0.0.0", &hint.sin_addr);

        bind(listening, (sockaddr *) &hint, sizeof(hint));

        // Tell Winsock the socket is for listening
        listen(listening, SOMAXCONN);

        // Wait for a connection
        sockaddr_in client;
        socklen_t clientSize = sizeof(client);

        int clientSocket = accept(listening, (sockaddr *) &client, &clientSize);

        char host[NI_MAXHOST];      // Client's remote name
        char service[NI_MAXSERV];   // Service (i.e. port) the client is connect on

        memset(host, 0, NI_MAXHOST); // same as memset(host, 0, NI_MAXHOST);
        memset(service, 0, NI_MAXSERV);

        if (getnameinfo((sockaddr *) &client, sizeof(client), host, NI_MAXHOST, service, NI_MAXSERV, 0) == 0) {
            cout << host << " connected on port " << service << endl;
        } else {
            inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
            cout << host << " connected on port " << ntohs(client.sin_port) << endl;
        }

        // Close listening socket
        close(listening);

        // While loop: accept and echo message back to client
        char buf[4096];

        while (true) {
            memset(buf, 0, 4096);

            // Wait for client to send data
            int bytesReceived = recv(clientSocket, buf, 4096, 0);
            if (bytesReceived == -1) {
                cerr << "Error in recv(). Quitting" << endl;
                break;
            }

            if (bytesReceived == 0) {
                cout << "Client disconnected " << endl;
                break;
            }

            string received = string(buf, 0, bytesReceived);
            // Echo message back to client
            string imgType = pagedArray.getCard(stoi(received));
            string points = pagedArray.compareCards(imgType);
            string response = imgType + " " + points + " ";
            send(clientSocket, response.c_str(), response.size() + 1, 0);
            //getUsedMemory();
        }

        // Close the socket
        close(clientSocket);
    }
    return 0;
};

int main(){
    PagedArray pagedArray;
    startServer(pagedArray);
}
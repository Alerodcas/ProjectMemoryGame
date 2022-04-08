#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>
#include "VirtualMemory.cpp"

using namespace std;

int main() {
        // Create a socket
        int listening = socket(AF_INET, SOCK_STREAM, 0);
        if (listening == -1) {
            cerr << "Can't create a socket! Quitting" << endl;
            return -1;
        }

        //Implementacion de memoria virtual
        PagedArray pagedArray;

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

            string card1;
            string card2;
            bool bothCards = false;

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

            string received = string(buf,0,bytesReceived);
            // Echo message back to client
            string imgType = pagedArray.getCard(stoi(received));
            send(clientSocket, imgType.c_str(), imgType.size() + 1, 0);

            while(bothCards == false){
                if(card1 == ""){
                    card1 = imgType;
                    break;
                }else{
                    card2 = imgType;
                    //verificar si son iguales
                    bothCards = true;
                }
            }

            /*
            if(bothCards){
                string points = pagedArray.compareCards(card1, card2);
                send(clientSocket, points.c_str(), points.size() + 1, 0);
                pagedArray.reset();
                card1 = "";
                card2 = "";
            }
             */

        }
        // Close the socket
        close(clientSocket);

        return 0;
    }
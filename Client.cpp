#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string>
#include <cstring>

using namespace std;

class Client {
public:
    int startClient(int num) {
        //Create socket
        int sock = socket(AF_INET, SOCK_STREAM, 0);
        if (sock == -1) {
            return -1;
        }
        //Create a hint structure for the server we're connecting with
        int port = 54000;
        string ipAdress = "127.0.0.1";

        sockaddr_in hint;
        hint.sin_family = AF_INET;
        hint.sin_port = htons(port);
        inet_pton(AF_INET, ipAdress.c_str(), &hint.sin_addr);

        //Connect to the server on the socket
        int connectRes = connect(sock, (sockaddr*)&hint, sizeof(hint));
        if (connectRes == -1) {
            return -1;
        }

        char buf[4096];
        string userInput = to_string(num);
        //While loop:
        while(true) {
            //Send to server
            int sendRes = send(sock, userInput.c_str(), userInput.size() + 1, 0);
            if (sendRes == -1) {
                cout << "Could not send to server! Whoops! /r/n";
                continue;
            }
            //Wait for the response
            memset(buf, 0, 4096);
            int bytesReceived = recv(sock, buf, 4096, 0);
            if (bytesReceived == -1) {
                cout << "There was a problem getting response from server/r/n";
            } else {
                //Display response
                string serverResponse = string(buf, 0,bytesReceived);
                //char characterResponse = serverResponse.back();
                if (serverResponse == "TipoA"){
                    close(sock);
                    return 1;
                }
                if (serverResponse == "TipoB"){
                    close(sock);
                    return 2;
                }
                if (serverResponse == "TipoC"){
                    close(sock);
                    return 3;
                }
                if (serverResponse == "TipoD"){
                    close(sock);
                    return 4;
                }
                if (serverResponse == "TipoE"){
                    close(sock);
                    return 5;
                }
                //return serverResponse;
            }
        }

        //Close the socket
        close(sock);
        return 0;
    }
};
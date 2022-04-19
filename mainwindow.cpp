#include <sstream>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Client.cpp"
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <random>

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->frame->hide();
    ui->frame_3->hide();
    ui->pushButton->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_2->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_3->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_4->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_5->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_6->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_7->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_8->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_9->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_10->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_11->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_12->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_13->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_14->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_15->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_16->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_17->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_18->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_19->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_20->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_21->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_22->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_23->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_24->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_25->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_26->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_27->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_28->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_29->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->pushButton_30->setIcon(
            QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
    ui->label_2->setText(QString::number(this->playerOnePoints));
    ui->label_4->setText(QString::number(this->playerTwoPoints));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * Separa cada palabra en un string
 * @param text Recibe el string con todas las palabras
 * @return retorna un vector que contiene cada palabra
 */
vector<string> MainWindow::getWords(string text) {
    string word = "";
    vector<string> words;
    for (auto x : text)
    {
        if (x == ' ')
        {
            cout << word << endl;
            words.push_back(word);
            word = "";
        }
        else {
            word = word + x;
        }
    }
    cout << word << endl;
    return words;
}

/**
 * Mismo para cada boton, inicia el cliente, cambia su icono de acuerdo con lo recibido
 */
void MainWindow::on_pushButton_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(1);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }

        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton;
        } else {
            this->secondPressed = ui->pushButton;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(2);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_2->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_2->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_2->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_2->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_2->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_2->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_2->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_2;
        } else {
            this->secondPressed = ui->pushButton_2;
            this->OnlyTwoCards = false;
        }
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(3);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_3->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_3->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_3->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_3->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_3->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_3->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_3->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_3;
        } else {
            this->secondPressed = ui->pushButton_3;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(4);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_4->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_4->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_4->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_4->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_4->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_4->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_4->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_4;
        } else {
            this->secondPressed = ui->pushButton_4;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(5);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_5->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_5->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_5->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_5->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_5->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_5->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_5->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_5;
        } else {
            this->secondPressed = ui->pushButton_5;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(6);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_6->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_6->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_6->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_6->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_6->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_6->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_6->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_6;
        } else {
            this->secondPressed = ui->pushButton_6;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(7);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_7->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_7->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_7->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_7->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_7->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_7->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_7->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_7;
        } else {
            this->secondPressed = ui->pushButton_7;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(8);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_8->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_8->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_8->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_8->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_8->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_8->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_8->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_8;
        } else {
            this->secondPressed = ui->pushButton_8;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(9);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_9->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_9->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_9->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_9->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_9->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_9->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_9->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_9;
        } else {
            this->secondPressed = ui->pushButton_9;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(10);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_10->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_10->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_10->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_10->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_10->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_10->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_10->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_10;
        } else {
            this->secondPressed = ui->pushButton_10;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(11);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_11->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_11->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_11->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_11->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_11->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_11->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_11->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_11;
        } else {
            this->secondPressed = ui->pushButton_11;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_12_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(12);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_12->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_12->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_12->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_12->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_12->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_12->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_12->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_12;
        } else {
            this->secondPressed = ui->pushButton_12;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_13_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(13);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_13->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_13->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_13->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_13->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_13->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_13->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_13->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_13;
        } else {
            this->secondPressed = ui->pushButton_13;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_14_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(14);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_14->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_14->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_14->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_14->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_14->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_14->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_14->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_14;
        } else {
            this->secondPressed = ui->pushButton_14;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_15_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(15);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_15->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_15->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_15->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_15->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_15->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_15->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_15->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_15;
        } else {
            this->secondPressed = ui->pushButton_15;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_16_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(16);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_16->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_16->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_16->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_16->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_16->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_16->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_16->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_16;
        } else {
            this->secondPressed = ui->pushButton_16;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_17_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(17);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_17->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_17->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_17->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_17->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_17->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_17->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_17->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_17;
        } else {
            this->secondPressed = ui->pushButton_17;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_18_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(18);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_18->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_18->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_18->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_18->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_18->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_18->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_18->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_18;
        } else {
            this->secondPressed = ui->pushButton_18;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_19_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(19);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_19->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_19->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_19->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_19->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_19->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_19->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_19->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_19;
        } else {
            this->secondPressed = ui->pushButton_19;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_20_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(20);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_20->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_20->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_20->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_20->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_20->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_20->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_20->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_20;
        } else {
            this->secondPressed = ui->pushButton_20;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_21_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(21);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_21->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_21->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_21->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_21->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_21->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_21->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_21->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_21;
        } else {
            this->secondPressed = ui->pushButton_21;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_22_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(22);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_22->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_22->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_22->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_22->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_22->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_22->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_22->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_22;
        } else {
            this->secondPressed = ui->pushButton_22;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_23_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(23);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_23->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_23->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_23->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_23->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_23->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_23->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_23->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_23;
        } else {
            this->secondPressed = ui->pushButton_23;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_24_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(24);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_24->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_24->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_24->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_24->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_24->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_24->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_24->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_24;
        } else {
            this->secondPressed = ui->pushButton_24;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_25_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(25);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_25->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_25->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_25->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_25->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_25->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_25->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_25->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_25;
        } else {
            this->secondPressed = ui->pushButton_25;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_26_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(26);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_26->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_26->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_26->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_26->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_26->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_26->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_26->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_26;
        } else {
            this->secondPressed = ui->pushButton_26;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_27_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(27);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_27->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_27->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_27->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_27->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_27->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_27->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_27->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_27;
        } else {
            this->secondPressed = ui->pushButton_27;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_28_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(28);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_28->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_28->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_28->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_28->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_28->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_28->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_28->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_28;
        } else {
            this->secondPressed = ui->pushButton_28;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_29_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(29);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_29->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_29->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_29->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_29->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_29->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_29->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_29->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_29;
        } else {
            this->secondPressed = ui->pushButton_29;
            this->OnlyTwoCards = false;
        }
    }
}

void MainWindow::on_pushButton_30_clicked()
{
    if(this->OnlyTwoCards) {
        Client client;
        string received = client.startClient(30);
        vector<string> commands = this->getWords(received);

        if (commands[0] == "TipoA") {
            ui->pushButton_30->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
        }
        if (commands[0] == "TipoB") {
            ui->pushButton_30->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
        }
        if (commands[0] == "TipoC") {
            ui->pushButton_30->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
        }
        if (commands[0] == "TipoD") {
            ui->pushButton_30->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
        }
        if (commands[0] == "TipoE") {
            ui->pushButton_30->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
        }
        if (commands[0] == "TipoF") {
            ui->pushButton_30->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoF.png"));
        }
        if (commands[0] == "TipoG") {
            ui->pushButton_30->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoG.png"));
        }
        this->points = stoi(commands[1]);
        ui->label_16->setText(QString::fromStdString(commands[2]));
        ui->label_17->setText(QString::fromStdString(commands[3]));

        if (this->firstPressed == this->ghost) {
            this->firstPressed = ui->pushButton_30;
        } else {
            this->secondPressed = ui->pushButton_30;
            this->OnlyTwoCards = false;
        }
    }
}

/**
 * Evalua los dos ultimos botones presinados y cambia el icono acorde como dice el juego
 */
void MainWindow::on_pushButton_31_clicked()
{
    if(this->secondPressed != this->ghost) {
        if (this->points > 0) {
            this->firstPressed->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/dun.png"));
            this->secondPressed->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/dun.png"));
            this->firstPressed->setEnabled(false);
            this->secondPressed->setEnabled(false);
            if (this->playingPlayer) {
                this->playerOnePoints += this->points;
                this->playingPlayer = false;
                ui->label_6->setText(this->playerTwo);
            }else {
                this->playerTwoPoints += this->points;
                this->playingPlayer = true;
                ui->label_6->setText(this->playerOne);
            }
        } else if(this->points == 0){
            this->firstPressed->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
            this->secondPressed->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
        }else if(this->points < 0){
            if(this->playingPlayer){
                this->playerOnePoints -= this->points;
            }else{
                this->playerTwoPoints -= this->points;
            }
            if(this->playerOnePoints > this->playerTwoPoints){
                ui->label_12->setText(this->playerOne);
            }else if(this->playerOnePoints < this->playerTwoPoints){
                ui->label_12->setText(this->playerTwo);
            }else{
                ui->label_12->setText("It's a tie!");
                ui->label_13->hide();
            }
            ui->frame->hide();
            ui->frame_3->show();
        }
        this->firstPressed = this->ghost;
        this->secondPressed = this->ghost;
        this->OnlyTwoCards = true;
    }
    ui->label_2->setText(QString::number(this->playerOnePoints));
    ui->label_4->setText(QString::number(this->playerTwoPoints));
}

/**
 * Para iniciar a jugar, recibe el nombre de los jugadores y los coloca en sus respectivos labels
 */
void MainWindow::on_pushButton_32_clicked()
{
    QString Player1Name = ui->plainTextEdit->toPlainText();
    QString Player2Name = ui->plainTextEdit_2->toPlainText();
    ui->label->setText(Player1Name);
    ui->label_3->setText(Player2Name);
    this->playerOne = Player1Name;
    this->playerTwo = Player2Name;
    auto gen = std::bind(std::uniform_int_distribution<>(0,1),std::default_random_engine());
    this->playingPlayer = gen();
    if (this->playingPlayer) {
        ui->label_6->setText(this->playerOne);
    } else {
        ui->label_6->setText(this->playerTwo);
    }
    ui->frame_2->hide();
    ui->frame->show();
}


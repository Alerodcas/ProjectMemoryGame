#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Client.cpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Client client;
    int newIcon = client.startClient(1);

    if (newIcon == 1){
        ui->pushButton->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }

}




void MainWindow::on_pushButton_2_clicked()
{

}


void MainWindow::on_pushButton_3_clicked()
{

}


void MainWindow::on_pushButton_4_clicked()
{

}


void MainWindow::on_pushButton_5_clicked()
{

}


void MainWindow::on_pushButton_6_clicked()
{

}


void MainWindow::on_pushButton_12_clicked()
{

}


void MainWindow::on_pushButton_8_clicked()
{

}


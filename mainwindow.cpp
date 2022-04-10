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

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(testSlot()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(testSlot()));
    }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::testSlot()
{
    QObject *senderObj = sender(); // This will give Sender object
    // This will give obejct name for above it will give "A", "B", "C"
    QString senderObjName = senderObj->objectName();

    if(senderObjName == "A")
    {
        //Implement Button A Specific
    }
    //Similarly for "B" and "C"
    if(senderObjName == "B")
    {
        //Implement Button B Specific
    }
    if(senderObjName == "C")
    {
        //Implement Button C Specific
    }
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
    if (newIcon == 5) {
        ui->pushButton->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->lastPressed = ui->pushButton;

}




void MainWindow::on_pushButton_2_clicked()
{
    Client client;
    int newIcon = client.startClient(2);

    if (newIcon == 1){
        ui->pushButton_2->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_2->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_2->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_2->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_2->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    Client client;
    int newIcon = client.startClient(3);

    if (newIcon == 1){
        ui->pushButton_3->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_3->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_3->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_3->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_3->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}



void MainWindow::on_pushButton_4_clicked()
{
    Client client;
    int newIcon = client.startClient(4);

    if (newIcon == 1){
        ui->pushButton_4->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_4->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_4->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_4->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_4->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    Client client;
    int newIcon = client.startClient(5);

    if (newIcon == 1){
        ui->pushButton_5->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_5->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_5->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_5->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_5->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    Client client;
    int newIcon = client.startClient(6);

    if (newIcon == 1){
        ui->pushButton_6->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_6->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_6->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_6->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_6->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    Client client;
    int newIcon = client.startClient(7);

    if (newIcon == 1){
        ui->pushButton_7->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_7->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_7->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_7->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_7->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    Client client;
    int newIcon = client.startClient(8);

    if (newIcon == 1){
        ui->pushButton_8->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_8->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_8->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_8->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_8->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_9_clicked()
{
    Client client;
    int newIcon = client.startClient(9);

    if (newIcon == 1){
        ui->pushButton_9->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_9->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_9->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_9->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_9->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_10_clicked()
{
    Client client;
    int newIcon = client.startClient(10);

    if (newIcon == 1){
        ui->pushButton_10->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_10->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_10->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_10->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_10->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_11_clicked()
{
    Client client;
    int newIcon = client.startClient(11);

    if (newIcon == 1){
        ui->pushButton_11->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_11->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_11->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_11->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_11->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_12_clicked()
{
    Client client;
    int newIcon = client.startClient(12);

    if (newIcon == 1){
        ui->pushButton_12->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_12->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_12->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_12->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_12->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_13_clicked()
{
    Client client;
    int newIcon = client.startClient(13);

    if (newIcon == 1){
        ui->pushButton_13->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_13->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_13->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_13->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_13->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_14_clicked()
{
    Client client;
    int newIcon = client.startClient(14);

    if (newIcon == 1){
        ui->pushButton_14->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_14->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_14->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_14->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_14->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_15_clicked()
{
    Client client;
    int newIcon = client.startClient(15);

    if (newIcon == 1){
        ui->pushButton_15->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_15->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_15->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_15->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_15->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_16_clicked()
{
    Client client;
    int newIcon = client.startClient(16);

    if (newIcon == 1){
        ui->pushButton_16->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_16->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_16->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_16->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_16->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_17_clicked()
{
    Client client;
    int newIcon = client.startClient(17);

    if (newIcon == 1){
        ui->pushButton_17->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_17->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_17->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_17->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_17->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_18_clicked()
{
    Client client;
    int newIcon = client.startClient(18);

    if (newIcon == 1){
        ui->pushButton_18->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_18->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_18->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_18->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_18->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_19_clicked()
{
    Client client;
    int newIcon = client.startClient(19);

    if (newIcon == 1){
        ui->pushButton_19->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_19->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_19->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_19->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_19->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_20_clicked()
{
    Client client;
    int newIcon = client.startClient(20);

    if (newIcon == 1){
        ui->pushButton_20->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_20->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_20->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_20->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_20->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_21_clicked()
{
    Client client;
    int newIcon = client.startClient(21);

    if (newIcon == 1){
        ui->pushButton_21->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_21->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_21->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_21->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_21->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_22_clicked()
{
    Client client;
    int newIcon = client.startClient(22);

    if (newIcon == 1){
        ui->pushButton_22->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_22->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_22->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_22->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_22->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_23_clicked()
{
    Client client;
    int newIcon = client.startClient(23);

    if (newIcon == 1){
        ui->pushButton_23->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_23->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_23->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_23->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_23->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_24_clicked()
{
    Client client;
    int newIcon = client.startClient(24);

    if (newIcon == 1){
        ui->pushButton_24->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_24->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_24->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_24->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_24->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_25_clicked()
{
    Client client;
    int newIcon = client.startClient(25);

    if (newIcon == 1){
        ui->pushButton_25->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_25->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_25->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_25->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_25->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_26_clicked()
{
    Client client;
    int newIcon = client.startClient(26);

    if (newIcon == 1){
        ui->pushButton_26->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_26->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_26->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_26->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_26->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_27_clicked()
{
    Client client;
    int newIcon = client.startClient(27);

    if (newIcon == 1){
        ui->pushButton_27->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_27->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_27->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_27->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_27->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_28_clicked()
{
    Client client;
    int newIcon = client.startClient(28);

    if (newIcon == 1){
        ui->pushButton_28->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_28->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_28->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_28->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_28->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_29_clicked()
{
    Client client;
    int newIcon = client.startClient(29);

    if (newIcon == 1){
        ui->pushButton_29->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_29->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_29->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_29->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_29->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


void MainWindow::on_pushButton_30_clicked()
{
    Client client;
    int newIcon = client.startClient(30);

    if (newIcon == 1){
        ui->pushButton_30->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (newIcon == 2){
        ui->pushButton_30->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (newIcon == 3){
        ui->pushButton_30->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (newIcon == 4){
        ui->pushButton_30->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (newIcon == 5){
        ui->pushButton_30->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
}


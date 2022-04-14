#include <sstream>
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

/*
void MainWindow::evaluate(QPushButton button, vector<string> commands){
    if(commands[1] != "0"){
        button.setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/dun.png"));
        if(this->lastPressed != this->ghost) {
            this->lastPressed->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/dun.png"));
        }
        this->lastPressed = this->ghost;
    }else{
        button.setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
        if(this->lastPressed != this->ghost) {
            this->lastPressed->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
        }
        this->lastPressed = ui->pushButton;
    }
}
 */

void MainWindow::on_pushButton_clicked()
{
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

    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton;
    }else{
        this->secondPressed = ui->pushButton;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    Client client;
    string received = client.startClient(2);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_2->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_2->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_2->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_2->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_2->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_2;
    }else{
        this->secondPressed = ui->pushButton_2;
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    Client client;
    string received = client.startClient(3);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_3->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_3->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_3->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_3->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_3->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_3;
    }else{
        this->secondPressed = ui->pushButton_3;
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    Client client;
    string received = client.startClient(4);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_4->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_4->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_4->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_4->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_4->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_4;
    }else{
        this->secondPressed = ui->pushButton_4;
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    Client client;
    string received = client.startClient(5);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_5->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_5->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_5->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_5->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_5->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_5;
    }else{
        this->secondPressed = ui->pushButton_5;
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    Client client;
    string received = client.startClient(6);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_6->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_6->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_6->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_6->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_6->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_6;
    }else{
        this->secondPressed = ui->pushButton_6;
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    Client client;
    string received = client.startClient(7);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_7->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_7->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_7->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_7->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_7->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_7;
    }else{
        this->secondPressed = ui->pushButton_7;
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    Client client;
    string received = client.startClient(8);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_8->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_8->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_8->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_8->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_8->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_8;
    }else{
        this->secondPressed = ui->pushButton_8;
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    Client client;
    string received = client.startClient(9);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_9->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_9->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_9->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_9->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_9->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_9;
    }else{
        this->secondPressed = ui->pushButton_9;
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    Client client;
    string received = client.startClient(10);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_10->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_10->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_10->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_10->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_10->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_10;
    }else{
        this->secondPressed = ui->pushButton_10;
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    Client client;
    string received = client.startClient(11);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_11->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_11->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_11->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_11->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_11->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_11;
    }else{
        this->secondPressed = ui->pushButton_11;
    }
}

void MainWindow::on_pushButton_12_clicked()
{
    Client client;
    string received = client.startClient(12);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_12->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_12->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_12->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_12->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_12->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_12;
    }else{
        this->secondPressed = ui->pushButton_12;
    }
}

void MainWindow::on_pushButton_13_clicked()
{
    Client client;
    string received = client.startClient(13);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_13->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_13->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_13->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_13->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_13->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_13;
    }else{
        this->secondPressed = ui->pushButton_13;
    }
}

void MainWindow::on_pushButton_14_clicked()
{
    Client client;
    string received = client.startClient(14);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_14->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_14->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_14->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_14->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_14->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_14;
    }else{
        this->secondPressed = ui->pushButton_14;
    }
}

void MainWindow::on_pushButton_15_clicked()
{
    Client client;
    string received = client.startClient(15);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_15->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_15->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_15->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_15->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_15->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_15;
    }else{
        this->secondPressed = ui->pushButton_15;
    }
}

void MainWindow::on_pushButton_16_clicked()
{
    Client client;
    string received = client.startClient(16);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_16->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_16->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_16->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_16->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_16->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_16;
    }else{
        this->secondPressed = ui->pushButton_16;
    }
}

void MainWindow::on_pushButton_17_clicked()
{
    Client client;
    string received = client.startClient(17);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_17->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_17->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_17->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_17->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_17->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_17;
    }else{
        this->secondPressed = ui->pushButton_17;
    }
}

void MainWindow::on_pushButton_18_clicked()
{
    Client client;
    string received = client.startClient(18);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_18->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_18->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_18->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_18->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_18->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_18;
    }else{
        this->secondPressed = ui->pushButton_18;
    }
}

void MainWindow::on_pushButton_19_clicked()
{
    Client client;
    string received = client.startClient(19);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_19->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_19->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_19->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_19->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_19->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_19;
    }else{
        this->secondPressed = ui->pushButton_19;
    }
}

void MainWindow::on_pushButton_20_clicked()
{
    Client client;
    string received = client.startClient(20);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_20->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_20->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_20->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_20->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_20->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_20;
    }else{
        this->secondPressed = ui->pushButton_20;
    }
}

void MainWindow::on_pushButton_21_clicked()
{
    Client client;
    string received = client.startClient(21);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_21->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_21->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_21->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_21->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_21->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_21;
    }else{
        this->secondPressed = ui->pushButton_21;
    }
}

void MainWindow::on_pushButton_22_clicked()
{
    Client client;
    string received = client.startClient(22);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_22->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_22->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_22->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_22->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_22->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_22;
    }else{
        this->secondPressed = ui->pushButton_22;
    }
}

void MainWindow::on_pushButton_23_clicked()
{
    Client client;
    string received = client.startClient(23);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_23->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_23->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_23->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_23->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_23->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_23;
    }else{
        this->secondPressed = ui->pushButton_23;
    }
}

void MainWindow::on_pushButton_24_clicked()
{
    Client client;
    string received = client.startClient(24);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_24->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_24->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_24->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_24->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_24->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_24;
    }else{
        this->secondPressed = ui->pushButton_24;
    }
}

void MainWindow::on_pushButton_25_clicked()
{
    Client client;
    string received = client.startClient(25);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_25->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_25->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_25->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_25->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_25->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_25;
    }else{
        this->secondPressed = ui->pushButton_25;
    }
}

void MainWindow::on_pushButton_26_clicked()
{
    Client client;
    string received = client.startClient(26);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_26->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_26->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_26->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_26->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_26->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_26;
    }else{
        this->secondPressed = ui->pushButton_26;
    }
}

void MainWindow::on_pushButton_27_clicked()
{
    Client client;
    string received = client.startClient(27);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_27->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_27->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_27->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_27->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_27->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_27;
    }else{
        this->secondPressed = ui->pushButton_27;
    }
}

void MainWindow::on_pushButton_28_clicked()
{
    Client client;
    string received = client.startClient(28);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_28->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_28->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_28->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_28->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_28->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_28;
    }else{
        this->secondPressed = ui->pushButton_28;
    }
}

void MainWindow::on_pushButton_29_clicked()
{
    Client client;
    string received = client.startClient(29);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_29->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_29->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_29->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_29->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_29->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_29;
    }else{
        this->secondPressed = ui->pushButton_29;
    }
}

void MainWindow::on_pushButton_30_clicked()
{
    Client client;
    string received = client.startClient(30);
    vector<string> commands = this->getWords(received);

    if (commands[0] == "TipoA"){
        ui->pushButton_30->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoA.png"));
    }
    if (commands[0] == "TipoB"){
        ui->pushButton_30->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoB.png"));
    }
    if (commands[0] == "TipoC"){
        ui->pushButton_30->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoC.png"));
    }
    if (commands[0] == "TipoD"){
        ui->pushButton_30->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoD.png"));
    }
    if (commands[0] == "TipoE") {
        ui->pushButton_30->setIcon(
                QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/TipoE.png"));
    }
    this->points = stoi(commands[1]);

    if(this->firstPressed == this->ghost){
        this->firstPressed = ui->pushButton_30;
    }else{
        this->secondPressed = ui->pushButton_30;
    }
}

void MainWindow::on_pushButton_31_clicked()
{
    if(this->secondPressed != this->ghost){
        if(this->points != 0){
            this->firstPressed->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/dun.png"));
            this->secondPressed->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/dun.png"));
            this->firstPressed->setEnabled(false);
            this->secondPressed->setEnabled(false);
        }else{
            this->firstPressed->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
            this->secondPressed->setIcon(
                    QIcon("/home/alejandra/build-Project01_memoryGame-Desktop_Qt_6_2_4_GCC_64bit-Debug/Resources/icon.png"));
        }
        this->firstPressed = this->ghost;
        this->secondPressed = this->ghost;
    }

}


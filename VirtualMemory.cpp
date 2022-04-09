#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <Tarjeta.cpp>

using namespace std;

class MatrizPaginada{
    int matriz_nums[5][6];

public:
    void createBoard(){
        int maxTypeA = 0;
        int maxTypeB = 0;
        int maxTypeC = 0;
        int maxTypeD = 0;
        int maxTypeE = 0;
        int total = 30;
        vector<string> board;
        srand(time(NULL));
        vector<string> types = {"TipoA", "TipoB", "TipoC", "TipoD", "TipoE"};
        while (total > 0) {
            int a = rand();
            string randomType = types[rand() % types.size()];
            if(randomType == "TipoA" and maxTypeA < 6){
                board.push_back("TipoA");
                maxTypeA +=1;
                total -= 1;
            }
            if(randomType == "TipoB" and maxTypeB < 6){
                board.push_back("TipoB");
                maxTypeB +=1;
                total -= 1;
            }
            if(randomType == "TipoC" and maxTypeC < 6){
                board.push_back("TipoC");
                maxTypeC +=1;
                total -= 1;
            }
            if(randomType == "TipoD" and maxTypeD < 6){
                board.push_back("TipoD");
                maxTypeD +=1;
                total -= 1;
            }
            if(randomType == "TipoE" and maxTypeE < 6){
                board.push_back("TipoE");
                maxTypeE +=1;
                total -= 1;
            }else{
                continue;
            }
        }
        write_in_matrix();
        write_in_text(board);
    }

    void write_in_matrix(){
        int count = 1;
        for(int i=0; i<5; i++){
            for(int j=0; j<6; j++){
                this->matriz_nums[i][j] = count;
                count++;
            }
        }
    }

    void write_in_text(vector<string> tipos) {
        int count = 0;
        ofstream file_;
        file_.open("Matriz.txt");
        for (int i = 0; i < 5; i++) {
            if(i == 0){

            }else{
                file_ << "\n";
            }
            for (int j = 0; j < 6; j++) {
                file_ << tipos[count] << " ";
                count++;
            }
        }
        file_.close();
    }

    string get_from_text(int i, int j){
        string word, line;
        int selectline = i + 1;

        ifstream file_("Matriz.txt");

        int a = 1;
        while (getline(file_, line))
        {
            if(a == selectline){
                istringstream ss(line);
                for (int b=0; b<j+1; b++){
                    ss >> word;
                }
                break;
            }
            a++;
        }
        return word;
    }

    int getCardLocation(int cardNumber, bool firstOrSecond) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 6; j++) {
                if (this->matriz_nums[i][j] == cardNumber) {
                    if (firstOrSecond) {
                        return i;
                    } else {
                        return j;
                    }
                }
            }
        }
        return 0;
    }

    tarjeta produce_random_card(){
        int i;
        int j;
        srand(time(NULL));
        i = rand() %4;
        j = rand() %5;
        tarjeta card = tarjeta(this->get_from_text(i,j), this->matriz_nums[i][j]);
        return card;

    }

};

class PagedArray {
public:
    MatrizPaginada matriz;
    tarjeta t1 = tarjeta("", 0);
    tarjeta t2 = tarjeta("", 0);
    tarjeta t3 = tarjeta("", 0);
    tarjeta t4 = tarjeta("", 0);
    tarjeta t5 = tarjeta("", 0);
    tarjeta t6 = tarjeta("", 0);
    tarjeta t7 = tarjeta("", 0);
    tarjeta t8 = tarjeta("", 0);
    tarjeta t9 = tarjeta("", 0);
    tarjeta t10 = tarjeta("", 0);

    PagedArray(){
        this->matriz.createBoard();
        this->shuffle();
    }

    string getCard(int cardNumber){
        return findInMemory(cardNumber).tipo;
    }

    void shuffle(){
        this->t1 = this->matriz.produce_random_card();
        this->t2 = this->matriz.produce_random_card();
        this->t3 = this->matriz.produce_random_card();
        this->t4 = this->matriz.produce_random_card();
        this->t5 = this->matriz.produce_random_card();
        this->t6 = this->matriz.produce_random_card();
        this->t7 = this->matriz.produce_random_card();
        this->t8 = this->matriz.produce_random_card();
        this->t9 = this->matriz.produce_random_card();
        this->t10 = this->matriz.produce_random_card();
    }

    tarjeta findInMemory(int cardNumber){
        if(this->t1.num == cardNumber){
            this->t1.cardIsPlaying();
            return t1;
        }
        if(this->t2.num == cardNumber){
            this->t2.cardIsPlaying();
            return t2;
        }
        if(this->t3.num == cardNumber){
            this->t3.cardIsPlaying();
            return t3;
        }
        if(this->t4.num == cardNumber){
            this->t4.cardIsPlaying();
            return t4;
        }
        if(this->t5.num == cardNumber){
            this->t5.cardIsPlaying();
            return t5;
        }
        if(this->t6.num == cardNumber){
            this->t6.cardIsPlaying();
            return t6;
        }
        if(this->t7.num == cardNumber){
            this->t7.cardIsPlaying();
            return t7;
        }
        if(this->t8.num == cardNumber){
            this->t8.cardIsPlaying();
            return t8;
        }
        if(this->t9.num == cardNumber){
            this->t9.cardIsPlaying();
            return t9;
        }
        if(this->t10.num == cardNumber){
            this->t10.cardIsPlaying();
            return t10;
        }else{
            return this->getNeededCard(cardNumber);
        }
    }

    tarjeta getNeededCard(int cardNumber){
        int location_i = this->matriz.getCardLocation(cardNumber, true);
        int location_j = this->matriz.getCardLocation(cardNumber, false);
        string newCardType = this->matriz.get_from_text(location_i, location_j);
        if(this->t1.playing == false){
            this->t1 = tarjeta(newCardType, cardNumber);
            this->t1.cardIsPlaying();
            return t1;
        }else{
            this->t2 = tarjeta(newCardType, cardNumber);
            this->t2.cardIsPlaying();
            return t2;
        }
    }

    string compareCards(string card1, string card2){
        if(card1 == card2){
            if(card1 == "TipoA"){
                return "5";
            }if(card1 == "TipoB"){
                return "3";
            }else{
                return "1";
            }
        }
        return "0";
    }

    void reset(){
        this->t1.cardIsntPlating();
        this->t2.cardIsntPlating();
        this->t3.cardIsntPlating();
        this->t4.cardIsntPlating();
        this->t5.cardIsntPlating();
        this->t6.cardIsntPlating();
        this->t7.cardIsntPlating();
        this->t8.cardIsntPlating();
        this->t9.cardIsntPlating();
        this->t10.cardIsntPlating();
    }
};
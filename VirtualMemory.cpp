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
    vector<int> memoryCards;


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

    bool contains(const int & elem)
    {
        bool result = false;
        for (auto & x : this->memoryCards)
        {
            if (x == elem)
            {
                result = true;
                break;
            }
        }
        return result;
    }

    tarjeta produce_random_card(){
        int i;
        int j;
        srand(time(NULL));
        i = rand() %4;
        j = rand() %5;
        tarjeta card = tarjeta(this->get_from_text(i,j), this->matriz_nums[i][j]);
        /*
        if(contains(this->matriz_nums[i][j])){
            return produce_random_card();
        }else{
            this->memoryCards.push_back(card.num);
        }
        */
        return card;
    }
};

class PagedArray {
public:
    MatrizPaginada matriz;
    int count;
    string firstCard;
    bool bothInMemory;
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
        this->bothInMemory = true;
        this->matriz.createBoard();
        this->shuffle();
        count = 0;
    }

    string getCard(int cardNumber){
        this->count++;
        string cardType = findInMemory(cardNumber).tipo;
        if (count%2 != 0){
            this->firstCard = cardType;
        }
        return cardType;
    }

    void shuffle(){
        this->matriz.memoryCards.clear();
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
        this->bothInMemory = false;
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

    string compareCards(string card2){
        int points = 0;
        if (this->count%2 == 0){
            if(this->firstCard == card2) {
                if (card2 == "TipoA") {
                    points += 5;
                }
                if (card2 == "TipoD") {
                    points += 3;
                } else if (card2 != "TipoA" and card2 != "TipoD") {
                    points += 1;
                }

                if (this->bothInMemory) {
                    points += 5;
                }
                this->shuffle();
            }
        }
        this->bothInMemory = true;
        return to_string(points);
    }

    void reset(){
        this->t1.cardIsntPlaying();
        this->t2.cardIsntPlaying();
        this->t3.cardIsntPlaying();
        this->t4.cardIsntPlaying();
        this->t5.cardIsntPlaying();
        this->t6.cardIsntPlaying();
        this->t7.cardIsntPlaying();
        this->t8.cardIsntPlaying();
        this->t9.cardIsntPlaying();
        this->t10.cardIsntPlaying();
    }
};
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <Tarjeta.cpp>
#include <list>

using namespace std;

class MatrizPaginada{
    int matriz_nums[5][6];
public:
    list<int> memoryCards;

    /**
     * Crea un vector con un orden aleatorio de la tarjetas
     */
    void createBoard(){
        int maxTypeA = 0;
        int maxTypeB = 0;
        int maxTypeC = 0;
        int maxTypeD = 0;
        int maxTypeE = 0;
        int maxTypeF = 0;
        int maxTypeG = 0;
        int total = 30;
        vector<string> board;
        srand(time(NULL));
        vector<string> types = {"TipoA", "TipoB", "TipoC", "TipoD", "TipoE", "TipoF", "TipoG"};
        while (total > 0) {
            string randomType = types[rand() % types.size()];
            if (randomType == "TipoA" and maxTypeA < 2) {
                board.push_back("TipoA");
                maxTypeA += 1;
                total -= 1;
            }
            if (randomType == "TipoB" and maxTypeB < 6) {
                board.push_back("TipoB");
                maxTypeB += 1;
                total -= 1;
            }
            if (randomType == "TipoC" and maxTypeC < 4) {
                board.push_back("TipoC");
                maxTypeC += 1;
                total -= 1;
            }
            if (randomType == "TipoD" and maxTypeD < 4) {
                board.push_back("TipoD");
                maxTypeD += 1;
                total -= 1;
            }
            if (randomType == "TipoE" and maxTypeE < 4) {
                board.push_back("TipoE");
                maxTypeE += 1;
                total -= 1;
            }
            if (randomType == "TipoF" and maxTypeF < 4) {
                board.push_back("TipoF");
                maxTypeF += 1;
                total -= 1;
            }
            if (randomType == "TipoG" and maxTypeG < 6) {
                board.push_back("TipoG");
                maxTypeG += 1;
                total -= 1;
            }else {
                continue;
            }

        }
        write_in_matrix();
        write_in_text(board);
    }

    /**
     * Crea una matriz donde para simular los numeros de tarjeta dependiendo de su ubicacion
     */
    void write_in_matrix(){
        int count = 1;
        for(int i=0; i<5; i++){
            for(int j=0; j<6; j++){
                this->matriz_nums[i][j] = count;
                count++;
            }
        }
    }

    /**
     * Escribe cada palabra del vector que recibe en un txt en forma de la matriz de juego
     * @param tipos el vector de createBoard()
     */
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

    /**
     * Encuentra en la matriz del txt el tipo de carta que recibe
     * @param i fila en la que esta la carta
     * @param j columna en la que esta la carta
     * @return
     */
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

    /**
     * Retorna en la fila y columna en la que esta la carta que se busca
     * @param cardNumber numero de carta
     * @param firstOrSecond true para obtener la fila y false la columna
     * @return
     */
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

    /**
     * encuentra si hay un numero en la lista
     * @param elem numero que tiene que buscar
     * @return true si se encuentra en la lista y false de lo contrario
     */
    bool contains(int elem)
    {
        bool result = false;
        for(list<int>::iterator i=this->memoryCards.begin(); i!=this->memoryCards.end(); i++){
            if(elem == *i){
                result = true;
                break;
            }
        }
        return result;
    }

    /**
     * Crea un puntero a una carta aleatorio
     * @return retorna el puntero
     */
    tarjeta * produce_random_card(){
        int i;
        int j;
        srand(time(NULL));
        i = rand() %4;
        j = rand() %5;
        tarjeta *card = new tarjeta(this->get_from_text(i,j), this->matriz_nums[i][j]);
        /*
        if(contains(this->matriz_nums[i][j])){
            return produce_random_card();
        }else{
            this->memoryCards.push_back(card->num);
        }
         */
        return card;
    }
};

class PagedArray {
public:
    MatrizPaginada matriz;
    int count;
    int playedCards;
    int pageHit;
    int pageFault;
    string firstCard;
    bool bothInMemory;
    tarjeta *t1;
    tarjeta *t2;
    tarjeta *t3;
    tarjeta *t4;
    tarjeta *t5;
    tarjeta *t6;
    tarjeta *t7;
    tarjeta *t8;
    tarjeta *t9;
    tarjeta *t10;

    PagedArray(){
        this->bothInMemory = true;
        this->matriz.createBoard();
        this->playedCards = 0;
        this->shuffle();
        this->count = 0;
    }

    /**
     * Mantiene la cuenta de cuantas carta se han volteado y llama la funcion para otener la carta que pide el servidor
     * @param cardNumber numero de la carta que se busca
     * @return el tipo de la carta que se busca
     */
    string getCard(int cardNumber){
        this->count++;
        string cardType = findInMemory(cardNumber)->tipo;
        if (count%2 != 0){
            this->firstCard = cardType;
        }
        return cardType;
    }

    /**
     * le asigna a los punteros las cartas aleatorias que se crean
     */
    void shuffle(){
        this->matriz.memoryCards.clear();
        this->t1 = this->matriz.produce_random_card();
        this->t2 = this->matriz.produce_random_card();
        if(this->playedCards < 20) {
            this->t3 = this->matriz.produce_random_card();
            this->t4 = this->matriz.produce_random_card();
            this->t5 = this->matriz.produce_random_card();
            this->t6 = this->matriz.produce_random_card();
            if (this->playedCards < 10) {
                this->t7 = this->matriz.produce_random_card();
                this->t8 = this->matriz.produce_random_card();
                this->t9 = this->matriz.produce_random_card();
                this->t10 = this->matriz.produce_random_card();
            }
        }
    }

    /**
     * Si la tarjeta que se busca esta en memoria retorna esta, de lo contrario llama la funcion que la busca en el txt
     * @param cardNumber numero de carta que se busca
     * @return retorna un puntero a la carta que se busca
     */
    tarjeta * findInMemory(int cardNumber) {
        if (this->t1->num == cardNumber) {
            this->t1->cardIsPlaying();
            this->pageHit += 1;
            return t1;
        }
        if (this->t2->num == cardNumber) {
            this->t2->cardIsPlaying();
            this->pageHit += 1;
            return t2;
        }
        if (this->playedCards < 20) {
            if (this->t3->num == cardNumber) {
                this->t3->cardIsPlaying();
                this->pageHit += 1;
                return t3;
            }
            if (this->t4->num == cardNumber) {
                this->t4->cardIsPlaying();
                this->pageHit += 1;
                return t4;
            }
            if (this->t5->num == cardNumber) {
                this->t5->cardIsPlaying();
                this->pageHit += 1;
                return t5;
            }
            if (this->t6->num == cardNumber) {
                this->t6->cardIsPlaying();
                this->pageHit += 1;
                return t6;
            }
            if (this->playedCards < 10) {
                if (this->t7->num == cardNumber) {
                    this->t7->cardIsPlaying();
                    this->pageHit += 1;
                    return t7;
                }
                if (this->t8->num == cardNumber) {
                    this->t8->cardIsPlaying();
                    this->pageHit += 1;
                    return t8;
                }
                if (this->t9->num == cardNumber) {
                    this->t9->cardIsPlaying();
                    this->pageHit += 1;
                    return t9;
                }
                if (this->t10->num == cardNumber) {
                    this->t10->cardIsPlaying();
                    this->pageHit += 1;
                    return t10;
                }
            }
        }
        return this->getNeededCard(cardNumber);
    }

    /**
     * Si la tarjeta no estaba en memoria este la busca en el txt
     * @param cardNumber numero de la tarjeta que se busca
     * @return retorna el puntero a la carta que se busca
     */
    tarjeta * getNeededCard(int cardNumber){
        int location_i = this->matriz.getCardLocation(cardNumber, true);
        int location_j = this->matriz.getCardLocation(cardNumber, false);
        string newCardType = this->matriz.get_from_text(location_i, location_j);
        this->bothInMemory = false;
        this->pageFault += 1;
        if(this->t1->playing == false){
            this->t1 = new tarjeta(newCardType, cardNumber);
            this->t1->cardIsPlaying();
            return t1;
        }else{
            this->t2 = new tarjeta(newCardType, cardNumber);
            this->t2->cardIsPlaying();
            return t2;
        }
    }

    /**
     * Compara la ultima carta que se volteo con la nueva
     * @param card2 carta que se acaba de voltear
     * @return retorna la cantidad de puntos obtenidos, los page hits y page fault en un string
     */
    string compareCards(string card2){
        int points = 0;
        if (this->count%2 == 0){
            if(this->firstCard == card2) {
                if (card2 == "TipoA") {
                    points += 5;
                }
                if (card2 == "TipoD") {
                    points += 4;
                }
                if (card2 == "TipoC") {
                    points += 3;
                }
                if (card2 == "TipoE") {
                    points += 2;
                }else if (card2 == "TipoB" or card2 == "TipoF" or card2 == "TipoG") {
                    points += 1;
                }
                if (this->bothInMemory) {
                    points += 5;
                }
                this->shuffle();
                this->playedCards += 2;
            }
            this->reset();
        }
        if(this->playedCards == 10){
            delete this->t10;
            this->t10 = NULL;
            delete this->t9;
            this->t9 = NULL;
            delete this->t8;
            this->t8 = NULL;
            delete this->t7;
            this->t7 = NULL;
        }
        if(this->playedCards == 20){
            delete this->t6;
            this->t6 = NULL;
            delete this->t5;
            this->t5 = NULL;
            delete this->t4;
            this->t4 = NULL;
            delete this->t3;
            this->t3 = NULL;
        }
        if(this->playedCards == 30){
            return "-" + to_string(points) + " " + to_string(this->pageHit)+ " " + to_string(this->pageFault);
        }
        this->bothInMemory = true;
        return to_string(points) + " " + to_string(this->pageHit)+ " " + to_string(this->pageFault);
    }

    /**
     * Vuelve a poner todas las tarjetas de forma jugable
     */
    void reset() {
        this->t1->cardIsntPlaying();
        this->t2->cardIsntPlaying();
        if (this->playedCards < 20) {
            this->t3->cardIsntPlaying();
            this->t4->cardIsntPlaying();
            this->t5->cardIsntPlaying();
            this->t6->cardIsntPlaying();
            if (this->playedCards < 10) {
                this->t7->cardIsntPlaying();
                this->t8->cardIsntPlaying();
                this->t9->cardIsntPlaying();
                this->t10->cardIsntPlaying();
            }
        }
    }
};
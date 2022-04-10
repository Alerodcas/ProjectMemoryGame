
#include <string>


using namespace std;

class tarjeta{
public:
    string tipo;
    int num;
    bool active;
    bool playing;



public:
    tarjeta(string t, int n){
        this->tipo = t;
        this->num = n;
        this->active = true;
        this->playing = false;
    }

    void complete(){
        this->active = false;
    }

    void cardIsPlaying(){
        this->playing = true;
    }

    void cardIsntPlaying(){
        this->playing = false;
    }
};

#include <string>


using namespace std;

class tarjeta{
public:
    string tipo;
    int num;
    bool playing;

public:
    tarjeta(string t, int n){
        this->tipo = t;
        this->num = n;
        this->playing = false;
    }

    void cardIsPlaying(){
        this->playing = true;
    }

    void cardIsntPlaying(){
        this->playing = false;
    }
};
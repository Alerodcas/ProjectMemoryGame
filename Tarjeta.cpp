
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

    /**
     * Para saber cuando una carta fue escogida por el jugador
     */
    void cardIsPlaying(){
        this->playing = true;
    }

    /**
     * Para desactivar que la carta esta siendo utilizada
     */
    void cardIsntPlaying(){
        this->playing = false;
    }
};
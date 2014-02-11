#include <iostream>
#include <cstdlib>

#include "Player.h"
#include "GameModel.h"

using namespace std;

int main(){
    GameModel jeu;
    Player j;

    jeu.set_player(j.get_x(), j.get_y());

    jeu.Display();

    return EXIT_SUCCESS ;
}

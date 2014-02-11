#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Player.h"


/* class Player
 *
 * Player() : Constructeur par défaut qui choisi aléatoirement l'abscisse et l'ordonnée du joueur
 * Player(int x, int y) : Constructeur paramétré qui défini la position du joueur dans la matrice
 * int get_x : accesseur à l'abscisse du joueur
 * int get_y : accesseur à l'ordonnée du joueur
 */
Player::Player(){
    std::cout << "constructeur par défaut"<< std::endl ;
    srand(time(NULL));
    m_pos_x=rand()%(18);
    std::cout << "m_pos_x : "<<m_pos_x<<std::endl ;
    m_pos_y=rand()%(18);
    std::cout << "m_pos_y : "<<m_pos_y<<std::endl ;
}

Player::Player(int x, int y){
    std::cout << "constructeur paramétrer" << std::endl;
    std::cout << "x : " << x << std::endl;
    std::cout << "y : " << y << std::endl;
    do{
        if(!(x>= 0 && x<=18)) {
            std::cout << "x : " ;
            std::cin >> x;
            std::cout << std::endl;
        }
        if(!(y>=0 && y<=18)){
            std::cout << "y : " ;
            std::cin >> y;
            std::cout << std::endl;
        }
    }
    while ((x<0 || x>18) || (y<0 || y>18));
    m_pos_x=x;
    m_pos_y=y;
}

Player::~Player(){}

int Player::get_x() const{
    return m_pos_x;
}

int Player::get_y() const{
    return m_pos_y;
}


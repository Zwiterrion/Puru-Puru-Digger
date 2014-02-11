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
    srand(time(NULL));
    m_pos_x=rand()%(18); // génère un nombre aléatoire entre 0 et 17 inclus
    m_pos_y=rand()%(18);
    m_pointeur_pt_card=&m_pt_cardinaux[0][0];
}

Player::Player(int x, int y){
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
    m_pointeur_pt_card=&m_pt_cardinaux[0][0];
}

Player::~Player(){}

int Player::get_x() const{
    return m_pos_x;
}

int Player::get_y() const{
    return m_pos_y;
}

void Player::set_direction(int *p){
   m_pointeur_pt_card=p;
}

int* Player::get_direction()const{
    std::cout << "Adresse du tableau : "<< &m_pt_cardinaux << std::endl;
    std::cout << "Pointeur sur le tableau : "<< m_pointeur_pt_card << std::endl;
    return m_pointeur_pt_card;
}




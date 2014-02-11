#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <string>

#include "GameModel.h"

using namespace std;

GameModel::GameModel(){
    srand(time(NULL));
    for(int i=0; i<18; i++){
        for(int j=0; j<18; j++)
            m_matrice[i][j]=elem[rand()%(6+(i%2))];
    }
}

GameModel::~GameModel(){};

void GameModel::Display() const{
    for(int i=0; i<18; i++){
        cout << "\t\t\t\t|---";
        for(int k=0; k<17; k++)
            cout << "|---";
        cout <<"|" << endl << "\t\t\t\t"; 
        for(int j=0; j<18; j++){
            if(m_matrice[i][j].length()==3)
                cout << "|" << m_matrice[i][j];
            else
                cout << "| " <<m_matrice[i][j] <<" ";
        }
        cout << "|" <<endl ; 
    }
    cout << "\t\t\t\t|---";
    for(int k=0; k<17; k++)
        cout << "|---";
    cout << "|" <<endl ; 
}

void GameModel::set_player(int x, int y){
    m_matrice[y][x]=elemen[7];
}

#ifndef GAMEMODEL_H_INCLUDED
#define GAMEMODEL_H_INCLUDED


class GameModel{
    private :
        std::string m_matrice[18][18];
        std::string elem[9]={"1", "2", "3", "4", "5", "6", "@@@", "$$$", "x"};
        int m_score;                        //inutilisé
        int m_lvl;                          //inutilisé
        int m_target;                       //inutilisé
        int m_nb_move;                      //inutilisé
        int m_life;                         //inutilisé
    public :
        GameModel();                    //done
        GameModel(int width, int height);   //inutilisé
        ~GameModel();                   //done
        void Display() const;           // juste la grille
        void set_player(int x, int y);  //done
        void set_move(int x, int y);    // done 
        int set_score(int score);       // non fait
        int set_targer(int target);     // non fait
};
#endif // GAMEMODEL_H_INCLUDED

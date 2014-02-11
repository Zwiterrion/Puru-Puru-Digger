#ifndef PLAYER_H_INCLUED
#define PLAYER_H_INCLUDED

class Player{
    private :
        int m_pos_x;
        int m_pos_y;
        int m_pt_cardinaux[8][2]={{0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};
        /*                            NORD     N-E     EST     S-E      SUD      S-O      OUEST     N-O
         * les points cardinaux (direction possible) classé dans le sens des aiguilles d'une montre 
         */
        int *m_pointeur_pt_card;
        std::string m_nom;      // inutilisé
        
    public :
        Player();               // done
        Player(int x, int y);   // done
        ~Player();              // done
        int get_x() const;      // inutilisé
        int get_y() const;      // inutilisé
        void set_direction(int *p); // non fait
        int *get_direction() const; // non fait
};

#endif // PLAYER_H_INCLUDED

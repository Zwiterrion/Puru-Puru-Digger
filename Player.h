#ifndef PLAYER_H_INCLUED
#define PLAYER_H_INCLUDED

class Player{
    private :
        int m_pos_x;
        int m_pos_y;
        std::string m_nom;      // inutilisé
        
    public :
        Player();               // done
        Player(int x, int y);   // done
        ~Player();              // done
        int get_x() const;      // inutilisé
        int get_y() const;      // inutilisé
};

#endif // PLAYER_H_INCLUDED

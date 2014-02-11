#ifndef PLAYER_H_INCLUED
#define PLAYER_H_INCLUDED

class Player{
    private :
        int m_pos_x;
        int m_pos_y;
        std::string m_nom;
        
    public :
        Player();               // done
        Player(int x, int y);   // done
        ~Player();              // done
        int get_x() const;      // done
        int get_y() const;      // done
};

#endif // PLAYER_H_INCLUDED

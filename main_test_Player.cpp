#include <iostream>
#include <cstdlib>

#include "Player.h"

int main(){
    Player j1;
    std::cout << "j1" << std::endl;
    Player j2(19, 23);
    std::cout << "j2" << std::endl;

    std::cout << "x : " << j1.get_x() << std::endl ; 
    std::cout << "y : " << j1.get_y() << std::endl ; 
    
    std::cout << "x : " << j2.get_x() << std::endl ; 
    std::cout << "y : " << j2.get_y() << std::endl ; 

    return EXIT_SUCCESS;
}


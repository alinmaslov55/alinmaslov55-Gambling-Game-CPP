#include "print_to_screen.h"

int show_menu(){
    int option = 0;
    while(!(option >= 0 && option <= 3)){
        std::cout << "Choose option: " << std::endl;
        std::cout << "1. Play a Round" << std::endl;
        std::cout << "2. Show statistics" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cin >> option;
    }
    return option;
}
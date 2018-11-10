#include "Item.h"
#include <ncurses.h>
#include <iostream>

int main(){
    
    Item* temp = new Item();
    initscr();
    keypad(stdscr, true);
    noecho();
    
    temp->createMatrix();
    temp->llenarMatrix(1);
    temp->imprimirMatrix();
    temp->setX(3);
    std::cout << temp->getX() << std::endl;
    
    endwin();
    return 0;
}

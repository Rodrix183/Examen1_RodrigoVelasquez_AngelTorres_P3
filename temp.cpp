#include "Item.h"

#include <iostream>

int main(){
    
    Item* temp = new Item();
    
    temp->createMatrix();
    temp->llenarMatrix(1);
    temp->imprimirMatrix();
    temp->setX(3);
    std::cout << temp->getX() << std::endl;
    
    return 0;
}

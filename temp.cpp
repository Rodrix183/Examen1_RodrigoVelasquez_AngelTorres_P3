#include "Item.h"
#include <ncurses.h>
#include <iostream>

Item*** createMatrix();
Item*** llenarMatrix(Item***,int nivel);
void imprimirMatrix(Item***);
void freeup();

int main(){
    
    Item* temp = new Item();
    //Item*** matrix = NULL;
    //matrix = createMatrix();
    
    initscr();
    keypad(stdscr, true);
    noecho();
    
    temp->createMatrix();
    temp->llenarMatrix(1);
    temp->imprimirMatrix();
    temp->setX(3);
    std::cout << temp->getX() << std::endl;
    
    //endwin();
    return 0;
}

Item*** createMatrix(){
    Item*** matrix = new Item**[SIZE];
    for( int i = 0; i < SIZE; i++){
        matrix[i] = new Item*[SIZE];
    }
    for(int i = 0; i < SIZE; i++){
        for( int j = 0; j < SIZE; j++){
            matrix[i][j] = new Item[10];
        }
    }
    return matrix;
}

Item*** llenarMatrix(Item*** matrix, int nivel){
    //this->nivel = nivel;
    for(int i = 0; i < SIZE; i++){
        for( int j = 0; j < SIZE; j++){
            if(i <= 3 && j == 0){//lenar bloques
                matrix[i][j] = new Item(3,0,i,j,nivel,'B');
            }
            if(i>3){//espacio vacio
                matrix[i][j] = new Item(3,0,i,j,nivel, 'c' );
            }
            
        }
    }
    return matrix;
}

void imprimirMatrix(Item*** matrix){
    start_color();
    init_pair(1,COLOR_BLUE,COLOR_RED);
    init_pair(2,COLOR_GREEN,COLOR_MAGENTA);  

    for( int i= 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(matrix[i][j]->getTipo() == 'B'){
                //std::cout << getTipo() << ' ';
                attron(COLOR_PAIR(1));
                mvaddch(j,i,'x');
                //std::cout << "B";
                refresh();
            }
	    if(matrix[i][j]->getTipo() == 'c'){
                
                attron(COLOR_PAIR(2));
                mvaddch(j,i,'g');
                refresh();
            }
        }
        //std::cout << std::endl;
    }
    attroff(COLOR_PAIR(1));
    attroff(COLOR_PAIR(2));
}

void freeup(){
    
}

#include "Item.h"
//<<<<<<< HEAD
#include <iostream>
#include "ncurses.h"

using namespace std;
//=======
#include "ncurses.h"

#include <iostream>
//>>>>>>> dfa1bf1d252737cc5e0448363cb54c546e4ea8c7

Item::Item(){
    
    this->vidas = 3;
    this->golpes =0;
    this->px = 0;
    this->py = 0;
    this->nivel = 0;
    this->tipo = ' ';    
//<<<<<<< HEAD
    this->tablero = NULL;
//=======
    this->tablero = NULL;
    this->matrix = NULL;
//>>>>>>> dfa1bf1d252737cc5e0448363cb54c546e4ea8c7
}

Item::~Item(){
    liberar();
}


Item::Item(int vidas, int golpes, int px, int py, int nivel, char tipo){
    this->vidas = vidas;
    this->golpes = golpes;
    this->px = px;
    this->py = py;
    this->nivel = nivel;
    this->tipo = tipo;
}


Item*** Item::crearTablero(){
    
    Item*** tablero = new Item**[10];
    for(int i = 0; i < 10; i++){
        tablero[i]= new Item*[10];
    }

    for(int i = 0; i<10; i++){
        for(int j = 0; j < 10; j++){
            tablero[i][j]= NULL;
        }
    }
    return tablero;
}

Item*** Item::createMatrix(){
    matrix = new Item**[SIZE];
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

Item*** Item::llenarMatrix(int nivel){
    //this->nivel = nivel;
    for(int i = 0; i < SIZE; i++){
        for( int j = 0; j < SIZE; j++){
            if(i <= 3){//lenar bloques
                matrix[i][j] = new Item(3,0,i,j,nivel,'B');
            }
            if(i>3){//espacio vacio
                matrix[i][j] = new Item(3,0,i,j,nivel, ' ' );
            }
            if( i ==9 && j>=3 && j<=7 ){
                matrix[i][j] = new Item(3,0,i,j,nivel,'b');
            }
            
        }
    }
    return matrix;
}

void Item::imprimirMatrix(){
    start_color();
    init_pair(1,COLOR_BLUE,COLOR_RED);    

    for( int i= 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(matrix[i][j]->getTipo() == 'B'){
                std::cout << getTipo() << ' ';
                attron(COLOR_PAIR(1));
                mvaddch(j,i,'x');
                std::cout << "B";
                refresh();
            }else{
                //std::cout << std::endl;
            }
        }
        //std::cout << std::endl;
    } 
}

void Item::freeup(){
    
}


void Item::llenar(){
    /*for( int i =0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            tablero[i][j] = new Item(0,1,i,j,1,'B');
        } 
    }
    for(int i =0; i < 10;i++){
        for(int j = 0;j < 10;j++){
            if(i == 0){//blanco
                tablero[i][j] = 'B';
            }else if(i == 1){//amarillo
                tablero[i][j] = 'A';
            }else if(i == 2){//azul
                tablero[i][j] = 'Z';
            }else if(i == 3){//rojo
                tablero[i][j] = 'R';
            }else if(i == 8 && j == 5){//pelotita
                tablero[i][j] = 'x';
                xBall = i; //global
                yBall = j;
            }else if(i == 9){
                //if(j == 3 || j == 4 || j == 5 || j == 6){
                    tablero[i][j] = '-';
                    x1Bar = 3;
                    x2Bar = 4;
                    x3Bar = 5;
                    x4Bar = 6;
                    yBar = i;
                //}
            }
            
            //else de que no hay nada
            else{
                tablero[i][j] = ' ';
            }
        }
    }*/
}

void Item::print(){
/*
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++ ){
            printw(tablero[i][j]);
        }
        move(i,j);
        refresh();
    }
    refresh();
*/
}
void Item::mover(){
    char c;
    int x = 8;
    int y = 3;
    clear();
    mvprintw(x,y,"xxxx");
    refresh();
    do{
        c = getch();
        switch(c){
            case 'a':{
                if(y>=1){
                    y--;
                    clear();
                    mvprintw(x,y,"xxxx");
                    refresh();
                }                
            }break;
            
            case 'd':{
                if(y<=9){
                    y++;
                    clear();
                    mvprintw(x,y,"xxxx");
                    refresh();
                }
            }break;
        }
        refresh();
    }while(c!='q');
    endwin();
}





void Item::liberar(){
    /*
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            delete[] tablero;
            tablero[i][j]=NULL;
        }
        
    }
    for(int i = 0; i <10; i++){
        delete[] tablero;
        tablero[i]= NULL;
    }

    delete[] tablero;
    tablero = NULL;
    */
}

/*void Item::iniciar(){
    bool vive = true;
    do{
        
    }while(vive);
}*/











//Mutadores y accesores
void Item::setGolpe(int golpes){
    this->golpes = golpes;
}
int Item::getGolpe(){
    return this->golpes;
}
 
void Item::setX(int px){
    this->px = px;
}
int Item::getX(){
    return this->px;
}
 
void Item::setY(int py){
    this->py = py;
}
int Item::getY(){
    return this->py;
}
 
void Item::setNivel(int nivel){
    this->nivel = nivel;
}
int Item::getNivel(){
    return this->nivel;
}
 
void Item::setTipo(char tipo){
    this->tipo = tipo;
}
char Item::getTipo(){
    return this->tipo;
}
 
void Item::setVida(int vidas){
    this->vidas = vidas;
}

int Item::getVida(){
    return this->vidas;
}


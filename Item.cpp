#include "Item.h"
#include "ncurses.h"

Item::Item(){
    
}

Item::~Item(){
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

void Item::llenar(Item*** tablero){
    for(int i =0; i < 10;i++){
        for(int j = 0;j < 10;j++){
            if(i == 0){//blanco
                tablero[i][j] = "B";
            }else if(i == 1){//amarillo
                tablero[i][j] = "A";
            }else if(i == 2){//azul
                tablero[i][j] = "Z";
            }else if(i == 3){//rojo
                tablero[i][j] = "R";
            }else{
                tablero[i][j] = " ";
            }
        }
    }
}

void Item::print(Item*** matriz){

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; ){
            printw(matriz[i][j]);
        }
        move(i,j);
        refresh();
    }
    refresh();

}
void Item::mover(){

}

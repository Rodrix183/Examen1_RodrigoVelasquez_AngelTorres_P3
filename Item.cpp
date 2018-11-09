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
void Item::mover(int c){
    if(c==97 && x1Bar>= 0){
        x1Bar-=1;
        x2Bar-=1;
        x3Bar-=1;
        x4Bar-=1;
    }else if(c==100 && x4Bar<=9){
        x1Bar+=1;
        x2Bar+=1;
        x3Bar+=1;
        x4Bar+=1;
    }else{
        //no hace nada
    }
}

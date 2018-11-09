#include "Item.h"
#include "ncurses.h"

Item::Item(){
    
    this->vidas = 4;
    this->golpes =0;
    this->px = 0;
    this->py = 0;
    this->nivel = 0;
    this->tipo = ' ';    
    this->tablero = NULL;
}

Item::~Item(){
    liberar();
}


Item::Item(int vidas , int golpes, int px, int py, int nivel, char tipo){
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

void Item::llenar(){
    /*for(int i =0; i < 10;i++){
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
void Item::mover(int c){
    /*
    if(c==97 && x1Bar>= 0){//izquierda
        x1Bar-=1;
        x2Bar-=1;
        x3Bar-=1;
        x4Bar-=1;
        direccionI = 1;
        
    }else if(c==100 && x4Bar<=9){//derecha
        x1Bar+=1;
        x2Bar+=1;
        x3Bar+=1;
        x4Bar+=1;
        direccionI = 2;

    }else{
        //no hace nada
    }
*/
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

#include "Item.h"
#include <ncurses.h>
#include <iostream>

using namespace std;

WINDOW *create_newwin(int height, int width, int starty, int startx);
void destroy_win(WINDOW *local_win);


int main(int argc, char** argv){    
    bool vive = true;
    string nombre = "";
    int lvl = 1;//lvl1 por defecto
    //instancia de Item
    Item* it = new Item();
     
    WINDOW *my_win;
    int startx, starty, width, height;
    int ch;
    keypad(stdscr, TRUE);
    cout<<"Ingrese nombre"<<endl;
    cin>>nombre;
    //Inicia ncurses
    initscr();
    cbreak();
    noecho();
    height = 10;
    width = 10;
    starty = 10;/* (LINES - height) / 2;*/
    startx =10;/* (LINES - width) / 2;*/
    //printw("Hello world\n");  
    //refresh();

    //my_win = create_newwin(height, width, starty, startx);
   
   /* while((ch = getch()) != KEY_F(1)){
        switch(ch){
            case KEY_LEFT:
                destroy_win(my_win);
                my_win = create_newwin(height, width, starty, --startx);
                break;
            case KEY_RIGHT:
                destroy_win(my_win);
                my_win = create_newwin(height, width, starty, ++startx);
                break;
        }
    }*/
 
    int resp = 0;
    //int pto = 0;
    char car = ' ';
    printw("Bienvenido\n");
    do{
        printw("1. Nivel 1\n");
        printw("2. Nivel 2\n");
        printw("3. Nivel 3\n");
        printw("4. Salir\n");
        printw("**La letra q es para salir del juego**\n");
        printw("Ingrese opcion \n");
        resp = getch()-'0';
        //printw("Bienvenido \n");
        switch(resp){
            case 1:{//Nivel 1
                printw("------------lvl1------------\n");
                //iniciar();
                it->setNivel(1);
                it->mover();
                /*while(vive == true){
                //vive = iniciar();
                }*/
            }break;

            case 2:{//Nivel 2
                printw("------------lvl2------------\n");
                it->setNivel(2);
                //it->iniciar();
                /*while(vive == true){
                //vive = iniciar();
                }*/
            }break;

            case 3:{//Nivel 3
                printw("------------lvl3------------\n");
                it->setNivel(3);
                //it->iniciar();
                /*while(vive == true){
                //vive = iniciar();
                }*/
            }break;

            default:
                //printw("Saliendo...\n");
                resp = 4;            
        }//Final switch
        mvprintw(10,10,"Game_Over\n");
    }while(resp!=4);
    refresh();
    endwin();
    return 0;
}


//Crear la ventana
/*WINDOW* create_newwin(int height, int width, int starty, int startx){
    WINDOW* local_win;
    local_win = newwin(height, width, starty, startx);
    box(local_win,0,0);
    wrefresh(local_win);
    return local_win;
}

void destroy_win(WINDOW* local_win){
    wborder(local_win, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');

    wrefresh(local_win);
    delwin(local_win);
}*/

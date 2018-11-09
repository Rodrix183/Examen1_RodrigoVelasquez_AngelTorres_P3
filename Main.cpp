//#include "Item.h"
#include <ncurses.h>
#include <iostream>

using namespace std;

WINDOW *create_newwin(int height, int width, int starty, int startx);
void destroy_win(WINDOW *local_win);


int main(int argc, char** argv){    
    
    string nombre = "";
    WINDOW *my_win;
    int startx, starty, width, height;
    int ch;
    keypad(stdscr, TRUE);
    cout<<"Ingrese nombre";
    cin>>nombre;
    //Inicia ncurses
    initscr();
    cbreak();
    
    height = 10;
    width = 10;
    starty = 10;/* (LINES - height) / 2;*/
    startx =10;/* (LINES - width) / 2;*/
    printw("Hello world\n");  
    refresh();

    my_win = create_newwin(height, width, starty, startx);
   
    while((ch = getch()) != KEY_F(1)){
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
    }
 
    int resp = 0;
    do{
        printw("1. Nivel 1");
        //<<"2. Nivel 2"<<endl
        //<<"3. Nivel 3"<<endl
        //<<"4. Salir"<<endl
        //<<"Ingrese opcion "<<endl;
        resp = getch();
        printw("Bienvenido ",nombre);
        switch(resp){
            case 1:{//Nivel 1

            }break;
            case 2:{//Nivel 2

            }break;
            case 3:{//Nivel 3

            }break;
            default:
                //cout << "Saliendo.." << endl;
                resp = 4;
            
        }//Final switch
    }while(resp!=4);

    endwin();
    return 0;
}


//Crear la ventana
WINDOW* create_newwin(int height, int width, int starty, int startx){
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
}

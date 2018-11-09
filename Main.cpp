#include <ncurses.h>

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

WINDOW *create_newwin(int height, int width, int starty, int startx);
//void destroy_win(WINDOW *local_win);

int main(int argc, char *argv[]){    
    
    WINDOW *my_win;
    int startx, starty, width, height;
    int ch;
    
    //Inicia ncurses
    initscr();
    cbreak();

    height = 10;
    width = 10;
    starty = (LINES - height) / 2;
    startx = (LINES - width) / 2;
    printw("Hello world");  

    my_win = create_newwin(height, width, starty, startx);
    
    int resp = 0;
    do{
        cout<<"1. Nivel 1"<<endl
        <<"2. Nivel 2"<<endl
        <<"3. Nivel 3"<<endl
        <<"4. Salir"<<endl
        <<"Ingrese opcion "<<endl;
        cin>>resp;
        switch(resp){
            case 1:{//Nivel 1

            }break;
            case 2:{//Nivel 2

            }break;
            case 3:{//Nivel 3

            }break;
            default:
                cout << "Saliendo.." << endl;
                resp = 4;
            
        }//Final switch
    }while(resp!=4);

    return 0;
}

WINDOW* create_newwin(int height, int width, int starty, int startx){
    WINDOW* local_win;
    local_win = newwin(height, width, starty, startx);
    box(local_win,0,0);
    return local_win;
}

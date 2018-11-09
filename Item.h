#ifndef ITEM_H
#define ITEM_H

#define SIZE 10

class Item(){
    
    private: 
        int plataforma;
        int vidas;
        int golpes; 
        Item*** tablero;
 
    public:
        Item();
        ~Item();
        
        int*** crearTablero();
        void llenarTablero();
        void imprimirTablero();
        void liberar();

        void mover();
        void iniciar();
};

#endif

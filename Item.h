#ifndef ITEM_H
#define ITEM_H

#define SIZE 10

class Item(){
    
    private: 
        int plataforma;
        int vidas;
        int golpes; 
        
        Item*** tablero;
        Item bloque;
        Item plataforma;
        Item bola;
         
    public:
        Item();
        ~Item();
        
        int*** crearTablero();
        void llenarTablero();
        void imprimirTablero();
        void liberar();

        void mover();
        void iniciar();

        void pelota(Item***, int,int);
};

#endif

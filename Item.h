#ifndef ITEM_H
#define ITEM_H

#define SIZE 10

class Item(){
    
    private: 
        int plataforma;
        int vidas;
        int golpes; 
        
        //posiciones en x y de la barra
        int x1Bar;
        int x2Bar;
        int x3Bar;
        int x4Bar;
        int yBar;

        //posiciones en x y de la pelota
        int xBall;
        int yBall;
        
        Item*** tablero;
        Item bloque;
        Item plataforma;
        Item bola;
         
    public:
        Item();
        ~Item();
        
        int*** crearTablero();
        void llenar(Item***);
        void print(Item***);
        void liberar();

        void mover(int);
        void iniciar();

        //void pelota(Item***, int,int);
};

#endif

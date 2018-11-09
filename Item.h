#ifndef ITEM_H
#define ITEM_H

#define SIZE 10

class Item{
    
    private: 
        
        int vidas;
        int golpes;
        int px;
        int py; 
        int size;   
        int nivel;
        char tipo;
     
        /*
        //posiciones en x y de la barra
        int x1Bar;
        int x2Bar;
        //int x3Bar;
        //int x4Bar;
        int yBar;

        //posiciones en x y de la pelota
        int xBall;
        int yBall;
        
        //direccion
        int direccionI;
        char** tablero;
        char bloque;
        //char plataforma;
        char bola;
         */
    public:
        //Constructores
        Item();
        //tablero, golpes, px, py, nivel, tipo
        Item(char**, int, int, int, int, char);        
        
        //Destructor
        ~Item();
        
        Item*** crearTablero();
        void llenar();
        void print();
        void liberar();

        void mover(int);
        //void iniciar();

        //void pelota(Item***, int,int);
};

#endif

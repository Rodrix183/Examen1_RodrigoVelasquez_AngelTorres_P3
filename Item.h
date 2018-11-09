#ifndef ITEM_H
#define ITEM_H

#define SIZE 10

class Item{
    
    private: 
        
        int vidas;
        int golpes;
        int px;
        int py; 
       
        int nivel;
        char tipo;
    
        char** tablero; 
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
        //vidas, golpes, px, py, nivel, tipo
        Item( int, int, int, int, int, char);        
        
        //Destructor
        ~Item();

        //Accesores y mutadores
        void setGolpe(int);
        int getGolpe();

        void setX(int);
        int getX();

        void setY(int);
        int getY();

        void setNivel(int);
        int getNivel();

        void setTipo(char);
        char getTipo();
        
        void setVida(int);
        int getVida();        
        
        Item*** crearTablero();
        void llenar();
        void print();
        void liberar();

        void mover(int);
        //void iniciar();

        //void pelota(Item***, int,int);
};

#endif

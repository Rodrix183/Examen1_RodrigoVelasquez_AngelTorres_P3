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
        Item*** matrix;
        
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
        
        Item*** createMatrix();
        Item*** llenarMatrix(int); //nivel
        void imprimirMatrix();
        void freeup();        

        void llenar();
        void print();
        void liberar();

        void mover(int);
        //void iniciar();

        //void pelota(Item***, int,int);
};

#endif

#include <iostream>

using namespace std;

int main(){    
    int resp = 0;
    do{
        cout<<"1. Nivel 1"<<endl
        <<"2. Nivel 2"<<endl
        <<"3. Nivel 3"<<endl
        <<"4. Salir"<<endl
        <<"Ingrese opcion "<<endl;
        cin>>resp;
        switch(resp){
            case 1:{

            }break;
            case 2:{

            }break;
            case 3:{

            }break;
            default:
                cout>>"Saliendo.."<<endl;
                resp = 4;
            
        }
    }while(resp!=4);
    return 0;
}


#include "gestorclientes.h"
#include <iostream>
using namespace std;
void GestorClientes::menuClientes(){
    int opcion;
    do{
        cout<<"MENU CLIENTES"<<endl;
        cout<<"1) Alta"<<endl;
        cout<<"0) Volver"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1: altaCliente(); break;
        }
    }while(opcion!=0);
}

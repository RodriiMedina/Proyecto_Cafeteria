
#include "gestorproductos.h"
#include <iostream>
using namespace std;
void GestorProductos::menuProductos(){
    int opcion;
    do{
        cout<<"MENU PRODUCTOS"<<endl;
        cout<<"1) Alta"<<endl;
        cout<<"0) Volver"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1: agregarProducto(); break;
        }
    }while(opcion!=0);
}

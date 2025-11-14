
#include "gestorventas.h"
#include <iostream>
using namespace std;
void GestorVentas::menuVentas(){
    int opcion;
    do{
        cout<<"MENU VENTAS"<<endl;
        cout<<"1) Registrar"<<endl;
        cout<<"0) Volver"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1: registrarVenta(); break;
        }
    }while(opcion!=0);
}

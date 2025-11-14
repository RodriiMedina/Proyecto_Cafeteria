#include "Proveedor.h"
#include <iostream>
using namespace std;

Proveedor::Proveedor(){
    id_Proveedor = 0;
    strcpy(nombre_Proveedor, "");
    strcpy(direccion_Proveedor, "");
    strcpy(telefono_Proveedor, "");
    estado_Proveedor = true;
}

void Proveedor::setId_Proveedor(int id){ id_Proveedor = id; }
void Proveedor::setNombre_Proveedor(const char *n){ strcpy(nombre_Proveedor,n); }
void Proveedor::setDireccion_Proveedor(const char *d){ strcpy(direccion_Proveedor,d); }
void Proveedor::setTelefono_Proveedor(const char *t){ strcpy(telefono_Proveedor,t); }
void Proveedor::setEstado_Proveedor(bool e){ estado_Proveedor=e; }

int Proveedor::getId_Proveedor() const{ return id_Proveedor; }
const char* Proveedor::getNombre_Proveedor() const{ return nombre_Proveedor; }
const char* Proveedor::getDireccion_Proveedor() const{ return direccion_Proveedor; }
const char* Proveedor::getTelefono_Proveedor() const{ return telefono_Proveedor; }
bool Proveedor::getEstado_Proveedor() const{ return estado_Proveedor; }

void Proveedor::cargarProveedorDesdeTeclado(){
    char aux[100];
    cout<<"NOMBRE DEL PROVEEDOR: ";
    cin.ignore();
    cin.getline(aux,100);
    setNombre_Proveedor(aux);

    cout<<"DIRECCION DEL PROVEEDOR: ";
    cin.getline(aux,100);
    setDireccion_Proveedor(aux);

    cout<<"TELEFONO DEL PROVEEDOR: ";
    cin.getline(aux,100);
    setTelefono_Proveedor(aux);

    setEstado_Proveedor(true);
}

void Proveedor::mostrarProveedorEnPantalla() const{
    cout<<"ID: "<<id_Proveedor<<endl;
    cout<<"NOMBRE: "<<nombre_Proveedor<<endl;
    cout<<"DIRECCION: "<<direccion_Proveedor<<endl;
    cout<<"TELEFONO: "<<telefono_Proveedor<<endl;
    cout<<"ESTADO: "<<(estado_Proveedor? "ACTIVO":"INACTIVO")<<endl;
    cout<<"----------------------------------------"<<endl;
}

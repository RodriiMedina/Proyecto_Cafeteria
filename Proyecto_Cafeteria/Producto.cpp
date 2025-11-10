#include "Producto.h"
#include <iostream>
#include <cstring>

Producto::Producto(int idProducto, const char* nombre, bool categoria, float precio, int stock)
{
    /*
    this->setId(idProducto);
    this->setCategoria(categoria);
    this->setStock(stock);
    */

    this->setNombre(nombre);
    this->setPrecio(precio);

}


void Producto::setPrecio(float precio){
    if(precio>0.0){
        this -> precio=precio;
        }else{
            std::cout<<"El precio no puede ser negativo"<<std::endl;
        }
}

void Producto::setNombre(const char* nombre){
    if(nombre!=nullptr && nombre[0]!= '\0'){
        strncpy(this -> nombre, nombre, maxNombre-1);
        this->nombre[maxNombre - 1] = '\0';
    }else{ this->nombre[0]= '\0';
        std::cout<<"el nombre ingresado está vacio o es invalido"<<std::endl;
    }
}

bool Producto::setCategoria(bool categoria){
    this->categoria=categoria;
}

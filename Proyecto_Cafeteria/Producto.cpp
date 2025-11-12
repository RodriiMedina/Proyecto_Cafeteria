#include "Producto.h"
#include <iostream>
#include <cstring>



Producto::Producto():idProducto(0), categoria(false), precio(0.0f), stock(0){

    this->nombre[0] = '\0';

}

Producto::Producto(int idProducto, const char* nombre, bool categoria, float precio, int stock)
: idProducto(0), categoria(categoria), precio(0.0f), stock(0)
{

    this->setId(idProducto);
    this->setStock(stock);
    this->setNombre(nombre);
    this->setCategoria(categoria);
    this->setPrecio(precio);

}

void Producto::mostrarProducto(){
     std::cout<< "ID: " << idProducto<< std::endl;
     std::cout<< " | Nombre: " << nombre<< std::endl;

     if(categoria){
        std::cout<<" | Categoria: Bebida"<< std::endl;

     }else  std::cout<<" | Categoria: Comida"<< std::endl;


     std::cout<< " | Precio: " << precio<< std::endl;
     std::cout<< " | Stock: " << stock << std::endl;

}

void Producto::setId(int idProducto){
    if(idProducto>0){
    this->idProducto = idProducto;}
}

void Producto::setStock(int stock){
    if(stock>0){
        this->stock = stock;
    }else std::cout<<"El stock no puede ser negativo"<<std::endl;
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

void Producto::setCategoria(bool categoria){
    this->categoria=categoria;
}

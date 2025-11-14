#include <iostream>
#include "Persona.h"

/*Producto::Producto(int idProducto, const char* nombre, bool categoria, float precio, int stock, int tamanio)
: idProducto(0), categoria(categoria), precio(0.0f), stock(0), tamanio(tamanio)
{
    this->setId(idProducto);
    this->setStock(stock);
    this->setNombre(nombre);
    this->setCategoria(categoria);
    this->setPrecio(precio);
}*/

Persona::Persona(int idPersona, const char* nombre, const char* apellido, bool eliminado)
: idPersona(0), eliminado(eliminado)
{
    this->setIdPersona(idPersona);
    this->setNombre(nombre);
    this->setApellido(apellido);
    this->setEliminado(eliminado);
}

void Persona::setIdPersona(int id) {
    this->setIdPersona(idPersona);
}
void Persona::setNombre(const char* nombre) {
this->setNombre(nombre);
}

void Persona::setApellido(const char* apellido) {
    this->setApellido(apellido);
}
void Persona::setEliminado(bool eliminado) {
      this->setEliminado(eliminado);
}

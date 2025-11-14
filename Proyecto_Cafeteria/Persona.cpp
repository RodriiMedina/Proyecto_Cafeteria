#include <iostream>
#include "Persona.h"

 Persona::Persona(){

std::cout<<"Hola mundo"<<std::endl;
 }

 void Persona::Mostrar() {
    std::cout<<"ID Persona: "<< idPersona << std::endl;
    std::cout<<"Nombre: "<< nombre << std::endl;
    std::cout<<"Apellido: "<< apellido << std::endl;
    std::cout<<"Telefono"<< Numero<<std::endl;
    std::cout<<"Direccion "<< direccion <<std::endl;

}

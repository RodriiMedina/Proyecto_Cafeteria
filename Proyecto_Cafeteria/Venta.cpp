#include "Venta.h"
#include <iostream>

Venta::Venta(int idVenta, int idProducto, int cantidadVendida, float totalVenta)
{
    this->setidVenta(idVenta);
    this->setidProducto(idProducto);
    this->setcantidadVendida(cantidadVendida);
    this->settotalVenta(totalVenta);

}

void Venta::setidVenta(int idVenta){                this->idVenta = idVenta;}
void Venta::setidProducto(int idProducto){          this->idProducto = idProducto;}
void Venta::setcantidadVendida(int cantidadVendida){this->cantidadVendida = cantidadVendida;}
void Venta::settotalVenta(float totalVenta){        this->totalVenta = totalVenta;}

int Venta::getIdVenta()const {return idVenta; }
int Venta::getIdProducto()const {return idProducto; }
int Venta::getCantidadVendida()const {return cantidadVendida; }
float Venta::getTotalVenta()const {return totalVenta; }


void Venta::mostrarVenta(const Producto& producto){
    std::cout<<"++++++venta++++++"<<std::endl;
    std::cout<<"ID Venta: "<< idVenta<<std::endl;
    std::cout<<"ID Producto: "<< idProducto<<std::endl;
    std::cout<<"Cantidad vendida: "<< cantidadVendida<<std::endl;
    std::cout<<"Total vendido: "<< totalVenta<<std::endl;

}

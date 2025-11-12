#pragma once
#include "Producto.h"
#include "Venta.h"
#include <iostream>

class GestorProductos{


public:

     GestorProductos();

    void mostrarMenu();
    void listarProductos();

    //Producto* buscarIdProducto(int id);
    void venderProducto();




private:
    Producto productos[5];
    int cantidad;


};

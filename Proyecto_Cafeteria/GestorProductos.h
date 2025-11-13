#pragma once
#include "Producto.h"
#include "Venta.h"
#include <iostream>

class GestorProductos{


public:

     GestorProductos();

    void mostrarMenu();
    void listarProductos();
    void agregarProducto();

    //Producto* buscarIdProducto(int id);
    //void venderProducto();




private:

    Producto productos[10];
    int cantidad;
};

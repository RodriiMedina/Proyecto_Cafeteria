#pragma once
#include "Producto.h"
#include "Venta.h"
#include <iostream>

class GestorProductos{


public:

     GestorProductos();

    void listarProductos();
    void agregarProducto();

    int buscarProducto(int idProducto);
    void eliminarProducto();

    /*a implementar
    bool existeProducto(int id) const;
    bool guardarEnArchivo();
    bool cargarDesdeArchivo();*/

private:

    Producto productos[10];
    int cantidad=5;
    int idEliminar;
};

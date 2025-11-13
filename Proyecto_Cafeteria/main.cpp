#include <iostream>
#include "Producto.h"
#include "GestorProductos.h"
#include "Venta.h"

using namespace std;
int main()
{

    GestorProductos miGestor;

    miGestor.listarProductos();

    miGestor.agregarProducto();

    miGestor.listarProductos();

    miGestor.eliminarProducto();

    miGestor.listarProductos();

    return 0;
}

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

    return 0;
}

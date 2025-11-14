#include <iostream>
#include "Producto.h"
#include "GestorProductos.h"
#include "Venta.h"

using namespace std;
int main(){

   Producto cafe(-4, "Cafe expreso", true, 1200.50, 30, 45);
    cafe.mostrarProducto();

return 0;
}

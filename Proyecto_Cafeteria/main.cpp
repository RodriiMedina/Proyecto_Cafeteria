#include <iostream>
#include "Producto.h"

using namespace std;

int main()
{

    Producto cafe(1, "Cafe expreso", false, 1200.50, 30);
    cafe.mostrarProducto();

    return 0;
}

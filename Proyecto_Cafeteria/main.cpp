#include <iostream>
#include "Producto.h"
#include "Venta.h"

using namespace std;

int main()
{

    Producto cafe(1, "Cafe expreso", false, 1200.50, 30);
    Producto sanguche(2, "sambuchito", true, 2000, 1);
    Producto agua(1, "agua", false, 100, 50);

    int cantidad=1;
    float total1=cafe.getPrecio() * cantidad;
    float total2=sanguche.getPrecio() * cantidad;
    float total3=agua.getPrecio() * cantidad;

    Venta venta1(1, cafe.getId(),cantidad,total1);
    Venta venta2(1, sanguche.getId(),cantidad,total2);
    Venta venta3(1, agua.getId(),cantidad,total3);



    venta1.mostrarVenta(cafe);
    venta2.mostrarVenta(sanguche);
    venta3.mostrarVenta(agua);

    return 0;
}

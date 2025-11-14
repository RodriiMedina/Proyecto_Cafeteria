#pragma once
#include "Producto.h"

class Venta
{
    public:

        Venta(int idVenta, int idProducto, int cantidadVendida, float totalVenta);

        void setidVenta(int idVenta);
        void setidProducto(int idProducto);
        void setcantidadVendida(int cantidadVendida);
        void settotalVenta(float totalVenta);

    int getIdVenta()const;
    int getIdProducto()const;
    int getCantidadVendida()const;
    float getTotalVenta()const;

    void mostrarVenta(const Producto& Producto);

    private:

    int idVenta=0;
    int idProducto=0;
    int cantidadVendida=0;
    float totalVenta=0;

};


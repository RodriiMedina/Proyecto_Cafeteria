#pragma once
#include <iostream>
#include <cstring>


class Producto
{
    public:
    Producto();
    Producto(int idProducto, const char* nombre, bool categoria, float precio, int stock,int tamanio, int estado);

    //setters
    void setPrecio(float precio);
    void setNombre(const char* nombre);
    void setCategoria(bool categoria);
    void setId(int idProducto);
    void setStock(int stock);
    void setTamanio(int tamanio);
    void setEstado(int estado);

    //getters
        int getId() const {return idProducto;}
        int getStock()const {return stock;}
const char* getNombre() const {return nombre;}
        bool getCategoria()const {return categoria;}
        float getPrecio()const {return precio;}
        int getTamanio()const {return tamanio;}
        int getEstado()const {return estado;}

        void mostrarProducto();

    private:
    static const int maxNombre=20;

       int idProducto;
       char nombre[maxNombre];
       bool categoria;
       float precio;
       int stock;
       int tamanio;
       int estado;
};

#pragma once


class Producto
{
    public:
    Producto(int idProducto, const char* nombre, bool categoria, float precio, int stock);
    void setPrecio(float precio);
    void setNombre(const char* nombre);
    bool setCategoria(bool categoria);

    protected:

    private:
    static const int maxNombre=20;

       const int idProducto=0;
       char nombre[maxNombre]="0/";
       bool categoria;
       float precio=0.0;
       int stock=0;

};

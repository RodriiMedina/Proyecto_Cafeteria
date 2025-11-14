#pragma once
#include <iostream>
#include <cstring>

class Proveedor
{
    private:
        int id_Proveedor;
        char nombre_Proveedor[50];
        char direccion_Proveedor[50];
        char telefono_Proveedor[20];
        bool estado_Proveedor;

    public:
        Proveedor();

        void setId_Proveedor(int id);
        void setNombre_Proveedor(const char *nombre);
        void setDireccion_Proveedor(const char *direccion);
        void setTelefono_Proveedor(const char *telefono);
        void setEstado_Proveedor(bool estado);

        int getId_Proveedor() const;
        const char *getNombre_Proveedor() const;
        const char *getDireccion_Proveedor() const;
        const char *getTelefono_Proveedor() const;
        bool getEstado_Proveedor() const;

        void cargarProveedorDesdeTeclado();
        void mostrarProveedorEnPantalla() const;
};

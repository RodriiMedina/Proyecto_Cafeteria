#pragma once
#include "Proveedor.h"

class GestorProveedores{
private:
    const char *nombreArchivo = "Proveedores.dat";

    int buscarPosPorID(int id_Proveedor);
    int contarRegistros();
    bool leerProveedor(int pos, Proveedor &reg);
    bool guardarProveedor(const Proveedor &reg);
    bool modificarProveedor(int pos, const Proveedor &reg);
    int generarNuevoID();

public:
    GestorProveedores();
    void menuProveedores();
    void altaProveedor();
    void bajaProveedor();
    void modificarProveedorPorID();
    void listarProveedoresActivos();
    void listarTodosLosProveedores();
    void buscarProveedorPorID();
};

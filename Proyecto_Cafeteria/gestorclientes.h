#pragma once
#include "Cliente.h"
#include <vector>

class GestorClientes {
private:
    std::vector<Cliente> listaClientes;

public:
    GestorClientes();
    void agregarCliente(const Cliente& c);
    Cliente* buscarClientePorID(int id);
    void guardarClienteEnArchivo(const Cliente& c);
    void cargarClientesDesdeArchivo();
    void mostrarTodos() const;
};

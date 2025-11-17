#include "GestorClientes.h"
#include <iostream>
#include <fstream>

using namespace std;

GestorClientes::GestorClientes() {
    cargarClientesDesdeArchivo();
}

void GestorClientes::agregarCliente(const Cliente& c) {
    listaClientes.push_back(c);
    guardarClienteEnArchivo(c);
}

Cliente* GestorClientes::buscarClientePorID(int id) {
    for (auto& c : listaClientes) {
        if (c.getId() == id) {
            return &c;
        }
    }
    return nullptr;
}

void GestorClientes::guardarClienteEnArchivo(const Cliente& c) {
    ofstream archivo("clientes.dat", ios::binary | ios::app);

    if (!archivo) {
        cout << "Error al abrir archivo para guardar.\n";
        return;
    }

    int id = c.getId();
    archivo.write((char*)&id, sizeof(int));

    auto writeString = [&](const string& s) {
        int len = s.size();
        archivo.write((char*)&len, sizeof(int));
        archivo.write(s.c_str(), len);
    };

    writeString(c.getNombre());
    writeString(c.getApellido());
    writeString(c.getTelefono());
    writeString(c.getEmail());

    bool activo = c.getActivo();
    archivo.write((char*)&activo, sizeof(bool));

    archivo.close();
}

void GestorClientes::cargarClientesDesdeArchivo() {
    ifstream archivo("clientes.dat", ios::binary);
    if (!archivo) return;
    while (true) {
        Cliente c;
        int id;
        if (!archivo.read((char*)&id, sizeof(int))) break;
        auto readString = [&](string& s) -> bool {
            int len;
            if (!archivo.read((char*)&len, sizeof(int))) return false;
            if (len < 0) return false;
            s.resize(len);
            if (!archivo.read(&s[0], len)) return false;
            return true;
        };
        string nombre, apellido, telefono, email;
        if (!readString(nombre)) break;
        if (!readString(apellido)) break;
        if (!readString(telefono)) break;
        if (!readString(email)) break;
        c.setNombre(nombre);
        c.setApellido(apellido);
        c.setTelefono(telefono);
        c.setEmail(email);
        bool activo;
        if (!archivo.read((char*)&activo, sizeof(bool))) break;
        c.setActivo(activo);
        listaClientes.push_back(c);
    }

    archivo.close();
}

void GestorClientes::mostrarTodos() const {
    for (const auto& c : listaClientes) {
        c.mostrarCliente();
    }
}

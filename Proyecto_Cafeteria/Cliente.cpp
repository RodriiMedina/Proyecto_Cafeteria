#include "Cliente.h"
#include <iostream>

using namespace std;

Cliente::Cliente() {
    id = 0;
    nombre = "";
    apellido = "";
    telefono = "";
    email = "";
    activo = true;
}

Cliente::Cliente(int id, string nombre, string apellido,
                 string telefono, string email)
{
    this->id = id;
    this->nombre = nombre;
    this->apellido = apellido;
    this->telefono = telefono;
    this->email = email;
    this->activo = true;
}

void Cliente::setId(int id) { this->id = id; }
void Cliente::setNombre(const string& nombre) { this->nombre = nombre; }
void Cliente::setApellido(const string& apellido) { this->apellido = apellido; }
void Cliente::setTelefono(const string& telefono) { this->telefono = telefono; }
void Cliente::setEmail(const string& email) { this->email = email; }
void Cliente::setActivo(bool estado) { this->activo = estado; }

int Cliente::getId() const { return id; }
string Cliente::getNombre() const { return nombre; }
string Cliente::getApellido() const { return apellido; }
string Cliente::getTelefono() const { return telefono; }
string Cliente::getEmail() const { return email; }
bool Cliente::getActivo() const { return activo; }

void Cliente::cargarCliente() {
    cout << "Ingrese ID del cliente: ";
    cin >> id;
    cin.ignore();
    cout << "Ingrese nombre: ";
    getline(cin, nombre);
    cout << "Ingrese apellido: ";
    getline(cin, apellido);
    cout << "Ingrese telefono: ";
    getline(cin, telefono);
    cout << "Ingrese email: ";
    getline(cin, email);
    activo = true;
}

void Cliente::mostrarCliente() const {
    cout << "\n===== DATOS DEL CLIENTE =====\n";
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Email: " << email << endl;
    cout << "Activo: " << (activo ? "Si" : "No") << endl;
    cout << "=============================\n";
}

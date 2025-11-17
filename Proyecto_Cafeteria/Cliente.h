#pragma once
#include <string>

class Cliente
{
private:
    int id;
    std::string nombre;
    std::string apellido;
    std::string telefono;
    std::string email;
    bool activo;

public:
    Cliente();
    Cliente(int id, std::string nombre, std::string apellido,
            std::string telefono, std::string email);

    void setId(int id);
    void setNombre(const std::string& nombre);
    void setApellido(const std::string& apellido);
    void setTelefono(const std::string& telefono);
    void setEmail(const std::string& email);
    void setActivo(bool estado);

    int getId() const;
    std::string getNombre() const;
    std::string getApellido() const;
    std::string getTelefono() const;
    std::string getEmail() const;
    bool getActivo() const;

    void cargarCliente();

    void mostrarCliente() const;
};

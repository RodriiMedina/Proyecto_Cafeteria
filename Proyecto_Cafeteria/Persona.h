#pragma once


class Persona
{
    public:
        Persona();
        Persona(int idPersona, const char* nombre, const char* apellido, bool eliminado);


    void setIdPersona(int idPersona);
    void setNombre (const char* nombre);
    void setApellido (const char* apellido);
    void setEliminado (bool eliminado);

    int getIdPersona();
    const char* getNombre();
    const char* getApellido();
    bool getEliminado();

    void Mostrar();
    void Cargar(int id);

    protected:

        static const int maxNombre=20;

        int idPersona;
        const char* nombre[maxNombre];
        const char* apellido[maxNombre];
        int Numero;
        const char* direccion[maxNombre];
        bool eliminado;
    private:

};



#include <iostream>
#include "gestorproveedores.h"
#include "gestorproductos.h"
#include "gestorclientes.h"
#include "gestorventas.h"

using namespace std;

int main() {

    GestorProveedores gestorProv;
    GestorProductos gestorProd;
    GestorClientes gestorCli;
    GestorVentas gestorVen;

    int opcion;

    do {
        cout << "=========== MENU PRINCIPAL ===========" << endl;
        cout << "1) Gestion de Proveedores" << endl;
        cout << "2) Gestion de Productos" << endl;
        cout << "3) Gestion de Clientes" << endl;
        cout << "4) Gestion de Ventas" << endl;
        cout << "0) Salir" << endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:
                gestorProv.menuProveedores();
                break;

            case 2:
                gestorProd.menuProductos();
                break;

            case 3:
                gestorCli.menuClientes();
                break;

            case 4:
                gestorVen.menuVentas();
                break;

            case 0:
                cout << "Saliendo del sistema..." << endl;
                break;

            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;

    } while(opcion != 0);

    return 0;
}

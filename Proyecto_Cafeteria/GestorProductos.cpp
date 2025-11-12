#include "GestorProductos.h"


    GestorProductos::GestorProductos() {

    cantidad=5;
    productos[0]= Producto(1,"Cafe Latte", true, 1500, 10);
    productos[1]= Producto(2,"Capuccino", true, 800, 20);
    productos[2]= Producto(3,"Tostado", false, 1200, 15);
    productos[3]= Producto(4,"Jugo de Naranja", true, 1000, 12);
    productos[4]= Producto(5,"Medialuna", false, 1600, 8);

}

    void GestorProductos::listarProductos(){

        for(int i= 0 ; i<=cantidad;i++){

            productos[i].mostrarProducto();
            std::cout<<"_________________________"<<std::endl;
        }

    }


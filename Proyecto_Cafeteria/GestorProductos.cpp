#include "GestorProductos.h"

using namespace std;



    GestorProductos::GestorProductos() {

    cantidad=5;
    productos[0]= Producto(1,"Cafe Latte", true, 1500, 10);
    productos[1]= Producto(2,"Capuccino", true, 800, 20);
    productos[2]= Producto(3,"Tostado", false, 1200, 15);
    productos[3]= Producto(4,"Jugo de Naranja", true, 1000, 12);
    productos[4]= Producto(5,"Medialuna", false, 1600, 8);

}

    void GestorProductos::listarProductos(){


        for(int i= 0 ; i<cantidad;i++){

            productos[i].mostrarProducto();
            std::cout<<"_________________________"<<std::endl;
        }
    }

    void GestorProductos::agregarProducto(){
    //falta validar si hay espacio en stock

    int idProducto;
    char nombre[20];
    int verificador;
    float precio;
    int stock;

    cout<<"Ingresa ID del producto: ";
    cin>>idProducto;
    cin.ignore();
    cout<<"ingresa el nombre del producto: ";
    cin.getline(nombre,20);
    cout<<"ingrese el precio";
    cin>>precio;
    cout<<"igrese la cantidad de stock";
    cin>>stock;
    cout<<"ingrese 1 si es bebida o ingrese 2 si es alimento";
    cin>>verificador;
    bool categoria= (verificador==1);

    Producto nuevoProducto(idProducto,nombre,categoria,precio,stock);

    productos[cantidad]=nuevoProducto;
    cantidad++;



    }

    int GestorProductos::buscarProducto(int idProducto) {

    for (int i=0; i<cantidad; i++){
        if(productos[i].getId() == idProducto) {
        cout<<"el producto buscado es: ";
        productos[i].mostrarProducto();
            return i;
  }
 }
 return -1;
}

    void GestorProductos::eliminarProducto(){

    cout<<"Ingrese el ID del producto a eliminar"<<endl;
    cin>>idEliminar;
        int indice=buscarProducto(idEliminar);
    if(indice!=-1){
        for (int i=indice; i<cantidad-1; i++) {
            productos[i] = productos[i+1];
     }
        cantidad--;
    }
    }


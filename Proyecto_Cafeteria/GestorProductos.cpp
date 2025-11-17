#include "GestorProductos.h"

using namespace std;



    GestorProductos::GestorProductos() {

    cantidad=5;
    productos[0]= Producto(1,"Cafe Latte", true, 1500, 10,1,true);
    productos[1]= Producto(2,"Capuccino", true, 800, 20,2,true);
    productos[2]= Producto(3,"Tostado", false, 1200, 15,0,true);
    productos[3]= Producto(4,"Jugo de Naranja", true, 1000, 12,3,true);
    productos[4]= Producto(5,"Medialuna", false, 1600, 8,0,true);

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
    int tamanio;
    int estado;

    cout<<"Ingresa ID del producto: ";
    cin>>idProducto;
    cin.ignore();
    cout<<"ingresa el nombre del producto: ";
    cin.getline(nombre,20);
    cout<<"ingrese el precio";
    cin>>precio;
    cout<<"ingrese la cantidad de stock";
    cin>>stock;
    cout<<"ingrese 1 si es bebida o ingrese 2 si es alimento";
    cin>>verificador;
    bool categoria= (verificador==1);
    cout<<"ingrese el tamaño del producto";
    cin>>tamanio;
    cout<<"ingrese el estado del producto";
    cin>>estado;




    Producto nuevoProducto(idProducto,nombre,categoria,precio,stock,tamanio,estado);

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

    void GestorProductos::modificarProducto(){

    int id;
    int opcion;

    cout << "Ingrese el ID del producto al que desea modificar el precio: ";
    cin >> id;
    int indice= buscarProducto(id);
    if (indice == -1) {cout << "Producto no encontrado."<<endl;}
    else{
    cout<<"¿Qué desea modificar?" << endl;
    cout<<"1. Nombre" << endl;
    cout<<"2. Precio" << endl;
    cout<<"3. Stock" << endl;
    cout<<"4. Categoria" << endl;
    cout<<"5. Tamanio" << endl;
    cout<<"Seleccione una opcion: ";
    cin>> opcion;
    cin.ignore();

    switch(opcion) {

        case 1:{
            char nuevoNombre[20];
            cout<<"Ingrese el nuevo nombre: ";
            cin.getline(nuevoNombre, 20);
            productos[indice].setNombre(nuevoNombre);
            break;
        }
        case 2:{
            float nuevoPrecio;
            cout<<"Ingrese el nuevo precio: ";
            cin>>nuevoPrecio;
            productos[indice].setPrecio(nuevoPrecio);
            break;
        }
        case 3:{
            int nuevoStock;
            cout<<"Ingrese el nuevo stock: ";
            cin>>nuevoStock;
            productos[indice].setStock(nuevoStock);
            break;
        }
        case 4:{
            int verificador;
            cout<<"Ingrese 1 para Bebida, 0 para Alimento: ";
            cin>>verificador;
            productos[indice].setCategoria(verificador == 1);
            break;
        }
        case 5:{
            int nuevoTamanio;
            cout<<"Ingrese el nuevo tamanio: ";
            cin>>nuevoTamanio;
            productos[indice].setTamanio(nuevoTamanio);
            break;
        }
        case 6:{
            int nuevoEstado;
            cout<<"Ingrese el nuevo tamanio: ";
            cin>>nuevoEstado;
            productos[indice].setEstado(nuevoEstado);
            break;
        }

        default:
            cout<<"Opcion invalida."<<endl;
            break;
    }
    cout<<"Modificación realizada correctamente."<<endl;
}
    }

    void GestorProductos::listarActivos(){
        for(int i= 0 ; i<cantidad;i++){
                if(productos[i].getEstado()){
                productos[i].mostrarProducto();
                std::cout<<"_________________________"<<std::endl;
      }
     }
    }

    void GestorProductos::menuProductos(){
    int opcion;
    std::cout<<"_________________________"<<std::endl;
    cout<<"Que desea hacer? "<<endl;

    cout<<" 1 | Agregar Producto: "<<endl;
    cout<<" 2 | Eliminar Producto: "<<endl;
    cout<<" 3 | Buscar Producto: "<<endl;
    cout<<" 4 | Listar Productos: "<<endl;
    cout<<" 5 | Modificar Producto: "<<endl;
    cin>>opcion;

    switch(opcion){

    case 0:
        agregarProducto();
        break;

    case 1:
        eliminarProducto();
        break;

    case 2:
        buscarProducto(id);
        break;

    case 3:
        listarProductos();
        break;

    case 4:
        modificarProducto();
        break;

    default:
        break;
    };
    }

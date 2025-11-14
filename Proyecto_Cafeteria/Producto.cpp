#include "Producto.h"

Producto::Producto():idProducto(0), categoria(false), precio(0.0f), stock(0),tamanio(0){
    this->nombre[0] = '\0';
}

Producto::Producto(int idProducto, const char* nombre, bool categoria, float precio, int stock, int tamanio)
: idProducto(0), categoria(categoria), precio(0.0f), stock(0), tamanio(tamanio)
{
    this->setId(idProducto);
    this->setStock(stock);
    this->setNombre(nombre);
    this->setCategoria(categoria);
    this->setPrecio(precio);
}

void Producto::mostrarProducto(){
    const char* categoria_texto = this->categoria ? "Bebida" : "Alimento";

     std::cout<< "ID: " << idProducto<< std::endl;
     std::cout<< " | Nombre: " << nombre<< std::endl;
     std::cout<<" | Categoria: "<< categoria_texto<<std::endl;
     std::cout<< " | Precio: " << precio<< std::endl;
     std::cout<< " | Stock: " << stock << std::endl;
     std::cout<< " | tamanio: " << tamanio << std::endl;

}
void Producto::setId(int idProducto){
    if(idProducto>0){
    this->idProducto = idProducto;}else std::cout<<"Puede que el numero ID sea erroneo, le asignaremos un ID: 0"<<std::endl;
}
void Producto::setStock(int stock){
    if(stock>0){
        this->stock = stock;
    }else std::cout<<"El stock no puede ser negativo"<<std::endl;
}
void Producto::setPrecio(float precio){
    if(precio>0.0){
        this -> precio=precio;
        }else{
            std::cout<<"El precio no puede ser negativo"<<std::endl;
        }
}
void Producto::setNombre(const char* nombre){
    if(nombre!=nullptr && nombre[0]!= '\0'){
        strncpy(this -> nombre, nombre, maxNombre-1);
        this->nombre[maxNombre - 1] = '\0';
    }else{ this->nombre[0]= '\0';
        std::cout<<"el nombre ingresado está vacio o es invalido"<<std::endl;
    }
}
void Producto::setCategoria(bool categoria){
    if(categoria){
    this->categoria=categoria;
    std::cout<<"Bebida"<<std::endl;
}else{
    this->categoria=categoria;
    std::cout<<"Alimento"<<std::endl;
    }
}
/*void Producto::setTamanio(int tamanio){
    switch(tamanio)
    case 0:
    this->tamanio=tamanio;
    break;
        case 1:
        this->tamanio=tamanio;
        break;
            case 2:
            this->tamanio=tamanio;
            break;
                case 3:
                this->tamanio=tamanio;
                break;
}
*/


#include "gestorproveedores.h"
#include <iostream>
#include <cstdio>
using namespace std;

// Archivo limpio sin saltos rotos
GestorProveedores::GestorProveedores(){}

int GestorProveedores::contarRegistros(){
    FILE *p=fopen(nombreArchivo,"rb");
    if(!p) return 0;
    fseek(p,0,SEEK_END);
    long tam=ftell(p);
    fclose(p);
    return tam/sizeof(Proveedor);
}

bool GestorProveedores::leerProveedor(int pos, Proveedor &reg){
    FILE *p=fopen(nombreArchivo,"rb");
    if(!p) return false;
    fseek(p,pos*sizeof(Proveedor),SEEK_SET);
    bool ok=fread(&reg,sizeof(Proveedor),1,p);
    fclose(p);
    return ok;
}

bool GestorProveedores::guardarProveedor(const Proveedor &reg){
    FILE *p=fopen(nombreArchivo,"ab");
    if(!p) return false;
    bool ok=fwrite(&reg,sizeof(Proveedor),1,p);
    fclose(p);
    return ok;
}

bool GestorProveedores::modificarProveedor(int pos,const Proveedor &reg){
    FILE *p=fopen(nombreArchivo,"rb+");
    if(!p) return false;
    fseek(p,pos*sizeof(Proveedor),SEEK_SET);
    bool ok=fwrite(&reg,sizeof(Proveedor),1,p);
    fclose(p);
    return ok;
}

int GestorProveedores::buscarPosPorID(int id){
    Proveedor reg;
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        if(leerProveedor(i,reg)){
            if(reg.getId_Proveedor()==id) return i;
        }
    }
    return -1;
}

int GestorProveedores::generarNuevoID(){
    int cant=contarRegistros();
    if(cant==0) return 1;
    Proveedor reg;
    leerProveedor(cant-1,reg);
    return reg.getId_Proveedor()+1;
}

void GestorProveedores::menuProveedores(){
    int op;
    do{
        cout<<"===== MENU PROVEEDORES ====="<<endl;
        cout<<"1) ALTA"<<endl;
        cout<<"2) BAJA"<<endl;
        cout<<"3) MODIFICAR"<<endl;
        cout<<"4) LISTAR ACTIVOS"<<endl;
        cout<<"5) LISTAR TODOS"<<endl;
        cout<<"6) BUSCAR POR ID"<<endl;
        cout<<"0) SALIR"<<endl;
        cout<<"OPCION: ";
        cin>>op;
        switch(op){
            case 1: altaProveedor(); break;
            case 2: bajaProveedor(); break;
            case 3: modificarProveedorPorID(); break;
            case 4: listarProveedoresActivos(); break;
            case 5: listarTodosLosProveedores(); break;
            case 6: buscarProveedorPorID(); break;
        }
    }while(op!=0);
}

void GestorProveedores::altaProveedor(){
    Proveedor reg;
    reg.cargarProveedorDesdeTeclado();
    reg.setId_Proveedor(generarNuevoID());
    if(guardarProveedor(reg)) cout<<"Proveedor guardado."<<endl;
    else cout<<"Error al guardar."<<endl;
}

void GestorProveedores::bajaProveedor(){
    int id;
    cout<<"ID a dar de baja: ";
    cin>>id;
    int pos=buscarPosPorID(id);
    if(pos==-1){
        cout<<"No existe."<<endl;
        return;
    }
    Proveedor reg;
    leerProveedor(pos,reg);
    reg.setEstado_Proveedor(false);
    modificarProveedor(pos,reg);
    cout<<"Proveedor dado de baja."<<endl;
}

void GestorProveedores::modificarProveedorPorID(){
    int id;
    cout<<"ID a modificar: ";
    cin>>id;
    int pos=buscarPosPorID(id);
    if(pos==-1){
        cout<<"No existe."<<endl;
        return;
    }
    Proveedor reg;
    leerProveedor(pos,reg);

    Proveedor nuevo;
    nuevo.cargarProveedorDesdeTeclado();
    nuevo.setId_Proveedor(id);
    nuevo.setEstado_Proveedor(reg.getEstado_Proveedor());

    modificarProveedor(pos,nuevo);
    cout<<"Modificado."<<endl;
}

void GestorProveedores::listarProveedoresActivos(){
    Proveedor reg;
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        leerProveedor(i,reg);
        if(reg.getEstado_Proveedor())
            reg.mostrarProveedorEnPantalla();
    }
}

void GestorProveedores::listarTodosLosProveedores(){
    Proveedor reg;
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        leerProveedor(i,reg);
        reg.mostrarProveedorEnPantalla();
    }
}

void GestorProveedores::buscarProveedorPorID(){
    int id;
    cout<<"ID a buscar: ";
    cin>>id;
    int pos=buscarPosPorID(id);
    if(pos==-1){
        cout<<"No existe."<<endl;
        return;
    }
    Proveedor reg;
    leerProveedor(pos,reg);
    reg.mostrarProveedorEnPantalla();
}

/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "objeto.h"

class nodo {
private:
    objeto* info;
    nodo* sig;
public:
    nodo(objeto*, nodo*);
    ~nodo();
    void setInfo(objeto*);
    void setSig(nodo*);
    objeto* getInfo();
    nodo* getSig();
    string toStringNodo();
};

class listaBase {
protected:
    nodo* primero;
    int cantidadNodos;
public:
    listaBase();
    virtual void insertarFinal(objeto*);
    virtual bool eliminaFinal();
    virtual bool listaVacia();
    virtual objeto* randObjeto();
    virtual nodo* getPrimero();
    virtual ~listaBase();
    int getCantidadNodos();
    virtual string toString();
};

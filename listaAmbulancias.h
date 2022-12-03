/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "listaBase.h"
#include "ambulancia.h"

class listaAmbulancias : public listaBase {
public:
    bool eliminarAmbu(string);
    string ambulanciasOcu();
    string getPlacas();
    ambulancia* encontraAmb(string);
};
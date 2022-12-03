/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "listaBase.h"
#include "taxi.h"

class listaTaxis : public listaBase {
public:
    bool eliminarTaxi(string);
    taxi* encontraTax(string);
    string getPlacas();
    double montoTotal();
};

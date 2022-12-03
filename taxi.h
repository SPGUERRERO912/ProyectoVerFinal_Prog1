/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "transporte.h"
#include "cobro.h"

class taxi : public transporte , cobro{
private:
    double costoViaje;
    int numPacientes;
public:
    taxi(string, string, float, string, double, int);
    ~taxi();
    void setCostoViaje(double);
    void setNumPacientes(int);
    double getCostoViaje();
    int getNumPacientes();
    string toString();
};
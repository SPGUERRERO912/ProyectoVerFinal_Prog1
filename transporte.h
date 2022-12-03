/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "objeto.h"

class transporte : public objeto {
private:
    string placa;
    string marca;
    float km;
    string tipoViaje;
public:
    transporte();
    transporte(string, string, int, string);
    ~transporte();
    void setPlaca(string);
    void setMarca(string);
    void setKm(float);
    void setTipoViaje(string);
    string getPlaca();
    string getMarca();
    float getKm();
    string getTipoViaje();
    string toString();
};
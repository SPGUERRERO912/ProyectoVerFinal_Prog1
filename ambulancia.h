/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "transporte.h"

class ambulancia : public transporte {
private:
    bool ocupada;
    int codigo;
public:
    ambulancia(string, string, float, string);
    ~ambulancia();
    void setOcupada(bool);
    void setCodigo(int);
    bool getOcupada();
    int getCodigo();
    string toString();
};
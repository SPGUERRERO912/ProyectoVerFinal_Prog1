/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "paciente.h"
#include "medico.h"
#include "transporte.h"
#include "objeto.h"
class cita : public objeto {
private:
    int cod;
    paciente* p;
    medico* m;
    string hora;
    string fecha;
    transporte* t;
public:
    cita(paciente*, medico*, string, string, transporte*);
    ~cita();
    int getCod();
    paciente* getPaciente();
    medico* getMedico();
    string getHora();
    string getFecha();
    transporte* getTransporte();
    string toString();
};


/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "listaBase.h"
#include "cita.h"

class ListaCitas : public listaBase {
public:
    bool cancelarCita(int);
    string buscarCita(int);
    string fechaConMasCitas();
    string citasPorPaciente(string);
    string pacienteMasCit();
    string getCodigos();
};
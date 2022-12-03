/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "medico.h"
#include "listaBase.h"

class listaMedicos : public listaBase 
{
public:
	~listaMedicos();
	bool eliminaMed(string);
	medico* buscarPorEsp(string);
	medico* encontrarMedico(string);
	string getCedulas();
	bool listaVacia();
};
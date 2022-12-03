/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include <iostream>
#include "objeto.h"
using namespace std;

class paciente : public objeto
{
protected:
	string nombrUni;
	string nombre;
	string apellido;
public:
	paciente(string, string, string);
	void setNombre(string);
	void setApellidos(string);
	void setUniversidad(string);
	~paciente();
	string getNombrUni();
	string getNombre();
};
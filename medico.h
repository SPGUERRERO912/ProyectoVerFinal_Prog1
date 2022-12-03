/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include <iostream>
#include "objeto.h"
using namespace std;

class medico : public objeto
{
private:
	string cedula;
	string nombre;
	string apellido;
	int numTelefono;
	string especialidad;
public:
	medico(string, string, string, int, string);
	~medico();
	void setCedula(string);
	void setNombre(string);
	void setApellidos(string);
	void setNumTelefono(int);
	void setEspecialidad(string);
	string getCedula();
	string getEspecialidad();
	string toString();
};
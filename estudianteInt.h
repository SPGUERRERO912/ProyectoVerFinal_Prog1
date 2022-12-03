/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "estudiante.h"
using namespace std;

class estudianteInt : public estudiante
{
private:
	string nacionalidad;
	string numPasaporte;
	string condicionPais;
public:
	estudianteInt(string, string, string, string, int, int, string, string, string);
	~estudianteInt();
	string getNacionalidad();
	void setNacionalidad(string);
	void setCondicion(string);
	string getNumPasaporte();
	string getCondicionPais();
	string toString();
};
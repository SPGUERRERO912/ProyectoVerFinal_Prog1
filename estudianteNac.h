/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "estudiante.h"
class estudianteNac : public estudiante
{
private:
	string cedula;
	bool estadoActividad;
public:
	estudianteNac(string, string, string, string, int, int, string, bool);
	~estudianteNac();
	string getCedula();
	bool getEstadoActividad();
	void setEstadoActividad(bool);
	string toString();
};
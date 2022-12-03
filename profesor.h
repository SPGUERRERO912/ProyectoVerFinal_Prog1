/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "paciente.h"
class profesor : public paciente
{
protected:
	string cedula;
	string titulo;
	int anniosLab;
public:
	profesor(string, string, string, string, int, string);
	~profesor();
	string getCedula();
	string getTitulo();
	void setTitulo(string);
	int getAnniosLab();
	void setAnniosLab(int);
	string toString();
};
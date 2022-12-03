/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "paciente.h"
using namespace std;

class estudiante : public paciente
{
protected:
	string codCarrera;
	int ultNivelCurs;
	int numTelefono;
public:
	estudiante(string, string, string, string, int, int);
	void setCod(string);
	void setUltimo(int);
	void setTelefono(int);
	~estudiante();
	string getCodCarrera();
	int getUltNivelCurs();
	int getNumTel();
	string toString();
};
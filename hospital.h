/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include <iostream>
using namespace std;

class hospital
{
private:
	string nombre;
	string telefono;
	string cedJuridica;
	string ubicacion;
public:
	hospital(string, string, string, string);
	~hospital();
	string toString();
};


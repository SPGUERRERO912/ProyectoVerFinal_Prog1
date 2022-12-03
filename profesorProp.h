/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "profesor.h"
class profesorProp : public profesor
{
private:
	string codPlaza;
public:
	profesorProp(string, string, string, string, string, int, string);
	~profesorProp();
	void setCodigoPlaza(string);
	string getCodPlaza();
	string toString();
};
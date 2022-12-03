/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "profesor.h"
class profesorInt : public profesor
{
private:
	double calificacion;
public:
	profesorInt(string, string, string, string, string, int, double);
	~profesorInt();
	double getCalificacion();
	void setCalificacion(double);
	string toString();
};
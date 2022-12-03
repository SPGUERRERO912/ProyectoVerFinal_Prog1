/*David Calvo Hernandez 4-0254-0670
Sebastian Peñaranda Guerrero 1-1844-0262*/
#pragma once
#include "paciente.h"
#include "listaBase.h"
#include "estudianteInt.h"
#include "estudianteNac.h"
#include "profesorInt.h"
#include "ProfesorProp.h"

class listaPacientes : public listaBase
{
public:
	~listaPacientes();
	bool encontrarPaciente(string);
	paciente* retornarPaciente(string);
	bool listaVacia();
	string listProfInt();
	string getIdent();
	string estIntExil();
	int contListProfInt();
	bool eliminarPac(string);
	string top3ProfInt(listaPacientes*);
	//string toString();
};
#include "paciente.h"
#include <sstream>

paciente::paciente(string _nombre, string _apellido, string _nombrUni) {
	nombre = _nombre;
	apellido = _apellido;
	nombrUni = _nombrUni;
}
paciente::~paciente() {

}
string paciente::getNombrUni() {
	return nombrUni;
}
string paciente::getNombre() {
	stringstream t;
	t << nombre << " " << apellido << endl;
	return t.str();
}

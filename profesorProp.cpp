#include "ProfesorProp.h"
#include <sstream>

profesorProp::profesorProp(string _nombre, string _apellido, string _nombrUni, string _cedula, string _titulo, int _anniosLab, string _codPlaza) : profesor(_nombre,
	_apellido, _nombrUni, _cedula, _anniosLab, _titulo) {
	codPlaza = _codPlaza;
}
profesorProp::~profesorProp() {

}
string profesorProp::getCodPlaza() {
	return codPlaza;
}
void profesorProp::setCodigoPlaza(string _codPlaza) {
	codPlaza = _codPlaza;
}
string profesorProp::toString() {
	stringstream t;
	t << profesor::toString();
	t << "- Codigo de plaza: " << codPlaza << endl;
	return t.str();
}
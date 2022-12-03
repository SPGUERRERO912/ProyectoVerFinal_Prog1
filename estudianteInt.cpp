#include "estudianteInt.h"
#include <sstream>
estudianteInt::estudianteInt(string _nombre, string _apellido, string _nombrUni, string _codCarrera, int _ultNivelCurs, int _numTelefono, string _nacionalidad,
	string _numPasaporte, string _condicionPais) : estudiante(_nombre, _apellido, _nombrUni, _codCarrera, _ultNivelCurs, _numTelefono) {
	nacionalidad = _nacionalidad;
	numPasaporte = _numPasaporte;
	condicionPais = _condicionPais;
}
estudianteInt::~estudianteInt() {

}
string estudianteInt::getNacionalidad() {
	return nacionalidad;
}
void estudianteInt::setNacionalidad(string _nacionalidad) {
	nacionalidad = _nacionalidad;
}
void estudianteInt::setCondicion(string _condicionPais) {
	condicionPais = _condicionPais;
}
string estudianteInt::getNumPasaporte() {
	return numPasaporte;
}
string estudianteInt::getCondicionPais() {
	return condicionPais;
}
string estudianteInt::toString() {
	stringstream t;
	t << estudiante::toString();
	t << "- Nacionalidad: " << nacionalidad << endl;
	t << "- Numero de pasaporte: " << numPasaporte << endl;
	t << "- Condicion en el pais: " << condicionPais << endl;
	return t.str();
}

#include "estudianteNac.h"
#include <sstream>
using namespace std;

estudianteNac::estudianteNac(string _nombre, string _apellido, string _nombrUni, string _codCarrera, int _ultNivelCurs, int _numTelefono, string _cedula, bool _estadoActividad)
	: estudiante(_nombre, _apellido, _nombrUni, _codCarrera, _ultNivelCurs, _numTelefono) {
	cedula = _cedula;
	estadoActividad = _estadoActividad;
}
estudianteNac::~estudianteNac() {

}
string estudianteNac::getCedula() {
	return cedula;
}
bool estudianteNac::getEstadoActividad() {
	return estadoActividad;
}
void estudianteNac::setEstadoActividad(bool _estadoActividad) {
	estadoActividad = _estadoActividad;
}
string estudianteNac::toString() {
	stringstream t;
	t << estudiante::toString();
	t << "- Cedula del estudiante: " << cedula << endl;
	if (estadoActividad)
		t << "- El estudiante se encuentra: Activo\n";
	else
		t << "- El estudiante se encuentra: Inactivo\n";
	return t.str();
}
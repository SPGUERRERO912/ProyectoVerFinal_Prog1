#include "profesorInt.h"
#include <sstream>

profesorInt::profesorInt(string _nombre, string _apellido, string _nombrUni, string _cedula, string _titulo, int _anniosLab, double _calificacion) : profesor(_nombre,
	_apellido, _nombrUni, _cedula, _anniosLab, _titulo) {
	calificacion = _calificacion;
}
profesorInt::~profesorInt() {

}
double profesorInt::getCalificacion() {
	return calificacion;
}
void profesorInt::setCalificacion(double _calificacion) {
	calificacion = _calificacion;
}
string profesorInt::toString() {
	stringstream t;
	t << profesor::toString() << "- Calificacion del profesor: " << calificacion << endl;
	return t.str();
}

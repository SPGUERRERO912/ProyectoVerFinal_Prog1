#include "medico.h"
#include <sstream>

medico::medico(string _nombre, string _apellido, string _cedula, int _numTelefono, string _especialidad) {
	nombre = _nombre;
	apellido = _apellido;
	cedula = _cedula;
	numTelefono = _numTelefono;
	especialidad = _especialidad;
}
medico::~medico() {

}
string medico::getCedula() {
	return cedula;
}
string medico::getEspecialidad() {
	return especialidad;
}
void medico::setCedula(string _cedula) {
	cedula = _cedula;
}
void medico::setNombre(string _nombre) {
	nombre = _nombre;
}
void medico::setApellidos(string _apellidos) {
	apellido = _apellidos;
}
void medico::setNumTelefono(int _numTelefono) {
	numTelefono = _numTelefono;
}
void medico::setEspecialidad(string _especialidad) {
	especialidad = _especialidad;
}
string medico::toString() {
	stringstream t;
	t << "- Nombre del medico: " << nombre << " " << apellido << endl;
	t << "- Cedula: " << cedula << endl;
	t << "- Numero de telefono: " << numTelefono << endl;
	t << "- Especialidad medica: " << especialidad << endl;
	return t.str();
}
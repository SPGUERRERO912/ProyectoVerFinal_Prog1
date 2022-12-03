#include "estudiante.h"
#include <sstream>
using namespace std;

estudiante::estudiante(string _nombre, string _apellido, string _nombrUni, string _codCarrera, int _ultNivelCurs, int _numTelefono) : paciente(_nombre, _apellido, _nombrUni) {
	codCarrera = _codCarrera;
	ultNivelCurs = _ultNivelCurs;
	numTelefono = _numTelefono;
}
estudiante::~estudiante() {

}
void estudiante::setCod(string _codCarrera) {
	codCarrera = _codCarrera;
}
void estudiante::setUltimo(int _ultNivelCurs) {
	ultNivelCurs = _ultNivelCurs;
}
void estudiante::setTelefono(int _numTelefono) {
	numTelefono = _numTelefono;
}
string estudiante::getCodCarrera() {
	return codCarrera;
}
int estudiante::getUltNivelCurs() {
	return ultNivelCurs;
}
int estudiante::getNumTel() {
	return numTelefono;
}
string estudiante::toString() {
	stringstream t;
	t << "- Nombre del estudiante: " << getNombre();
	t << "- Nombre de la universidad del estudiante: " << getNombrUni() << endl;
	t << "- Codigo de carrera a la que pertenece: " << codCarrera << endl;
	t << "- Ultimo nivel cursado: " << ultNivelCurs << endl;
	t << "- Numero de telefono registrado: " << numTelefono << endl;
	return t.str();
}
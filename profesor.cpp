#include "profesor.h"
#include <sstream>

profesor::profesor(string _nombre, string _apellido, string _nombrUni, string _cedula, int _anniosLab, string _titulo) : paciente(_nombre, _apellido, _nombrUni) {
	cedula = _cedula;
	titulo = _titulo;
	anniosLab = _anniosLab;
}
profesor::~profesor() {

}
string profesor::getTitulo() {
	return titulo;
}
void profesor::setTitulo(string _titulo) {
	titulo = _titulo;
}
int profesor::getAnniosLab() {
	return anniosLab;
}
void profesor::setAnniosLab(int _anniosLab) {
	anniosLab = _anniosLab;
}
string profesor::getCedula() {
	return cedula;
}
string profesor::toString() {
	stringstream t;
	t << "- Nombre del profesor: " << getNombre();
	t << "- Universidad en la que se encuentra registrado: " << getNombrUni() << endl;
	t << "- Titulos registrados: " << titulo << endl;
	t << "- Años laborados: " << anniosLab << endl;
	return t.str();
}

#include "hospital.h"
#include <sstream>

hospital::hospital(string _nombre, string _telefono, string _cedJuridica, string _ubicacion) {
	nombre = _nombre;
	telefono = _telefono;
	cedJuridica = _cedJuridica;
	ubicacion = _ubicacion;
}
hospital::~hospital() {

}
string hospital::toString() {
	stringstream t;
	t << "-Nombre: " << nombre << endl << "-Telefono: " << telefono << endl << "-Cedula juridica: " << cedJuridica << endl << "-Ubicacion: " << ubicacion << endl;
	return t.str();
}
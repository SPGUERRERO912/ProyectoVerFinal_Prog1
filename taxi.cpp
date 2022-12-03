#include "taxi.h"

taxi::taxi(string _placa, string _marca, float _km, string _tipoViaje, double _costoViaje, int _numPacientes) : transporte(_placa, _marca, _km, _tipoViaje) {
    costoViaje = _costoViaje;
    numPacientes = _numPacientes;
}
taxi::~taxi() {
}
void taxi::setCostoViaje(double _costoViaje) {
    (getTipoViaje() != "Ida" && getTipoViaje() != "Vuelta") ? costoViaje = _costoViaje * 2 : costoViaje = _costoViaje;
}
void taxi::setNumPacientes(int _numPacientes) {
    numPacientes = _numPacientes;
}
double taxi::getCostoViaje() {
    setCostoViaje(calcularCosto(getKm(), numPacientes));
    return costoViaje;
}
int taxi::getNumPacientes() {
    return numPacientes;
}
string taxi::toString() {
    stringstream s;
    s << transporte::toString();
    s << "- Costo del viaje: " << getCostoViaje() << endl;
    s << "- Numero de pacientes en el viaje: " << numPacientes << endl;
    return s.str();
}
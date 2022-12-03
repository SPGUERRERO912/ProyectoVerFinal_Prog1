#include "transporte.h"

transporte::transporte() {
    placa = " ";
    marca = " ";
    km = 0;
    tipoViaje = " ";
}
transporte::transporte(string _placa, string _marca, int _km, string _tipoViaje) {
    placa = _placa;
    marca = _marca;
    km = _km;
    tipoViaje = _tipoViaje;
}
transporte::~transporte() {
}
void transporte::setKm(float _km) {
    km = _km;
}
void transporte::setMarca(string _marca) {
    marca = _marca;
}
void transporte::setPlaca(string _placa) {
    placa = _placa;
}
void transporte::setTipoViaje(string _tipoViaje) {
    tipoViaje = _tipoViaje;
}
string transporte::getMarca() {
    return marca;
}
string transporte::getPlaca() {
    return placa;
}
float transporte::getKm() {
    return km;
}
string transporte::getTipoViaje() {
    return tipoViaje;
}
string transporte::toString() {
    stringstream s;
    s << "- Placa: " << placa << endl;
    s << "- Marca: " << marca << endl;
    s << "- Kilometros recorridos:" << km << endl;
    s << "- Tipo de viaje: " << tipoViaje << endl;
    return s.str();
}

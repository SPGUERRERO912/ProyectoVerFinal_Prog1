#include "ambulancia.h"

static int consAmb = rand() % 300000 + 225891;

ambulancia::ambulancia(string _placa, string _marca, float _km, string _tipoViaje) : transporte(_placa, _marca, _km, _tipoViaje) {
    ocupada = 0;
    codigo = consAmb;
}
ambulancia::~ambulancia() {
}
void ambulancia::setCodigo(int _codigo) {
    codigo = _codigo;
}
void ambulancia::setOcupada(bool _ocupada) {
    ocupada = _ocupada;
}
int ambulancia::getCodigo() {
    return codigo;
}
bool ambulancia::getOcupada() {
    if (ocupada == true) {
        return ocupada;
    }
    else {
        return false;
    }
}
string ambulancia::toString() {
    stringstream s;
    s << transporte::toString();
    s << "- Ocupacion: ";
    if (ocupada)
        s << "ocupada\n";
    else
        s << "libre\n";
    s << "- Codigo: " << codigo << endl;
    return s.str();
}
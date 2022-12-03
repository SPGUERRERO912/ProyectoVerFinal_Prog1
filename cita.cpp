#include "cita.h"

static int consNum = rand() % 100000 + 1482360;

cita::cita(paciente* _p, medico* _m, string _hora, string _fecha, transporte* _t) {
    cod = consNum++;
    p = _p;
    m = _m;
    hora = _hora;
    fecha = _fecha;
    t = _t;
}
cita::~cita() {
}
int cita::getCod() {
    return cod;
}
paciente* cita::getPaciente() {
    return p;
}
medico* cita::getMedico() {
    return m;
}
string cita::getFecha() {
    return fecha;
}
string cita::getHora() {
    return hora;
}
transporte* cita::getTransporte() {
    if (t != nullptr)
        return t;
    else
        return 0;
}
string cita::toString() {
    stringstream s;
    s << "- Codigo de la cita: " << cod << endl;
    s << "Informacion del paciente:" << endl;
    s << p->toString();
    s << "Informacion del medico:" << endl;
    s << m->toString();
    s << "- Fecha (DD/MM/AA): " << fecha << endl;
    s << "- Hora (Horas/Minutos): " << hora << endl;
    s << "Informacion del transporte:" << endl;
    if (t != nullptr)
        s << t->toString();
    else
        s << "Se transporta por su propio medio.\n";
    s << endl << endl;
    return s.str();
}
#include "ListaCitas.h"
#include "dependencias.h"

using namespace std;

bool ListaCitas::cancelarCita(int cod) {
    nodo* panterior = NULL;
    nodo* aux = primero;
    if (primero == NULL) {
        return false;
    }
    if (dynamic_cast<cita*>(aux->getInfo())->getCod() == cod) {
        aux = aux->getSig();
        delete (primero);
        primero = aux;
        return true;
    }
    while (aux != nullptr && dynamic_cast<cita*>(aux->getInfo()) != NULL && dynamic_cast<cita*>(aux->getInfo())->getCod() != cod) {
        panterior = aux;
        aux = aux->getSig();
    }
    if (aux == NULL) {
        return false;
    }
    else {
        panterior->setSig(aux->getSig());
        delete aux;
        return true;
    }
    return false;
}
string ListaCitas::buscarCita(int cod) {
    nodo* aux = primero;
    cita* laCita;
    while (aux != NULL) {
        laCita = dynamic_cast<cita*>(aux->getInfo());
        if (laCita->getCod() == cod) {
            return laCita->toString();
        }
        aux = aux->getSig();
    }
    return "No se encontro una cita con el codigo ingresado....\n";
}
string ListaCitas::fechaConMasCitas() {
    stringstream t;
    nodo* pExt1 = primero;
    nodo* pExt2 = primero;
    cita* laCita1 = dynamic_cast<cita*>(primero->getInfo());
    string prtF = laCita1->getFecha();
    int contador, contadorRep;
    int contadorDeFecha = 1;
    while (pExt1 != NULL) {
        prtF = dynamic_cast<cita*>(pExt1->getInfo())->getFecha();
        pExt2 = primero;
        contador = 0;
        while (pExt2 != NULL) {
            if (prtF == dynamic_cast<cita*>(pExt2->getInfo())->getFecha()) {
                contador++;
            }
            pExt2 = pExt2->getSig();
        }
        if (contador > contadorDeFecha) {
            prtF = dynamic_cast<cita*>(pExt1->getInfo())->getFecha();
            contadorDeFecha = contador;
        }
        /*else if (contador = contadorDeFecha) {
            contadorRep = contador;
            t << "Hay mas de una fecha\n";    Para casos en los que hay +2 fechas con la misma cantidad de citas
            t << prtF << " / ";
        }*/
        pExt1 = pExt1->getSig();
    }
    return prtF;
}
string ListaCitas::getCodigos(){
    stringstream t;
    nodo* aux = primero;
    while (aux != nullptr) {
        t << dynamic_cast<cita*>(aux->getInfo())->getCod() << " - ";
        aux = aux->getSig();
    }
    return t.str();
}
string ListaCitas::citasPorPaciente(string _id) {
    stringstream s;
    nodo* aux = primero;
    cita* laCita;
    while (aux != NULL) {
        laCita = dynamic_cast<cita*>(aux->getInfo());
        if (dynamic_cast<estudianteInt*>(laCita->getPaciente()) != nullptr) {
            if (dynamic_cast<estudianteInt*>(laCita->getPaciente())->getNumPasaporte() == _id) 
                s << laCita->toString();
        }
        else if (dynamic_cast<profesor*>(laCita->getPaciente()) != nullptr) {
            if (dynamic_cast<profesor*>(laCita->getPaciente())->getCedula() == _id) 
                s << laCita->toString();    
        }
        else if (dynamic_cast<estudianteNac*>(laCita->getPaciente()) != nullptr) {
            if (dynamic_cast<estudianteNac*>(laCita->getPaciente())->getCedula() == _id) 
                s << laCita->toString();
        }
        aux = aux->getSig();
    }
    return s.str();
}
string ListaCitas::pacienteMasCit() {
    nodo* pExt1 = primero;
    nodo* pExt2 = primero;
    cita* laCita1 = dynamic_cast<cita*>(primero->getInfo());
    paciente* _paciente = laCita1->getPaciente();
    int contador, contadorRep;
    int contadorDePaciente = 1;
    while (pExt1 != NULL) {
        _paciente = dynamic_cast<cita*>(pExt1->getInfo())->getPaciente();
        pExt2 = primero;
        contador = 0;
        while (pExt2 != NULL) {
            if (_paciente == dynamic_cast<cita*>(pExt2->getInfo())->getPaciente()) {
                contador++;
            }
            pExt2 = pExt2->getSig();
        }
        if (contador > contadorDePaciente) {
            _paciente = dynamic_cast<cita*>(pExt1->getInfo())->getPaciente();
            contadorDePaciente = contador;
        }
        pExt1 = pExt1->getSig();
    }
    return _paciente->toString();
}

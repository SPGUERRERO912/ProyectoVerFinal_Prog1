#include "listaBase.h"

//- - - - - - - - - - - - Metodos de la clase nodo - - - - - - - - - - - -
nodo::nodo(objeto* _info, nodo* _sig) {
	info = _info;
	sig = _sig;
}
nodo::~nodo() {
}
void nodo::setInfo(objeto* _info) {
	info = _info;
}
void nodo::setSig(nodo* _sig) {
	sig = _sig;
}
objeto* nodo::getInfo() {
	return info;
}
nodo* nodo::getSig() {
	return sig;
}
string nodo::toStringNodo() {
	info;
	return info->toString();
}

// - - - - - - - - - - - - Metodos de la lista base - - - - - - - - - - - -
listaBase::listaBase() {
	primero = NULL;
	cantidadNodos = 0;
}
listaBase::~listaBase() {
	while (!listaVacia()) {
		eliminaFinal();
	}
}
int listaBase::getCantidadNodos() {
	return cantidadNodos;
}
objeto* listaBase::randObjeto() {
	nodo* aux = primero;
	int num = rand() % cantidadNodos, cont=0;
	while (aux != NULL && num != cont) {
		cont++;
		aux = aux->getSig();
	}
	if (aux != nullptr)
		return aux->getInfo();
	else
		return primero->getInfo();
}
nodo* listaBase::getPrimero() {
	return primero;
}
void listaBase::insertarFinal(objeto* objeto) {
	nodo* aux = primero;
	if (primero == NULL) {
		primero = new nodo(objeto, NULL);
	}
	else {
		while (aux->getSig() != NULL) {
			aux = aux->getSig();
		}
		aux->setSig(new nodo(objeto, NULL));
	}
	cantidadNodos++;
}
bool listaBase::listaVacia() {
	if (primero == NULL) return true;
	else return false;
}
bool listaBase::eliminaFinal() {
	nodo* aux = primero;
	if (primero == NULL) {
		return false;
	}
	else {
		if (primero->getSig() == NULL) {
			delete primero;
			primero = NULL;
		}
		else {

			while (aux->getSig()->getSig() != NULL) {
				aux = aux->getSig();
			}
			delete  aux->getSig();
			aux->setSig(NULL);
		}
		return true;
	}
}

string listaBase::toString() {
	stringstream s;
	int cont = 0;;
	nodo* aux = primero;
	while (aux != NULL) {
		cont++;
		s << "- - - - - - - - "<< cont <<" - - - - - - - -\n";
		s << aux->toStringNodo();
		s << "- - - - - - - - - - - - - - - - -\n\n";
		aux = aux->getSig();
	}
	return s.str();
}

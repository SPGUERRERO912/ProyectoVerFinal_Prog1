#include "listaTaxis.h"

bool listaTaxis::eliminarTaxi(string placa) {
	nodo* panterior = NULL;
	nodo* aux = primero;
	if (primero == NULL) {
		return false;
	}
	if (dynamic_cast<taxi*>(aux->getInfo())->getPlaca() == placa) {
		aux = aux->getSig();
		delete (primero);
		primero = aux;
		return true;
	}
	while (aux!=nullptr && dynamic_cast<taxi*>(aux->getInfo()) != NULL && dynamic_cast<taxi*>(aux->getInfo())->getPlaca() != placa) {
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
taxi* listaTaxis::encontraTax(string _placa) {
	nodo* aux = primero;
	while (aux != nullptr) {
		if (dynamic_cast<taxi*>(aux->getInfo())->getPlaca() == _placa)
			return dynamic_cast<taxi*>(aux->getInfo());
		aux = aux->getSig();
	}
	return nullptr;
}
string listaTaxis::getPlacas() {
	nodo* aux = primero;
	stringstream t;
	if (listaVacia()) {
		t << "No hay ningun taxi ingresado actualemente";
	}
	else {
		while (aux != nullptr) {
			t << dynamic_cast<taxi*>(aux->getInfo())->getPlaca() << " - ";
			aux = aux->getSig();
		}
	}
	return t.str();
}
double listaTaxis::montoTotal() {
	double total = 0;
	nodo* aux = primero;
	taxi* _taxi;
	while (aux != NULL) {
		_taxi = dynamic_cast<taxi*>(aux->getInfo());
		total += _taxi->getCostoViaje();
		aux = aux->getSig();
	}
	return total;
}
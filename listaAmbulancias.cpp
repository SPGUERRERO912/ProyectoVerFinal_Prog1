#include "listaAmbulancias.h"
bool listaAmbulancias::eliminarAmbu(string placa) {
	nodo* panterior = NULL;
	nodo* aux = primero;
	if (primero == NULL) {
		return false;
	}
	if (dynamic_cast<ambulancia*>(aux->getInfo())->getPlaca() == placa) {
		aux = aux->getSig();
		delete (primero);
		primero = aux;
		return true;
	}
	while (aux != nullptr && dynamic_cast<ambulancia*>(aux->getInfo()) != NULL && dynamic_cast<ambulancia*>(aux->getInfo())->getPlaca() != placa) {
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
ambulancia* listaAmbulancias::encontraAmb(string _placa) {
	nodo* aux = primero;
	while (aux != nullptr) {
		if (dynamic_cast<ambulancia*>(aux->getInfo())->getPlaca() == _placa)
			return dynamic_cast<ambulancia*>(aux->getInfo());
		aux = aux->getSig();
	}
	return nullptr;
}
string listaAmbulancias::getPlacas() {
	nodo* aux = primero;
	stringstream t;
	if (listaVacia()) {
		t << "No hay ningun taxi ingresado actualemente";
	}
	else {
		while (aux != nullptr) {
			t << dynamic_cast<ambulancia*>(aux->getInfo())->getPlaca() << " - ";
			aux = aux->getSig();
		}
	}
	return t.str();
}
string listaAmbulancias::ambulanciasOcu() {
	stringstream s;
	nodo* aux = primero;
	ambulancia* ambu;
	while (aux != NULL) {
		ambu = dynamic_cast<ambulancia*>(aux->getInfo());
		if (ambu->getOcupada()) {
			s << ambu->toString();
		}
		aux = aux->getSig();
	}
	if (s.str() == "")
		s << "No hay ninguna ambulancia que se encuentre ocupada en estos momentos....";
	return s.str();
}
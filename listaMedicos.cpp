#include "listaMedicos.h"
#include <sstream>


listaMedicos::~listaMedicos() {
	nodo* aux = nullptr;
	if (primero != nullptr) {
		while (primero != nullptr) {
			aux = primero;
			primero = primero->getSig();
			delete aux;
		}
	}
}
bool listaMedicos::listaVacia() {
	if (primero == nullptr)
		return true;
	else
		return false;
}
bool listaMedicos::eliminaMed(string ced) {
	nodo* panterior = NULL;
	nodo* aux = primero;
	if (primero == NULL) {
		return false;
	}
	if (dynamic_cast<medico*>(aux->getInfo())->getCedula() == ced) {
		aux = aux->getSig();
		delete (primero);
		primero = aux;
		return true;
	}
	while (aux!=nullptr && (dynamic_cast<medico*>(aux->getInfo()) != NULL && dynamic_cast<medico*>(aux->getInfo())->getCedula() != ced)) {
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
medico* listaMedicos::buscarPorEsp(string _especialidad) {
	nodo* aux;
	aux = primero;
	if (listaVacia())
		return 0;
	else {
		while (aux != nullptr) {
			if (dynamic_cast<medico*>(aux->getInfo()) != nullptr) {
				if (dynamic_cast<medico*>(aux->getInfo())->getEspecialidad() == _especialidad)
					return dynamic_cast<medico*>(aux->getInfo());
			}
			aux = aux->getSig();
		}
	}
	return nullptr;
}
string listaMedicos::getCedulas() {
	stringstream t;
	nodo* aux;
	aux = primero;
	if (listaVacia())
		t << "No hay ningun medico ingresado actualmente";
	else {
		while (aux != nullptr) {
			t << dynamic_cast<medico*>(aux->getInfo())->getCedula() << " - ";
			aux = aux->getSig();
		}
	}
	return t.str();
}
medico* listaMedicos::encontrarMedico(string _ident) {
	nodo* aux;
	aux = primero;
	if (listaVacia())
		return 0;
	else {
		while (aux != nullptr) {
			if (dynamic_cast<medico*>(aux->getInfo()) != nullptr) {
				if (dynamic_cast<medico*>(aux->getInfo())->getCedula() == _ident)
					return dynamic_cast<medico*>(aux->getInfo());
			}
			aux = aux->getSig();
		}
	}
	return nullptr;
}
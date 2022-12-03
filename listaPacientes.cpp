#include "listaPacientes.h"
#include <sstream>

listaPacientes::~listaPacientes() {
	nodo* aux = nullptr;
	if (primero != nullptr) {
		while (primero != nullptr) {
			aux = primero;
			primero = primero->getSig();
			delete aux;
		}
	}
}
void paciente::setNombre(string _nombre) {
	nombre = _nombre;
}
void paciente::setApellidos(string _apellidos) {
	apellido = _apellidos;
}
void paciente::setUniversidad(string _nombrUni) {
	nombrUni = _nombrUni;
}
bool listaPacientes::listaVacia() {
	if (primero == nullptr)
		return true;
	else
		return false;
}
bool listaPacientes::encontrarPaciente(string _ident) {
	nodo* aux;
	aux = primero;
	if (listaVacia())
		return 0;
	else {
		while (aux != nullptr) {
			if (dynamic_cast<profesorProp*>(aux->getInfo()) != nullptr) {
				if (dynamic_cast<profesorProp*>(aux->getInfo())->getCedula() == _ident)
					return 1;
			}
			else if (dynamic_cast<profesorInt*>(aux->getInfo()) != nullptr) {
				if (dynamic_cast<profesorInt*>(aux->getInfo())->getCedula() == _ident)
					return 1;
			}
			else if (dynamic_cast<estudianteNac*>(aux->getInfo()) != nullptr) {
				if (dynamic_cast<estudianteNac*>(aux->getInfo())->getCedula() == _ident)
					return 1;
			}
			else if (dynamic_cast<estudianteInt*>(aux->getInfo()) != nullptr) {
				if (dynamic_cast<estudianteInt*>(aux->getInfo())->getNumPasaporte() == _ident)
					return 1;
			}
			aux = aux->getSig();
		}
	}
	return 0;
}
paciente* listaPacientes::retornarPaciente(string _ident) {
	nodo* aux;
	aux = primero;
	if (listaVacia())
		return 0;
	else {
		while (aux != nullptr) {
			if (dynamic_cast<profesorProp*>(aux->getInfo()) != nullptr && dynamic_cast<profesorProp*>(aux->getInfo())->getCedula() == _ident)
				return dynamic_cast<profesorProp*>(aux->getInfo());
			else if (dynamic_cast<profesorInt*>(aux->getInfo()) != nullptr && dynamic_cast<profesorInt*>(aux->getInfo())->getCedula() == _ident) 
				return dynamic_cast<profesorInt*>(aux->getInfo());
			else if (dynamic_cast<estudianteNac*>(aux->getInfo()) != nullptr && dynamic_cast<estudianteNac*>(aux->getInfo())->getCedula() == _ident)
				return dynamic_cast<estudianteNac*>(aux->getInfo());
			else if (dynamic_cast<estudianteInt*>(aux->getInfo()) != nullptr && dynamic_cast<estudianteInt*>(aux->getInfo())->getNumPasaporte() == _ident)
				return dynamic_cast<estudianteInt*>(aux->getInfo());
			aux = aux->getSig();
		}
	}
	return nullptr;
}

string listaPacientes::top3ProfInt(listaPacientes* list) {
	stringstream t;
	profesorInt* auxProfInt;
    profesorInt** vectP = new profesorInt*[list->getCantidadNodos()];
	int n = list->getCantidadNodos();
    for (int i = 0; i < n; i++)
    {
        vectP[i] = nullptr;
    }
    nodo* temp;
    temp = list->getPrimero();
    int pos = 0;
    while (temp != nullptr)
    {
		vectP[pos] = dynamic_cast<profesorInt*>(temp->getInfo());
		pos++;
        temp = temp->getSig();
    }
    double aux;
	pos = 0;
    for (int i = 0; i < n; i++) {
		pos = i;
        aux = vectP[i]->getCalificacion();
        while ((pos > 0) && (vectP[pos - 1]->getCalificacion() < aux)) {
			auxProfInt = vectP[pos];
            vectP[pos] = vectP[pos - 1];
			vectP[pos - 1] = auxProfInt;
            pos--;
        }
    }
	if (vectP[0] != nullptr)
		t << vectP[0]->toString() << endl;
	if (vectP[1] != nullptr)
		t << vectP[1]->toString() << endl;
	if (vectP[2] != nullptr)
		t << vectP[2]->toString() << endl;
	return t.str();
}
string listaPacientes::listProfInt() {
    nodo* aux;
    aux = primero;
    listaPacientes* listAux = new listaPacientes();
    while (aux != nullptr) {
        if (dynamic_cast<profesorInt*>(aux->getInfo()) != nullptr) {
            listAux->insertarFinal(dynamic_cast<paciente*>(aux->getInfo()));
        }
        aux = aux->getSig();
    }
    return top3ProfInt(listAux);
}
string listaPacientes::estIntExil() {
	stringstream s;
	nodo* aux;
	aux = primero;
	while (aux != nullptr) {
		if (dynamic_cast<estudianteInt*>(aux->getInfo()) != nullptr) {
			if (dynamic_cast<estudianteInt*>(aux->getInfo())->getCondicionPais() == "Exiliado") {
				s << aux->toStringNodo();
			}
		}
		aux = aux->getSig();
	}
	if (s.str() == "")
		s << "No hay ningun estudiante internacional con condicion de -Exiliado- en este momento....";
	return s.str();
}
string listaPacientes::getIdent() {
	stringstream t;
	nodo* aux;
	aux = primero;
	if (listaVacia())
		t << "No hay pacientes ingresados en el sistema....";
	else {
		while (aux != nullptr) {
			if (dynamic_cast<profesorProp*>(aux->getInfo()) != nullptr)
				t << dynamic_cast<profesorProp*>(aux->getInfo())->getCedula() << " - ";
			else if (dynamic_cast<profesorInt*>(aux->getInfo()) != nullptr)
				t << dynamic_cast<profesorInt*>(aux->getInfo())->getCedula() << " - ";
			else if (dynamic_cast<estudianteNac*>(aux->getInfo()) != nullptr)
				t << dynamic_cast<estudianteNac*>(aux->getInfo())->getCedula() << " - ";
			else if (dynamic_cast<estudianteInt*>(aux->getInfo()) != nullptr)
				t << dynamic_cast<estudianteInt*>(aux->getInfo())->getNumPasaporte() << " - ";
			aux = aux->getSig();
		}
	}
	return t.str();
}
bool listaPacientes::eliminarPac(string ced) {
	nodo* panterior = NULL;
	nodo* aux = primero;
	if (primero == NULL) {
		return false;
	}
	if (dynamic_cast<estudianteNac*>(aux->getInfo()) != nullptr && dynamic_cast<estudianteNac*>(aux->getInfo())->getCedula() == ced) {
		aux = aux->getSig();
		delete (primero);
		primero = aux;
		return true;
	}
	else if (dynamic_cast<estudianteInt*>(aux->getInfo())!= nullptr && dynamic_cast<estudianteInt*>(aux->getInfo())->getNumPasaporte() == ced) {
		aux = aux->getSig();
		delete (primero);
		primero = aux;
		return true;
	}
	else if (dynamic_cast<profesorInt*>(aux->getInfo()) != nullptr && dynamic_cast<profesorInt*>(aux->getInfo())->getCedula() == ced) {
		aux = aux->getSig();
		delete (primero);
		primero = aux;
		return true;
	}
	else if (dynamic_cast<profesorProp*>(aux->getInfo()) != nullptr && dynamic_cast<profesorProp*>(aux->getInfo())->getCedula() == ced) {
		aux = aux->getSig();
		delete (primero);
		primero = aux;
		return true;
	}
	while (aux != nullptr && ((dynamic_cast<estudianteNac*>(aux->getInfo()) != NULL && dynamic_cast<estudianteNac*>(aux->getInfo())->getCedula() != ced) ||
		(dynamic_cast<profesorProp*>(aux->getInfo()) != NULL && dynamic_cast<profesorProp*>(aux->getInfo())->getCedula() != ced) ||
		(dynamic_cast<estudianteInt*>(aux->getInfo()) != NULL && dynamic_cast<estudianteInt*>(aux->getInfo())->getNumPasaporte() != ced) ||
		(dynamic_cast<profesorInt*>(aux->getInfo()) != NULL && dynamic_cast<profesorInt*>(aux->getInfo())->getCedula() != ced))) {
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

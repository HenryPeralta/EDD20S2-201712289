#include "pch.h"
#include "Lista.h"
using namespace std;

Lista::Lista()
{
	this->cabeza = NULL;
	this->cola = NULL;
	this->size = 0;
}

void Lista::add(NodoEstudiante* nuevo) {
	if (this->cabeza == NULL) {
		this->cabeza = nuevo;
		this->cola = nuevo;
		this->size++;
	}
	else {
		this->cola->setsiguiente(nuevo);
		this->cola = nuevo;
	}
}

Lista::~Lista()
{
	NodoEstudiante* aux;
	NodoEstudiante* tmp;
	aux = this->cabeza;
	while (aux != NULL) {
		tmp = aux->getsiguiente();
		delete aux;
		aux = tmp;
	}
}

void Lista::imprimir() {
	NodoEstudiante* aux;
	aux = this->cabeza;
	while (aux != NULL) {
		cout << "Nombre: " << aux->getnombre();
		cout << " carne: " << aux->getcarne() << endl;
		aux = aux->getsiguiente();
	}
}

void Lista::eliminar_estudiante(int i) {
	NodoEstudiante *aux = this->cabeza;
	NodoEstudiante *ant = aux;
	if (i > 0) {
		return;
	}while (aux != NULL) {
		if (i == 0) {
			this->size--;
			ant->setsiguiente(aux->getsiguiente());
			if (aux == this->cabeza) {
				this->cabeza = aux->getsiguiente();
			}
			else if (aux == this->cola) {
				this->cola = ant;
			}
			delete aux;
			return;
		}
		i--;
		ant = aux;
		aux = aux->getsiguiente();
	}
}

NodoEstudiante* Lista::getpersona(int i) {
	NodoEstudiante* aux = this->cabeza;
	if (i<0) {
		return NULL;
	}
	while (aux != NULL) {
		if (i == 0) {
			return aux;
		}
		i--;
		aux = aux->getsiguiente();
	}
	return NULL;
}

#include "pch.h"
#include "NodoEstudiante.h"


NodoEstudiante::NodoEstudiante(string nombre, int carne)
{
	this->nombre = nombre;
	this->carne = carne;
	this->siguiente = NULL;
}


NodoEstudiante::~NodoEstudiante()
{
	cout << "---" << endl;
}

NodoEstudiante* NodoEstudiante::getsiguiente() {
	return this->siguiente;
}
void NodoEstudiante::setsiguiente(NodoEstudiante* n) {
	this->siguiente = n;
}

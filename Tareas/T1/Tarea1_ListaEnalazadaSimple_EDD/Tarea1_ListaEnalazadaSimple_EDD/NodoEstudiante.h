#pragma once
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
class NodoEstudiante
{
public:
	NodoEstudiante(string nombre, int carne);
	~NodoEstudiante();
	void setsiguiente(NodoEstudiante* n);
	NodoEstudiante * getsiguiente();
	string getnombre() { return this->nombre; }
	int getcarne() { return this->carne; }

private:
	string nombre;
	int carne;
	NodoEstudiante* siguiente;
};


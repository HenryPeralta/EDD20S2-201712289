#pragma once
#include "NodoEstudiante.h"
#include <iostream>
using namespace std;
class Lista
{
public:
	Lista();
	~Lista();
	void add(NodoEstudiante* nuevo);
	void eliminar_estudiante(int i);
	NodoEstudiante* getpersona(int i);
	void imprimir();
private:
	NodoEstudiante* cabeza;
	NodoEstudiante* cola;
	int size;
};


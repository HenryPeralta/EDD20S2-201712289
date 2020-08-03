// Tarea1_ListaEnalazadaSimple_EDD.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include "Lista.h";
#include "NodoEstudiante.h";

int main()
{
	Lista * l = new Lista();
	NodoEstudiante *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;
	a = new NodoEstudiante("Jose", 201759021);
	b = new NodoEstudiante("Fernando", 201672560);
	c = new NodoEstudiante("Lucia", 201621394);
	d = new NodoEstudiante("Daniela", 201700458);
	e = new NodoEstudiante("Jorge", 201589231);
	f = new NodoEstudiante("Vilma", 201890327);
	g = new NodoEstudiante("Henry", 201712289);
	h = new NodoEstudiante("Pablo", 201899345);
	i = new NodoEstudiante("Andrea", 201484932);
	j = new NodoEstudiante("Maria", 201700394);
	
	l->add(a);
	l->add(b);
	l->add(c);
	l->add(d);
	l->add(e);
	l->add(f);
	l->add(g);
	l->add(h);
	l->add(i);
	l->add(j);

	l->imprimir();
	l->eliminar_estudiante(0);
	cout << "Se ha Eliminado un Estudiante" << endl;

	l->imprimir();

	cout << "Se ha encontrado el carne: " << endl;
	NodoEstudiante* obt = l->getpersona(1);
	cout << obt->getcarne() << endl;
	delete l;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

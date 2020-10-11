#include "lista.h"
#include "sucursal.h"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

struct Nodo{
	sucursal_t* sucursal;
	Nodo* siguiente;
};

Nodo* agregarSucursal(Nodo* inicial, sucursal_t* sucursal){
	Nodo* nuevo_nodo = new Nodo;
	nuevo_nodo->sucursal = sucursal;
	nuevo_nodo->siguiente = NULL;

	if(inicial == NULL){
		inicial = nuevo_nodo;
	}
	else{
		Nodo* aux = inicial;
		while(aux->siguiente != NULL){
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo;
	}
	return inicial;
}

Nodo* cargarLista(Nodo* inicial){
	ifstream archivo;
	archivo.open("ejemplo.txt", ios::in);
	if(archivo.fail()){
		cout<< "No se pudo abrir el archivo" <<endl;
		exit(1);
	}
	string renglon;

	while(!archivo.eof()){
		getline(archivo,renglon);
		inicial = agregarSucursal(inicial,crearSucursal(renglon));
	}

	archivo.close();

	return inicial;
}

void mostrarLista(Nodo* inicial){
	if(inicial != NULL){
		for(Nodo *p = inicial; p != NULL; p = p->siguiente){
			cout << "----------------------" << endl;
			cout << "Sucursal: " << p->sucursal->id << endl;
			cout << "Provincia: " << p->sucursal->prov << endl;
            cout << "Facturacion: " << p->sucursal->facturacion << endl;

		}
	}
}


#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "sucursal.h"

struct Nodo;

Nodo* agregarSucursal(Nodo* inicial, sucursal_t sucursal);

Nodo* cargarLista(Nodo* inicial);

void mostrarLista(Nodo* inicial);


#endif // LISTA_H_INCLUDED

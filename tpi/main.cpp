#include <iostream>
#include "sucursal.h"
#include "lista.h"
using namespace std;

int main()
{
    Nodo* lista = NULL;

	lista = cargarLista(lista);
	mostrarLista(lista);
	int opcion=0;
    system("PAUSE");

    while(opcion != 4){
        system("cls");
        cout<<"\t\tSUCURSALES\n-------------------------------------------------"<<endl;
        cout<<"\n1. Sucursales con m\xA0s facturaci\xA2n"<<endl;
        cout<<"\n2. Sucursales con mayor cantidad de articulos"<<endl;
        cout<<"\n3. Ranking de rendimiento"<<endl;
        cout<<"\n4. Salir"<<endl;
        cout<<"\n-------------------------------------------------\nElija Opci\xA2n: "<<endl;
        cin>>opcion;

        switch(opcion){
            case 1:{
                //mostrarFacturación(list_suc);
            break;
            }
            case 2:{
                //mostrarCantidad(list_suc);
            break;
            }
            case 3:{
                //mostrarRendimiento(list_suc);
            break;
            }
            default:{
                if (opcion<1 || opcion>4){
                    cout << "\nLa opcion elegida es invalida\n\n";
                    system("PAUSE");
                }
            break;
            }
        }
    }
    return 0;
}

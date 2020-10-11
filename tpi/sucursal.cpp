#include "sucursal.h"
#include <string>

using namespace std;

sucursal_t* crearSucursal(string renglon){
    sucursal_t* sucursal = new sucursal_t();
	int inicioVar = 0;
	int numVar = 1;
	int largoVar = 0;
	for(int i = 0; i < renglon.size();i++){
		if(renglon[i] == '-'){
			largoVar = i - inicioVar;
			switch(numVar){
				case 1:
					sucursal->id = stoi(renglon.substr(inicioVar,largoVar),NULL,10);
					break;
				case 2:
					sucursal->prov = renglon.substr(inicioVar,largoVar);
					break;
				case 3:
					sucursal->facturacion = stoi(renglon.substr(inicioVar,largoVar),NULL,10);
					break;
			}
			inicioVar = i + 1;
			numVar++;
		}
	}
	return sucursal;
}
//Getters
int getId(sucursal_t* sucursal){
    if (!sucursal) return false;
    return sucursal->id;
}

string getProvincia(sucursal_t* sucursal){
    if (!sucursal) return false;
    return sucursal->prov;
}

int getFacturacion(sucursal_t* sucursal){
    if (!sucursal) return false;
    return sucursal->facturacion;
}

/*float getMonto(sucursal_t* sucursal){
    if (!sucursal) return false;
    return sucursal->monto;
}

float getMetros(sucursal_t* sucursal){
    if (!sucursal) return false;
    return sucursal->metros;
}

int getMatriz(sucursal_t* sucursal){
    if (!sucursal) return false;
    return sucursal->matriz;
}*/

//Setters
void setId(sucursal_t* sucursal, int id){
    sucursal->id = id;
}

void setProvincia(sucursal_t* sucursal, string prov){
    sucursal->prov = prov;
}

void setFacturacion(sucursal_t* sucursal, int facturacion){
    sucursal->facturacion = facturacion;
}

/*void setMonto(sucursal_t* sucursal, float monto){
    sucursal->monto = monto;
}

void setMetros(sucursal_t* sucursal, float metros){
    sucursal->metros = metros;
}

void setMatriz(sucursal_t* sucursal, int matriz){
    sucursal->matriz = matriz;
}*/

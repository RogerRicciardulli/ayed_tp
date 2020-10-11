#ifndef SUCURSAL_H_INCLUDED
#define SUCURSAL_H_INCLUDED
#include <string>

using namespace std;

struct sucursal{
	int id;
	string prov;
	int facturacion;
};
typedef struct sucursal sucursal_t;
sucursal_t* crearSucursal(string renglon);
//Getters
int getId(sucursal_t* sucursal);

string getProvincia(sucursal_t* sucursal);

int getFacturacion(sucursal_t* sucursal);

/*float getMonto(sucursal_t* sucursal);

float getMetros(sucursal_t* sucursal);

int getMatriz(sucursal_t* sucursal);*/

//Setters
void setId(sucursal_t* sucursal, int id);

void setProvincia(sucursal_t* sucursal, string provincia);

void setFacturacion(sucursal_t* sucursal, int cantidad);

/*void setMonto(sucursal_t* sucursal, float monto);

void setMetros(sucursal_t* sucursal, float metros);

void setMatriz(sucursal_t* sucursal, int matriz);*/

#endif // SUCURSAL_H_INCLUDED


#ifndef _ESTADIO_H_
#define _ESTADIO_H_

struct _Estadio;

typedef struct _Estadio* Estadio;


/*------------
| Constructor
* ------------*/

Estadio crearEstadio(char nombre[], char ciudad[], int capacidad);
Estadio inicializarEstadio();


/*----------------------
| Funciones individuales
* ----------------------*/

void mostrarEstadio(Estadio estadio);

#endif


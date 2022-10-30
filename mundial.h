
#ifndef _MUNDIAL_H_
#define _MUNDIAL_H_

struct _Mundial;

typedef struct _Mundial* Mundial;


/*------------
| Constructor
* ------------*/

Mundial crearMundial(int año, char pais[], char nombreMascota[]);


/*----------------------
| Funciones individuales
* ----------------------*/

void mostrarMundial(Mundial mundial);


/*---------------------
| Funciones de arreglo
* --------------------*/

void inicializarEstadios(Mundial mundial);

#endif



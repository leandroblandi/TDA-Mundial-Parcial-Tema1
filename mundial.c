
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mundial.h"
#include "estadios.h"

#define CANTIDAD_ESTADIOS 3

struct _Mundial
{
	int a�o;
	char pais[30];
	char nombreMascota[20];
	Estadio estadios[CANTIDAD_ESTADIOS];
};

Mundial crearMundial(int a�o, char pais[], char nombreMascota[])
{
	Mundial mundial = malloc(sizeof(struct _Mundial));

	if (mundial != NULL)
	{
		mundial->a�o = a�o;

		strcpy_s(mundial->pais, 30, pais);
		strcpy_s(mundial->nombreMascota, 20, nombreMascota);

		return mundial;
	}
	return NULL;
}

/*----------------------
| Funciones individuales
* ----------------------*/

void mostrarMundial(Mundial mundial)
{
	printf("\nMundial:");
	printf("\n\tPais: %s", mundial->pais);
	printf("\n\tA�o: %d", mundial->a�o);
	printf("\n\tNombre de la mascota: %s", mundial->nombreMascota);

	for (int i = 0; i < CANTIDAD_ESTADIOS; i++)
	{
		mostrarEstadio(mundial->estadios[i]);
	}
}


/*---------------------
| Funciones de arreglo
* --------------------*/

void inicializarEstadios(Mundial mundial)
{
	for (int i = 0; i < CANTIDAD_ESTADIOS; i++)
	{
		mundial->estadios[i] = inicializarEstadio();
	}
}

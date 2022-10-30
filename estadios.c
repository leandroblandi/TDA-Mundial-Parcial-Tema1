
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estadios.h"


struct _Estadio
{
	char nombre[20];
	char ciudad[30];
	int capacidad;
};

Estadio crearEstadio(char nombre[], char ciudad[], int capacidad)
{
	Estadio estadio = malloc(sizeof(struct _Estadio));

	if (estadio != NULL)
	{
		strcpy_s(estadio->nombre, 20, nombre);
		strcpy_s(estadio->ciudad, 30, ciudad);

		estadio->capacidad = capacidad;

		return estadio;
	}
	return NULL;
}

Estadio inicializarEstadio()
{
	return crearEstadio("", "", -1);
}


void mostrarEstadio(Estadio estadio)
{
	if (estadio->capacidad != -1)
	{
		printf("\nEstadio:");
		printf("\n\tNombre: %s", estadio->nombre);
		printf("\n\tPais: %s", estadio->ciudad);
		printf("\n\tCapacidad: %d", estadio->capacidad);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estadios.h"


struct _Estadio
{
	char nombre[20];
	char ciudad[30];
	int capacidad
};

Estadio crearEstadio(char nombre[], char ciudad[], int capacidad)
{
	Estadio estadio = malloc(sizeof(struct _Estadio));

	strcpy(estadio->nombre, nombre);
	strcpy(estadio->ciudad, ciudad);

	estadio->capacidad = capacidad;

	return estadio;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estadios.h"
#include "mundial.h"

int main()
{
	
	Mundial mundial = crearMundial(2022, "Qatar", "Laeeb");
	inicializarEstadios(mundial);
	mostrarMundial(mundial);

	return EXIT_SUCCESS;
}
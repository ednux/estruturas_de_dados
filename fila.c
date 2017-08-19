#include "fila.h" //Inclui os protótipos
#include <stdio.h>
#include <stdlib.h>

//Criar fila
Fila *fila_criar(void)
{
	Fila *fi = (Fila*) malloc(sizeof(Fila));
	if (fi != NULL)
		*fi = NULL;
	return fi;
}

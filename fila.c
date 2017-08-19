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
//Liberar fila
void fila_liberar(Fila *fi)
{	
	if (fi != NULL) {
		No *tmp;
		while ((*fi) != NULL) {
			tmp = *fi;
			*fi = (*fi)->prox;
			free(tmp);
		}
		free(fi);
	}
}

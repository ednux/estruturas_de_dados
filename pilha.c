#include "pilha.h" //Inclui os protótipos
#include <stdio.h>
#include <stdlib.h>

//Criar pilha
Pilha *pilha_criar(void)
{
	Pilha *pi = (Pilha*) malloc(sizeof(Pilha));
	if (pi != NULL)
		*pi = NULL;
	return pi;
}
//Liberar pilha
void pilha_liberar(Pilha *pi)
{	
	if (pi != NULL) {
		No *tmp;
		while ((*pi) != NULL) {
			tmp = *pi;
			*pi = (*pi)->prox;
			free(tmp);
		}
		free(pi);
	}
}

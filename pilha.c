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

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
//Inserir um nó na pilha
int pilha_inserir(Pilha *pi, No dados)
{
	if (pi == NULL) return 0;
	No *tmp = (No*) malloc(sizeof(No));
	if (tmp == NULL) return 0;
	*tmp = dados;
	if ((*pi) == NULL)
		*pi = tmp;
	else {
		tmp->prox = *pi;
		*pi = tmp;
	}
	return 1;
}

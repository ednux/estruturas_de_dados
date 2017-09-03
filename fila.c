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
//Inserir um nó na fila
int fila_inserir(Fila *fi, No dados)
{
	if (fi == NULL) return 0;
	No *tmp = (No*) malloc(sizeof(No));
	if (tmp == NULL) return 0;
	*tmp = dados;
	if ((*fi) == NULL)
		*fi = tmp;
	else {
		No *atual = *fi;
		while (atual->prox != NULL)
			atual = atual->prox;
		atual->prox = tmp;
	}
	return 1;
}
//Remover um nó da fila
int fila_remover(Fila *fi)
{
	if (fi == NULL || *fi == NULL)
		return 0;
	No *tmp = *fi;
	*fi = (*fi)->prox;
	free(tmp);
	return 1;
}
//Exibir todos os nós da fila
int fila_exibir(Fila *fi)
{
	if (fi == NULL || *fi == NULL)
		return 0;
	No *tmp = *fi;
	while (tmp != NULL) {
		printf("%d ", tmp->indice);
		tmp = tmp->prox;
	}
	printf("\n");
	return 1;
}

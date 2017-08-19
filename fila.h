#ifndef _FILA_H
	//Definição da biblioteca
	#define _FILA_H
	
	//Definição dos tipos de dados
	typedef struct no {
		int indice;
		struct no *prox;
	} No;
	
	//Definição de uma fila
	typedef No *Fila;
	
	//Declaração dos protótipos das funções
		//Função para criar uma fila
		extern Fila *fila_criar(void);
		
		//Função para liberar uma fila
		extern void fila_liberar(Fila *fi);
		
		//Função para inserir um nó na fila
		extern int fila_inserir(Fila *fi, No dados);
		
		//Função para remover um nó da fila
		extern int fila_remover(Fila *fi);
		
		//Função para exibir todos os nós da fila
		extern int fila_exibir(Fila *fi);
#endif

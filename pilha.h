#ifndef _PILHA_H
	//Definição da biblioteca
	#define _PILHA_H
	
	//Definição dos tipos de dados
	typedef struct no {
		int indice;
		struct no *prox;
	} No;
	
	//Definição de uma pilha
	typedef No *Pilha;
	
	//Declaração dos protótipos das funções
		//Função para criar uma pilha
		extern Pilha *pilha_criar(void);
		
		//Função para liberar uma pilha
		extern void pilha_liberar(Pilha *pi);
		
		//Função para inserir um nó na pilha
		extern int pilha_inserir(Pilha *pi, No dados);
		
		//Função para remover um nó da pilha
		extern int pilha_remover(Pilha *pi);
		
		//Função para exibir todos os nós da pilha
		extern int pilha_exibir(Pilha *pi);
#endif

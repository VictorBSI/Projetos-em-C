#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100

typedef struct {
	int itens[MAXTAM];
	int topo;
}PILHA;

void iniciar(PILHA*);
void inserir(PILHA*, int);
void excluir(PILHA*, int);
void imprimir(PILHA*);

void iniciar(PILHA* p){
	p->topo = 0;
}

void inserir(PILHA* p, int item){
	p->itens[p->topo] = item;
	p->topo++;
}

void excluir(PILHA* p, int item){
	p->topo--;
}

void imprimir(PILHA* p){
	int cont = 0;
	while(cont<p->topo){
		printf("%d", p->itens[cont]);
		cont++;
	}
}

int main(){
	PILHA pilha;


	iniciar(&pilha);
	inserir(&pilha, 10);
	inserir(&pilha, 15);
	inserir(&pilha, -6);
	imprimir(&pilha);



	return 0;



}

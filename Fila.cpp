#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100

typedef struct{
	int itens[MAXTAM];
	int inicio = 0;
	int fim = 0;
}FILA;

void iniciar(FILA*);
void inserir(FILA *, int);
void excluir(FILA*);
void imprimir(FILA*);

void iniciar(FILA* f){
	f->inicio=0;
	f->fim=0;
}

void inserir(FILA* f, int item){
	f->itens[f->fim] = item;
	f->fim++;
}

void excluir(FILA* f){
	f->itens[f->inicio++] = NULL;
}

void imprimir(FILA* f){
	int cont = f->inicio;
	while(cont < f->fim){
		printf("%d\n", f->itens[cont]);
		cont++;
	}
}

int main(){
	FILA fila;
	iniciar(&fila);
	inserir(&fila, 10);
	inserir(&fila, 15);
	inserir(&fila, -6);
	excluir(&fila);
	excluir(&fila);
	imprimir(&fila);
}

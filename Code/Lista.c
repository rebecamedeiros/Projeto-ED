#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

tNo *getNo(tNomes s){

    tNo *nn;

    nn = malloc(sizeof(tNo));

    if(nn != NULL){

        nn->n = s;
        nn->proximo = NULL;

    }

    return nn;

}

void ExcluirNo(tNo *no){

    free(no);

}

void IniciaLista(tNo **ListaNomes){

    *ListaNomes = NULL;

}

/*int ListaVazia(const tNo *ListaNomes){

    return ListaNomes == NULL;

}*/

void InserirNomes(tNo **ListaNomes, int indice, char *nm){
	
	tNo *novono = getNo(nm);

	if(head == NULL){
		head = novono;
		novono->proximo = NULL;
	} else {
		novono->proximo = head;
		head = novono;
	}

	printf("\n NOVO NOME ADICIONADO");
}









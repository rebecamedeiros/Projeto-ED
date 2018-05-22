/*
 * lista.c
 *
 *  Created on: 20/05/2018
 *      Author: rebeca
 */

#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

// Criando um novo nó
tNo *getNo(tNomes a){

	tNo *novono;

	// Alocando espaco do novo nó
	novono = malloc(sizeof(tNo));

	if(novono != NULL){
		novono->n = a;
		novono->proximo = NULL;
	}

	return novono;
}

void ExcluirNo(tNo *no){
    // Liberando o espaço de memória ocupado pelo nó
    free(no);
}

void CriarLista(tNo **lista){
    // Iniciando o primeiro nó como NULL
    *lista = NULL;
}

char ListaVazia(const tNo *lista){
    return lista == NULL;
}

char InserirNome(tNo **lista, tNomes nome, int indice){

    tNo *novo = getNo(nome);

    if(novo == NULL){
        printf("\n Sem memoria");
        return 1;
    }

    if(indice == 0){
        novo->proximo = *lista;
        *lista = novo;
        return 0;
    }

    int i;

    tNo *no = *lista;

    for(i = 0; i < indice - 1; i++){
        if(no == NULL){
            printf("\n O indice nao existe");
            return 1;
        }

        no = no->proximo;
    }

    novo->proximo = no->proximo;
    no->proximo = novo;

    return 0;
}

int FrequenciaNome(){

}

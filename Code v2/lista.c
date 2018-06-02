/*
 * lista.c
 *
 *  Created on: 02/06/2018
 *      Author: rebeca
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

tNo *CriarNovoNo(char a){
	tNo *no;

	no = malloc(sizeof(tNo));

	if(no != NULL){
		strcpy(no->n, a);
		no->proximo = NULL;
	}

	return no;
}

void ExcluirNo(tNo *no){
	free(no);
}

void InserirNovoNome(tNo **head, char w){
	tNo *novonome = CriarNovoNo(w);

	novonome->proximo = NULL;

	// Para adicionar no final da lista
	/*if(head == NULL){
		head = novonome;
		puts("lista estava vazia")
	} else {
		tNo *final = head;

		while(final->proximo != NULL){
			final = final->proximo;
		}
		final->proximo = novonome;

		puts("adicionado no final");
	}*/

	if(head == NULL){
		novonome->proximo = NULL;
		head = novonome;
		puts("fila vazia/nome adicionado");
	} else {
		novonome->proximo = head;
		head = novonome;
		puts("nome adicionado");
	}

}

void ImprimirNomes(tNo *head){
	int i;

	while(head != NULL){
		printf("[%d] = %s", i, head->n);
		head = head->proximo;

		i++;
	}

}








/*
 * listadenomes.c
 *
 *  Created on: 02/06/2018
 *      Author: rebeca
 */
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void ApresentaMenu(){
	printf("\n\t	***** Menu *****"
		   "\n\t 1 - Adicionar nome"
		   "\n\t 2 - Exibir nome"
		   "\n\t 3 - Sair");
}

int main(){
	tNo *lista = NULL;

	int op;

	char *nome;

	while(1){

		ApresentaMenu();

		printf("\n Escolha uma das opcoes: ");
		scanf("%d", &op);

		if(op == 3){
			break;
		}

		switch(op){
			case 1:
				printf("\n Digite o nome: ");
				scanf("%s", nome);

				InserirNovoNome(&lista, nome);

				break;
			case 2:
				ImprimirNomes(&lista);
				break;
			default:
				printf("\n Escolha invalida");
				break;
		}

	}

	printf("\n Programa encerrado");

	return 0;
}







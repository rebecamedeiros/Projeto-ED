/*
 * lista.h
 *
 *  Created on: 02/06/2018
 *      Author: rebeca
 */

#ifndef LISTA_H_
#define LISTA_H_

#define MAX_NOMES 30

//typedef char tNomes;

typedef struct no{
	struct no *proximo;
	char n[MAX_NOMES];
}tNo;

tNo *head = NULL;

extern tNo *CriarNovoNo(char a);

extern void ExcluirNo(tNo *no);

//extern void CriarLista(tNo **head);

extern void InserirNovoNome(tNo **head, char w);

extern void ImprimirNomes(tNo *head);


#endif /* LISTA_H_ */

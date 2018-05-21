/*
 * lista.h
 *
 *  Created on: 20/05/2018
 *      Author: rebeca
 *
 *      Arquivo para a lista encadeada ordenada com os nomes mais frequentes
 */

#ifndef LISTA_H_
#define LISTA_H_

typedef char tNomes;

typedef struct No{
	tNomes n;
	struct no *proximo;
}tNo;

extern tNo *getNo(tNomes a);

extern void IniciaLista(const tNo *lista);

extern int ListaVazia(const tNo *lista);

extern void AdicionaNome(tNo *lista, tNomes nome);

//função para ordenar por frequência


#endif /* LISTA_H_ */

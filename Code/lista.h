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

extern void ExcluirNo(tNo *no);

extern void CriarLista(tNo **lista);

extern char InserirNome(tNo **lista, tNomes nome, int indice);

extern char ListaVazia(const tNo *lista);

// Função para contar quantas vezes o nome aparece na lista
// Os valores encontrados vão ser usados na função OrdenarNomes
extern int FrequenciaNome();

// A função vai receber os valores de FrequenciaNome e ordenar os nomes
// de acordo com os valores
extern void OrdenarNomes();

// Exibir os nomes ordenados
extern void ExibirLista(const tNo *lista);

#endif /* LISTA_H_ */

#ifndef LISTA_H_
#define LISTA_H_

#define MAX_NOME 30 // número máximo de caracteres

typedef char tNomes;

typedef struct No{
	//int freq;
	tNomes n[MAX_NOME];     // nomes
	struct No *proximo;
} tNo;

extern tNo *getNo(tNomes s);

extern void ExcluirNo(tNo *no);

extern void IniciaLista(tNo **ListaNomes);

//extern int ListaVazia(const tNo *ListaNomes);

extern void InserirNome(tNo **ListaNomes, int indice, char nm);

#endif // LISTA_H_


#ifndef LISTA_H_
#define LISTA_H_

#define MAX_NOME 30 // número máximo de caracteres

typedef char tNomes;

typedef struct no{
    tNomes *nome;       // Depois adicionar o MAX_NOME
    struct no *proximo;
} tNo;

extern tNo *getNo(tNomes s);

extern void CriarLista(tNo **listanomes);

extern int InserirNovoNome(tNomes **listanomes, char word);

extern void ImprimirLista(const tNo *listanomes);

#endif // LISTA_H_


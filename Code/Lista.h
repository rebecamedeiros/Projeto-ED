#ifndef LISTA_H_
#define LISTA_H_

#define MAX_NOME 30 // número máximo de caracteres

typedef char tNomes;

typedef struct no{
    tNomes *nome;       // Depois adicionar o MAX_NOME
    struct no *proximo;
} tNo;


extern tNo *CriarNovoNo(tNomes str);

extern void ExcluirNo(tNo *no);

extern void CriarLista(tNo **listanomes);

extern int InserirNovoNome(tNo **listanomes, tNomes w);

extern void ImprimirLista(const tNo *listanomes);

#endif // LISTA_H_


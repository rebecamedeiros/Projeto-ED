#ifndef LISTA_H_
#define LISTA_H_

#define MAX_NOME 30 // número máximo de caracteres

typedef char tNomes;

typedef struct no{
    tNomes *nome;       // Depois adicionar o MAX_NOME
    struct no *proximo;
} tNo;


extern tNo *getNo(tNomes s);

extern void ExcluirNo(tNo *no);

extern void CriarLista(tNo **head);

extern void InserirNovoNome(tNomes **head, char word);

extern void ImprimirLista(const tNo *head);

#endif // LISTA_H_


#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

#include <string>
#include "lista.h"
#define MAX_NOME 50

typedef struct arvore{
    std::string nome;
    int contador;
    struct arvore *esquerda;
    struct arvore *direita;
}*Arvore;

extern Arvore getFolha(std::string nome, int contador);
extern void deleteArvore(Arvore *tree);

extern void IniciaArvore(Arvore *tree);
extern int Inserir(Arvore *tree, std::string nome, int contador);
extern int Busca(Arvore tree, std::string nome);
extern void ExibeArvore(Arvore raiz);

extern void CopiaListaArvore(tLista *lista, Arvore *raiz);

#endif // ARVORE_H_INCLUDED

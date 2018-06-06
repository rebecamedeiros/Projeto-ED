#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <string>
#define MAX_ELEMENTOS 50

struct tAluno
{
    std::string nome;
    int numocc;
};

struct tLista
{
    int nElementos;
    tAluno alunos[MAX_ELEMENTOS];
};

extern void CriaAluno (tAluno aluno, std::string nomedoaluno);
extern void IniciaLista(tLista *lista);
extern int Comprimento (const tLista *lista);
extern tAluno ObtemElemento(const tLista *lista, int indice);
extern tAluno RemoveElemento(tLista *lista, int indice);
extern int EstaVazia(const tLista *lista);
extern int AcrescentaElemento(tLista *lista, tAluno aluno);
extern int BuscaElemento(const tLista *lista, tAluno aluno);
extern void ExibeLista(const tLista *lista);

#endif // LISTA_H_INCLUDED

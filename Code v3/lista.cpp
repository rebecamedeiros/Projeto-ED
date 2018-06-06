#include "lista.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

static int EstaCheia(const tLista *lista)
{
    return lista->nElementos >= MAX_ELEMENTOS;
}

void CriaAluno(tAluno aluno, std::string nomedoaluno)
{
    aluno.nome = nomedoaluno;
    aluno.numocc = 1;
}

void IniciaLista(tLista *lista)
{
    lista->nElementos = 0;
}

int Comprimento(const tLista *lista)
{
    return lista->nElementos;
}

tAluno ObtemElemento(const tLista *lista, int indice)
{
    if(indice < 0 || indice >= lista->nElementos){
        std::cout << "Elemento inexistente" << std::endl;
        exit(1);
    }

    return lista->alunos[indice];
}

tAluno RemoveElemento(tLista *lista, int indice)
{
    tAluno itemRemovido;
    if(indice < 0 || indice >= lista->nElementos){
        std::cout << "Posicao de remocao inexistente" << std::endl;
        exit(1);
    }
    itemRemovido = lista->alunos[indice];
    for (int i = indice; i < lista->nElementos - 1; i++){
        lista->alunos[i] = lista->alunos[i+1];
    }
    --lista->nElementos;

    return itemRemovido;
}

int EstaVazia(const tLista *lista)
{
    return lista->nElementos == 0;
}

int AcrescentaElemento(tLista *lista, tAluno aluno)
{
    if(EstaCheia(lista)){
        return 1;
    }
    lista->alunos[lista->nElementos] = aluno;
    ++lista->nElementos;

    return 0;
}

int BuscaElemento(const tLista *lista, tAluno aluno)
{
    for(int i = 0; i < lista->nElementos; i++){
        if(lista->alunos[i].nome == aluno.nome){
            return i;
        }
    }

    return -1;
}

void ExibeLista(const tLista *lista)
{
    for(int i = 0; i < Comprimento(lista); i++){
        std::cout << i << " - " << ObtemElemento(lista,i).nome << " (" << ObtemElemento(lista,i).numocc << ")" << std::endl;
    }
}

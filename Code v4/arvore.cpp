#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include "arvore.h"
#include "lista.h"

Arvore getFolha(std::string nome, int cont){
    Arvore tree = (Arvore) malloc(sizeof(arvore));
    if(tree != NULL){
        tree->nome = nome;
        tree->contador = cont;
        tree->esquerda = NULL;
        tree->direita = NULL;
    }
    return tree;
}

void deleteArvore(Arvore *tree){
    free(*tree);
}


void IniciaArvore(Arvore *tree){
    *tree = NULL;
}

int Inserir(Arvore *tree, std::string nome, int contador){
    Arvore auxiliar = getFolha(nome, contador);
    if(auxiliar == NULL){
        std::cout << "Memoria Insuficiente";
        return 1;
    }

    if(*tree == NULL){
        *tree = auxiliar;
        return 0;
    }

    Arvore arvore = *tree;

    if(contador % 2 != 0){
        Inserir(&arvore->esquerda, nome, contador);
        return 0;
    }

    Inserir(&arvore->direita, nome, contador);
    return 0;
}
int Busca(Arvore tree, std::string nome){
    if(tree != NULL){
        if( nome == tree->nome){
            std::cout << "Nome Encontrado\n\n";
            std::cout << "Nome: " << tree->nome << std::endl;
            std::cout << "Contador: " << tree->contador << std::endl;
            return 1;
        }

        return (Busca(tree->esquerda, nome) || Busca(tree->direita, nome));
    }
    return 0;
}

void ExibeArvore(Arvore raiz){
    if(raiz != NULL){
        std::cout << "Nome: " << raiz->nome;
        std::cout << ", " << raiz->contador << std::endl;
        ExibeArvore(raiz->esquerda);
        ExibeArvore(raiz->direita);
    }
}


void CopiaListaArvore(tLista *lista, Arvore *raiz){
    int i;
    for( i = 0; i < Comprimento(lista); i++){
        tAluno aux = ObtemElemento(lista, i);
        Inserir(raiz, aux.nome, aux.numocc);
    }
}


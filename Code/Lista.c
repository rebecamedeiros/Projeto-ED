#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

tNo *getNo(tNomes s){
    tNo *n;

    n = malloc(sizeof(tNo));

    if(n != NULL){
        n->nome = s; // Erro por conta do MAX_NOME
                     // Não apresenta erro sem ele
        n->proximo = NULL;
    }

    return n;
}

void CriarLista(tNo **listanomes){
    *listanomes = NULL;
}

int ListaVazia(const tNo *listanomes){
    return listanomes == NULL;
}

int InserirNovoNome(tNomes **listanomes, char word){
    tNo *novonome = getNo(word);

    if(novonome == NULL){
        printf("\n Sem espaco de memoria");
        return 1;
    }

    if(ListaVazia(*listanomes)){
        *listanomes = novonome;
        return 0;
    }

    tNo *no = *listanomes;

    while(no->proximo != NULL){
        no = no->proximo;
    }

    no->proximo = novonome;

    printf("\n O novo nome foi adicionado");

    return 0;
}

void ImprimirLista(const tNo *listanomes){
    const tNo *no = listanomes;

    int i = 0;

    while(no != NULL){
        printf("[%d] = %s \n", i, no->nome);
        no = no->proximo;

        i++;
    }

}






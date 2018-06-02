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

void InserirNovoNome(tNomes **listanomes, char word){
    tNo *novono = getNo(word);

    if(novono == NULL){
        novono = word;
        novono->proximo = NULL;
    } else {
        novono->proximo = novono;
        novono = word;
    }

    printf("\n O novo nome foi adicionado");
}






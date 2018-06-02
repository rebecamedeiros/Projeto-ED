#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

tNo *CriarNovoNo(tNomes str){ // Ok
    tNo *n;

    n = malloc(sizeof(tNo));

    if(n != NULL){
        n->nome = str; // Erro por conta do MAX_NOME
                     // Não apresenta erro sem ele
        n->proximo = NULL;
    }

    return n;
}

void ExcluirNo(tNo *no){
    free(no);
}

void CriarLista(tNo **listanomes){
    *listanomes = NULL;
}

int ListaVazia(const tNo *listanomes){
    return listanomes == NULL;
}

void InserirNovoNome(tNo **listanomes, tNomes word){
    tNo *novonome = CriarNovoNo(word);

    if(novonome == NULL){
        printf("\n Sem memoria para o novo nome");
        return 1;
    }

    if(ListaVazia(listanomes)){
        *listanomes =  novonome;
        return 0;
    }

    tNo *no = *listanomes;

    while(no->proximo != NULL){
        no = no->proximo;
    }

    no->proximo = novonome;

    /*tNo *novonome = getNo(word);

    if(ListaVazia(listanomes)){
        printf("\n A lista esta vazia");
    }

    novonome->nome = word;

    if(listanomes == NULL){
        novonome->proximo = NULL;
        listanomes = novonome;
    } else {
        novonome->proximo = listanomes;
        listanomes = novonome;
    }*/

    printf("\n\n O novo nome foi adicionado");

}

void ImprimirLista(const tNo *listanomes){
    const tNo *no = listanomes;

    int i = 0;

    //while(no != NULL){
    //    printf("[%d] = %s \n", i, no->nome);
    //    no = no->proximo;

     //   i++;
    //}


    if(ListaVazia(listanomes)){
        printf("\n A lista esta vazia");
    }

    while(no != NULL){
        printf("[%d] = %s ", i, no->nome);
        no = no->proximo;
        i++;
    }
    //printf("[%d] = %s ", i, no->nome); // Ultimo elemento da lista apontando para NULL


}


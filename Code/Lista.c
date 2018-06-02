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

int InserirNovoNome(tNo **listanomes, tNomes w){
    tNo *novonome = CriarNovoNo(w);

    if(novonome == NULL){
        printf("\n Sem espaco para o nome");
        return 1;
    }

    if(ListaVazia(*listanomes)){
        novonome->proximo = NULL;
        listanomes = novonome;
    } else {
        novonome->proximo = listanomes;
        listanomes = novonome;
    }

    printf("\n\n O novo nome foi adicionado");

    return 0;

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
    } else {
        while(no != NULL){
            printf("[%d] = %s", i, no->nome);
            no = no->proximo;

            i++;
        }
    }


    //printf("[%d] = %s ", i, no->nome); // Ultimo elemento da lista apontando para NULL


}


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

void ExcluirNo(tNo *no){
    free(no);
}

void CriarLista(tNo **head){
    *head = NULL;
}

int ListaVazia(const tNo *head){
    return head == NULL;
}

void InserirNovoNome(tNomes **head, char word){
    /*if(novonome == NULL){
        printf("\n Sem memoria para o novo nome");
        return 1;
    }

    if(*head == NULL){
        *head =  novonome;
        return 0;
    }

    tNo *no = *head;

    while(no->proximo != NULL){
        no = no->proximo;
    }

    no->proximo = novonome;*/
    tNo *novonome = getNo(word);

    if(ListaVazia(head)){
        printf("\n A lista esta vazia");
    }

    novonome->nome = word;

    if(head == NULL){
        novonome->proximo = NULL;
        head = novonome;
    } else {
        novonome->proximo = head;
        head = novonome;
    }

    printf("\n\n O novo nome foi adicionado");

}

void ImprimirLista(const tNo *head){
    /*const tNo *no = head;

    int i = 0;

    while(no != NULL){
        printf("[%d] = %s \n", i, no->nome);
        no = no->proximo;

        i++;
    }*/

    int i = 0;

    if(ListaVazia(head)){
        printf("\n A lista esta vazia");
    } else {
        tNo *no = head;

        while(no->proximo != NULL){
            printf("[%d] = %s ", i, no->nome);
            no = no->proximo;
        }

        printf("[%d] = %s ", i, no->nome); // Ultimo elemento da lista apontando para NULL
    }

}


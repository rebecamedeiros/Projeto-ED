#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

void ApresentaMenu(){

    printf("\n\t    ****** Menu ******      "
           "\n\t 1 - Inserir novo nome"
           "\n\t 2 - Exibir lista"
           "\n\t 3 - Encerrar");

}

int main(){

    tNo novalista;

    CriarLista(&novalista);

    int op;

    char nomes;


    while(1){
        ApresentaMenu();

        printf("\n Escolha uma das opcoes: ");
        scanf("%d", &op);

        if(op == 3){
            break;
        }

        switch(op){
            case 1:
                // Inserir novo nome

                printf("\n Escreva o nome: ");
                scanf("%s", &nomes);

                InserirNovoNome(&novalista, nomes);
                break;
            case 2:
                // Exibir nomes
                break;
            default:
                printf("\n Escolha invalida");
                break;

        }


    }

    printf("\n Programa encerrado!");

    return 0;

}

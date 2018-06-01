#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

void ApresentaMenu(){

    printf("\n\t*********** MENU ***********"
           "\n\t 1 - INSERIR NOME"
           "\n\t 2 - EXIBIR NOME"
           "\n\t 3 - ORDENAR LISTA"
           "\n\t 4 - EXIBIR NOMES ORDENADOS"
           "\n\t 5 - ENCERRAR");
}

int main(){

    tNo *NovaLista = NULL;

    IniciaLista(&NovaLista);


    int op;

    char nomes[MAX_NOME];

    while(1){

        ApresentaMenu();

        printf("\n\t ESCOLHA UMA OPCAO: ");
        scanf("%d", &op);


        if(op == 5){
            break;
        }


        switch(op){
            case 1:
                //Inserir novo nome
                break;
            case 2:
                // Exibir nome
                break;
            case 3:
                // Ordenar a lista
                break;
            case 4:
                // Exibir os nomes ordenados
                break;
            default:
                printf("\n\t ESCOLHA INVALIDA. TENTE NOVAMENTE!");
                break;

        }

    }

    printf("\n\t PROGRAMA ENCERRADO");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

tNo *getNo(tNomes s){
    tNo *n;

    n = malloc(sizeof(tNo));

    if(n != NULL){
        n->nome = s;
        n->proximo = NULL;
    }

    return n;
}







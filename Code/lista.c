/*
 * lista.c
 *
 *  Created on: 20/05/2018
 *      Author: rebeca
 */

#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

// Criando um novo nó
tNo *getNo(tNomes a){

	tNo *novono;

	nn = malloc(sizeof(tNo));

	if(nn != NULL){
		novono->n = a;
		novono->proximo = NULL;
	}

	return novono;
}


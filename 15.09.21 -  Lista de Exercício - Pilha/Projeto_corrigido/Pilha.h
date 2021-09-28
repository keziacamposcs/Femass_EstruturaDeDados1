//Pilha.h

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Lista.h"

Lista* inicializa ();
void fimprimi (Lista* l);

/* --- */ 

Lista* push (Lista* l, int i);

Lista* pop (Lista* l);

Lista* top (Lista* l);

Lista* isempty (Lista* l);

void isempty_informe (Lista* l);

void size (Lista* l);

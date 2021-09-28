//pilha.h

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "lista.h"


Lista* inicializa ();
void fimprimi (Lista* l);

/* --- */ 

Lista* push (Lista* l, int i); //lista.h

Lista* pop (Lista* l); //lista.h

void top (Lista* l);

Lista* isempty (Lista* l);
void isempty_informe (Lista* l);

void size (Lista* l);




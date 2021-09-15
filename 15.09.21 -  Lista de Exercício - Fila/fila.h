//fila.h

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "lista.h"

Lista* inicializa ();
void fimprimi (Lista* l);

/* --- */

Lista* enqueue (Lista* l, int i );

Lista* dequeue (Lista* l);

void size (Lista* l);

bool isempty (Lista* l);

Lista* front (Lista* l);


//Funcao imprime recursiva
void imprime_rec(Lista* 1)
{
    if(vazia(l))
        return;
        
    //imprime primeiro elemento
    printf("info? %d\n", l->info);

    //imprime  sub-lista
    imprime_rec(l->prox);
}
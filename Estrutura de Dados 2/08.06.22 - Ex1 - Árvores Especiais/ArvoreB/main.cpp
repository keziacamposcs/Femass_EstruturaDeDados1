//Inclui todas as bibliotecas padrão
#include <bits/stdc++.h>

#define max 3
#define min 2

struct No
{
    int val[max + 1], contador;
    struct No *link[max + 1];
};

struct No *raiz;

// Criando No
struct No *criandoNo(int val, struct No *filho)
{
    struct No *newNo;
    newNo = (struct No *)malloc(sizeof(struct No));
    newNo->val[1] = val;
    newNo->contador = 1;
    newNo->link[0] = raiz;
    newNo->link[1] = filho;
    return newNo;
}

// Inserindo NO
void insereNo(int val, int pos, struct No *no, struct No *filho)
{
    int j = no->contador;
    while (j > pos) {
        no->val[j + 1] = no->val[j];
        no->link[j + 1] = no->link[j];
        j--;
    }
    no->val[j + 1] = val;
    no->link[j + 1] = filho;
    no->contador++;
}

// Divide No no
void divideNo(int val, int *pval, int pos, struct No *no, struct No *filho, struct No **newNo)
{
    int med, j;

    if (pos > min)
        med = min + 1;
    else
        med = min;

    *newNo = (struct No *)malloc(sizeof(struct No));
    j = med + 1;
    while (j <= max) {
        (*newNo)->val[j - med] = no->val[j];
        (*newNo)->link[j - med] = no->link[j];
        j++;
    }
    no->contador = med;
    (*newNo)->contador = max - med;

    if (pos <= min) {
        insereNo(val, pos, no, filho);
    } else {
        insereNo(val, pos - med, *newNo, filho);
    }
    *pval = no->val[no->contador];
    (*newNo)->link[0] = no->link[no->contador];
    no->contador--;
}

// Definindo o valor
int setvalor(int val, int *pval,
             struct No *no, struct No **filho) {
    int pos;
    if (!no) {
        *pval = val;
        *filho = NULL;
        return 1;
    }

    if (val < no->val[1]) {
        pos = 0;
    } else {
        for (pos = no->contador;
             (val < no->val[pos] && pos > 1); pos--)
            ;
        if (val == no->val[pos]) {
            printf("Duplicatas não são permitidas\n");
            return 0;
        }
    }
    if (setvalor(val, pval, no->link[pos], filho)) {
        if (no->contador < max) {
            insereNo(*pval, pos, no, *filho);
        } else {
            divideNo(*pval, pval, pos, no, *filho, filho);
            return 1;
        }
    }
    return 0;
}

// Inserindo o valor
void insere(int val) {
    int flag, i;
    struct No *filho;

    flag = setvalor(val, &i, raiz, &filho);
    if (flag)
        raiz = criandoNo(i, filho);
}

// Busca no
void busca(int val, int *pos, struct No *myNo) {
    if (!myNo) {
        return;
    }

    if (val < myNo->val[1]) {
        *pos = 0;
    } else {
        for (*pos = myNo->contador;
             (val < myNo->val[*pos] && *pos > 1); (*pos)--)
            ;
        if (val == myNo->val[*pos]) {
            printf("%d foi encontrado!", val);
            return;
        }
    }
    busca(val, pos, myNo->link[*pos]);

    return;
}

// Traversal do no
void traversal(struct No *myNo) {
    int i;
    if (myNo) {
        for (i = 0; i < myNo->contador; i++) {
            traversal(myNo->link[i]);
            printf("%d ", myNo->val[i + 1]);
        }
        traversal(myNo->link[i]);
    }
}

int main() {
    int val, ch;

    insere(8);
    insere(9);
    insere(10);
    insere(11);
    insere(15);
    insere(16);
    insere(17);
    insere(18);
    insere(20);
    insere(23);

    traversal(raiz);

    printf("\n");
    busca(11, &ch, raiz);
}
//Inclui todas as bibliotecas padrão
#include <bits/stdc++.h>

using namespace std;
int MAX = 3;

// BP No
class No {
    bool ehFolha;
    int *chave, tam;
    No **ptr;
    friend class Arvore;

public:
    No();
};

// BP tree
class Arvore {
    No *raiz;
    void insereInt(int, No *, No *);
    No *buscaPai(No *, No *);

public:
    Arvore();
    void busca(int);
    void insere(int);
    void imprime(No *);
    No *getRaiz();
};

No::No() {
    chave = new int[MAX];
    ptr = new No *[MAX + 1];
}

Arvore::Arvore() {
    raiz = NULL;
}

// Busca
void Arvore::busca(int x) {
    if (raiz == NULL) {
        cout << "Arvore esta vazia\n";
    } else {
        No *cursor = raiz;
        while (cursor->ehFolha == false) {
            for (int i = 0; i < cursor->tam; i++) {
                if (x < cursor->chave[i]) {
                    cursor = cursor->ptr[i];
                    break;
                }
                if (i == cursor->tam - 1) {
                    cursor = cursor->ptr[i + 1];
                    break;
                }
            }
        }
        for (int i = 0; i < cursor->tam; i++) {
            if (cursor->chave[i] == x) {
                cout << "Encontrado!\n";
                return;
            }
        }
        cout << "Nao Encontrado!\n";
    }
}

// Insere 
void Arvore::insere(int x) {
    if (raiz == NULL) {
        raiz = new No;
        raiz->chave[0] = x;
        raiz->ehFolha = true;
        raiz->tam = 1;
    } else {
        No *cursor = raiz;
        No *pai;
        while (cursor->ehFolha == false) {
            pai = cursor;
            for (int i = 0; i < cursor->tam; i++) {
                if (x < cursor->chave[i]) {
                    cursor = cursor->ptr[i];
                    break;
                }
                if (i == cursor->tam - 1) {
                    cursor = cursor->ptr[i + 1];
                    break;
                }
            }
        }
        if (cursor->tam < MAX) {
            int i = 0;
            while (x > cursor->chave[i] && i < cursor->tam)
                i++;
            for (int j = cursor->tam; j > i; j--) {
                cursor->chave[j] = cursor->chave[j - 1];
            }
            cursor->chave[i] = x;
            cursor->tam++;
            cursor->ptr[cursor->tam] = cursor->ptr[cursor->tam - 1];
            cursor->ptr[cursor->tam - 1] = NULL;
        } else {
            No *novaFolha = new No;
            int noVirtual[MAX + 1];
            for (int i = 0; i < MAX; i++) {
                noVirtual[i] = cursor->chave[i];
            }
            int i = 0, j;
            while (x > noVirtual[i] && i < MAX)
                i++;
            for (int j = MAX + 1; j > i; j--) {
                noVirtual[j] = noVirtual[j - 1];
            }
            noVirtual[i] = x;
            novaFolha->ehFolha = true;
            cursor->tam = (MAX + 1) / 2;
            novaFolha->tam = MAX + 1 - (MAX + 1) / 2;
            cursor->ptr[cursor->tam] = novaFolha;
            novaFolha->ptr[novaFolha->tam] = cursor->ptr[MAX];
            cursor->ptr[MAX] = NULL;
            for (i = 0; i < cursor->tam; i++) {
                cursor->chave[i] = noVirtual[i];
            }
            for (i = 0, j = cursor->tam; i < novaFolha->tam; i++, j++) {
                novaFolha->chave[i] = noVirtual[j];
            }
            if (cursor == raiz) {
                No *novaRaiz = new No;
                novaRaiz->chave[0] = novaFolha->chave[0];
                novaRaiz->ptr[0] = cursor;
                novaRaiz->ptr[1] = novaFolha;
                novaRaiz->ehFolha = false;
                novaRaiz->tam = 1;
                raiz = novaRaiz;
            } else {
                insereInt(novaFolha->chave[0], pai, novaFolha);
            }
        }
    }
}

// Insere Interno
void Arvore::insereInt(int x, No *cursor, No *filho) {
    if (cursor->tam < MAX) {
        int i = 0;
        while (x > cursor->chave[i] && i < cursor->tam)
            i++;
        for (int j = cursor->tam; j > i; j--) {
            cursor->chave[j] = cursor->chave[j - 1];
        }
        for (int j = cursor->tam + 1; j > i + 1; j--) {
            cursor->ptr[j] = cursor->ptr[j - 1];
        }
        cursor->chave[i] = x;
        cursor->tam++;
        cursor->ptr[i + 1] = filho;
    } else {
        No *novoInt = new No;
        int chaveVirtual[MAX + 1];
        No *virtualPtr[MAX + 2];
        for (int i = 0; i < MAX; i++) {
            chaveVirtual[i] = cursor->chave[i];
        }
        for (int i = 0; i < MAX + 1; i++) {
            virtualPtr[i] = cursor->ptr[i];
        }
        int i = 0, j;
        while (x > chaveVirtual[i] && i < MAX)
            i++;
        for (int j = MAX + 1; j > i; j--) {
            chaveVirtual[j] = chaveVirtual[j - 1];
        }
        chaveVirtual[i] = x;
        for (int j = MAX + 2; j > i + 1; j--) {
            virtualPtr[j] = virtualPtr[j - 1];
        }
        virtualPtr[i + 1] = filho;
        novoInt->ehFolha = false;
        cursor->tam = (MAX + 1) / 2;
        novoInt->tam = MAX - (MAX + 1) / 2;
        for (i = 0, j = cursor->tam + 1; i < novoInt->tam; i++, j++) {
            novoInt->chave[i] = chaveVirtual[j];
        }
        for (i = 0, j = cursor->tam + 1; i < novoInt->tam + 1; i++, j++) {
            novoInt->ptr[i] = virtualPtr[j];
        }
        if (cursor == raiz) {
            No *novaRaiz = new No;
            novaRaiz->chave[0] = cursor->chave[cursor->tam];
            novaRaiz->ptr[0] = cursor;
            novaRaiz->ptr[1] = novoInt;
            novaRaiz->ehFolha = false;
            novaRaiz->tam = 1;
            raiz = novaRaiz;
        } else {
            insereInt(cursor->chave[cursor->tam], buscaPai(raiz, cursor), novoInt);
        }
    }
}

// Busca pai
No *Arvore::buscaPai(No *cursor, No *filho) {
    No *pai;
    if (cursor->ehFolha || (cursor->ptr[0])->ehFolha) {
        return NULL;
    }
    for (int i = 0; i < cursor->tam + 1; i++) {
        if (cursor->ptr[i] == filho) {
            pai = cursor;
            return pai;
        } else {
            pai = buscaPai(cursor->ptr[i], filho);
            if (pai != NULL)
                return pai;
        }
    }
    return pai;
}

// Imprime
void Arvore::imprime(No *cursor) {
    if (cursor != NULL) {
        for (int i = 0; i < cursor->tam; i++) {
            cout << cursor->chave[i] << " ";
        }
        cout << "\n";
        if (cursor->ehFolha != true) {
            for (int i = 0; i < cursor->tam + 1; i++) {
                imprime(cursor->ptr[i]);
            }
        }
    }
}

// Get raiz
No *Arvore::getRaiz() {
    return raiz;
}

int main() {
    Arvore No;
    No.insere(5);
    No.insere(15);
    No.insere(25);
    No.insere(35);
    No.insere(45);
    No.insere(55);
    No.insere(40);
    No.insere(30);
    No.insere(20);
    No.imprime(No.getRaiz());

    No.busca(15);
}
//Inclui todas as bibliotecas padrão
#include <bits/stdc++.h>
using namespace std;

#define N 4

struct no
{

    // chave de N-1 nos
    int chave[N - 1];
    struct no* filho[N];
    // se for folha, ehFolha=1 senão ehFolha=0
    int ehFolha;
    //Contador das chaves usadas no no
    int n;
    struct no* pai;
};



struct no* busca(struct no* raiz, int k, struct no* pai, int x)
{
    if (raiz)
    {
        // Se a raiz passada for uma folha no, então
        // k pode ser inserido neste próprio no
        if (raiz->ehFolha == 1)
            return raiz;

            // Se a raiz passada não for uma folha no,
            // implica que há um ou mais filhos
        else
        {
            int i;

            // Se passada a chave inicial da raiz é ela mesma
            // mais distante do que o elemento a ser inserido,
            // precisamos inserir uma nova folha à esquerda da raiz
            if (k < raiz->chave[0])
                raiz = busca(raiz->filho[0], k, raiz, 0);

            else
            {

                // Encontra a primeira chave cujo valor é maior
                // que o valor de inserção
                // e insere no filho dessa chave
                for (i = 0; i < raiz->n; i++)
                    if (raiz->chave[i] > k)
                        raiz = busca(raiz->filho[i], k, raiz, i);

                // Se todas as chaves forem menores que a inserção
                // valor da chave, inserido à direita da última chave
                if (raiz->chave[i - 1] < k)
                    raiz = busca(raiz->filho[i], k, raiz, i);
            }
        }
    }
    else {

        // Se a raiz passada for NULL (não existe tal
        // filho não para pesquisar), então crie uma nova folha
        // no nesse local
        struct no* novoNo = new struct no;
        novoNo->ehFolha = 1;
        novoNo->n = 0;
        pai->filho[x] = novoNo;
        novoNo->pai = pai;
        return novoNo;
    }
}

struct no* insere(struct no* raiz, int k)
{
    if (raiz)
    {
        struct no* p = busca(raiz, k, NULL, 0);
        struct no* q = NULL;
        int e = k;

        // Se a folha não estiver vazia, simplesmente
        // adiciona o elemento e retorna
        for (int e = k; p; p = p->pai)
        {
            if (p->n == 0)
            {
                p->chave[0] = e;
                p->n = 1;
                return raiz;
            }

            // Se o número de chaves preenchidas for menor
            // que o máximo
            if (p->n < N - 1) {
                int i;
                for (i = 0; i < p->n; i++)
                {
                    if (p->chave[i] > e)
                    {
                        for (int j = p->n - 1; j >= i; j--)
                            p->chave[j + 1] = p->chave[j];
                        break;
                    }
                }
                p->chave[i] = e;
                p->n = p->n + 1;
                return raiz;
            }

            // Se o número de chaves preenchidas for igual ao máximo
            // e não é raiz e tem espaço no pai
            if (p->n == N - 1 && p->pai && p->pai->n < N)
            {
                int m;
                for (int i = 0; i < p->pai->n; i++)
                    if (p->pai->filho[i] == p)
                    {
                        m = i;
                        break;
                    }
                // Se o irmão direito é possível
                if (m + 1 <= N - 1)
                {
                    //q é o irmão certo
                    q = p->pai->filho[m + 1];

                    if (q)
                    {
                        // Se o irmão direito estiver cheio
                        if (q->n == N - 1)
                        {
                            struct no* r = new struct no;
                            int* z = new int[((2 * N) / 3)];
                            int pai1, pai2;
                            int* marray = new int[2 * N];
                            int i;
                            for (i = 0; i < p->n; i++)
                                marray[i] = p->chave[i];
                            int fege = i;
                            marray[i] = e;
                            marray[i + 1] = p->pai->chave[m];
                            for (int j = i + 2; j < ((i + 2) + (q->n)); j++)
                                marray[j] = q->chave[j - (i + 2)];
                            // marray=bubblesort(marray, 2*N)
                            // uma implementação mais rigorosa
                            // ordena esses elementos

                            // Coloca primeiro (2*N-2)/3 elementos nas chaves de p
                            for (int i = 0; i < (2 * N - 2) / 3; i++)
                                p->chave[i] = marray[i];
                            pai1 = marray[(2 * N - 2) / 3];

                            // Coloca os próximos (2*N-1)/3 elementos nas chaves de q
                            for (int j = ((2 * N - 2) / 3) + 1; j < (4 * N) / 3; j++)
                                q->chave[j - ((2 * N - 2) / 3 + 1)] = marray[j];
                            pai2 = marray[(4 * N) / 3];

                            // Coloca os últimos (2*N)/3 elementos nas chaves de r
                            for (int f = ((4 * N) / 3 + 1); f < 2 * N; f++)
                                r->chave[f - ((4 * N) / 3 + 1)] = marray[f];

                            // Como m=0 e m=1 são filhos da mesma chave,
                            // um caso especial é feito para eles
                            if (m == 0 || m == 1) {
                                p->pai->chave[0] = pai1;
                                p->pai->chave[1] = pai2;
                                p->pai->filho[0] = p;
                                p->pai->filho[1] = q;
                                p->pai->filho[2] = r;
                                return raiz;
                            }

                            else {
                                p->pai->chave[m - 1] = pai1;
                                p->pai->chave[m] = pai2;
                                p->pai->filho[m - 1] = p;
                                p->pai->filho[m] = q;
                                p->pai->filho[m + 1] = r;
                                return raiz;
                            }
                        }
                    }

                        // Se o irmão direito não estiver cheio
                    else
                    {
                        int put;
                        if (m == 0 || m == 1)
                            put = p->pai->chave[0];
                        else
                            put = p->pai->chave[m - 1];
                        for (int j = (q->n) - 1; j >= 1; j--)
                            q->chave[j + 1] = q->chave[j];
                        q->chave[0] = put;
                        p->pai->chave[m == 0 ? m : m - 1] = p->chave[p->n - 1];
                    }
                }
            }
        }
    }
    else
    {
        // Cria um novo no se raiz for NULL
        struct no* raiz = new struct no;
        raiz->chave[0] = k;
        raiz->ehFolha = 1;
        raiz->n = 1;
        raiz->pai = NULL;
    }
}

int main()
{
    // Começa com uma raiz vazia
    struct no* raiz = NULL;
    // insere 6
    raiz = insere(raiz, 6);

    // insere 1, 2, 4 à esquerda de 6
    raiz->filho[0] = insere(raiz->filho[0], 1);
    raiz->filho[0] = insere(raiz->filho[0], 2);
    raiz->filho[0] = insere(raiz->filho[0], 4);
    raiz->filho[0]->pai = raiz;

    // insere 7, 8, 9 à direita de 6
    raiz->filho[1] = insere(raiz->filho[1], 7);
    raiz->filho[1] = insere(raiz->filho[1], 8);
    raiz->filho[1] = insere(raiz->filho[1], 9);
    raiz->filho[1]->pai = raiz;

    cout << "Arvore original: " << endl;
    for (int i = 0; i < raiz->n; i++)
        cout << raiz->chave[i] << " ";
    cout << endl;
    for (int i = 0; i < 2; i++) {
        cout << raiz->filho[i]->chave[0] << " ";
        cout << raiz->filho[i]->chave[1] << " ";
        cout << raiz->filho[i]->chave[2] << " ";
    }
    cout << endl;


    cout << "Depois de adicionar 5: " << endl;

    raiz->filho[0] = insere(raiz->filho[0], 5);

    // Imprimindo os nos
    for (int i = 0; i <= raiz->n; i++)
        cout << raiz->chave[i] << " ";
    cout << endl;
    for (int i = 0; i < N - 1; i++)
    {
        cout << raiz->filho[i]->chave[0] << " ";
        cout << raiz->filho[i]->chave[1] << " ";
    }

    return 0;
}

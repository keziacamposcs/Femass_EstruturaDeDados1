#include<iostream>

#define LEN 50

struct endereco {
  char rua[LEN];
  char cidade_estado_cep[LEN];
};

void obtem_endereco(struct endereco *pender)
{
   printf("Entre rua: ");
   gets(pender->rua); //função para leitura
   printf("Entre cidade/estado/cep: ");
   gets(pender->cidade_estado_cep);
}

void imprime_endereco(struct endereco ender)
{
   printf("%s\n", ender.rua);
   printf("%s\n", ender.cidade_estado_cep);
}

int main( ){
   struct endereco residencia;

   printf("Entre seu endereco residencial:\n");
   obtem_endereco(&residencia);

   printf("\nSeu endereco:\n");
   imprime_endereco(residencia);
   return 0;
}

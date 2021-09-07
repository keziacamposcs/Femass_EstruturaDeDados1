//EDI - prof. Irineu
//Leitura: http://linguagemc.com.br/passando-um-vetor-para-funcao-em-c/
//Uso de vetor, ponteiros e passagem de vetor para fun��o

#include <stdio.h>
#include <stdlib.h>
 
float media (int n, float vnotas[]) //passagem do vetor por valor (c�pia)!
{
  int i;
  float m = 0, soma = 0;
   
  //fazendo a somat�ria das notas
  for (i = 0; i < n; i++)
    soma = soma + vnotas[i];    
   
  //dividindo pela quantidade de elementos n
  m = soma / n;
   
  //retornando a m�dia
  return m;
}
 
int main (){

  float vnotas[10];
  float media_notas;
  int i;
 
  /* leitura das notas */
  for (i = 0; i < 10; i++)
  {
    printf("Digite os valores das notas: ");
    scanf("%f", &vnotas[i]);
  }
   
  //chamada da fun��o
  media_notas = media(10,vnotas);  
   
  printf ( "\nMedia = %.1f \n", media_notas );
   
  system("pause");
  return 0;
}
 


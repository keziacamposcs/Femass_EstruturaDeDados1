#include <iostream>
#include <stdio.h>
using namespace std;
int main ( ) {

FILE *arq; //declaração do arquivo
char ch;

	if ((arq = fopen("teste.txt","r")) == NULL) {
		cout << "Erro na abertura do arquivo\n"; 
		return -1;
	}
	ch = getc(arq); //lê o 1o caractere do arquivo
	while (ch != EOF) { //varre o arquivo
		putchar(ch); //imprime na tela o caractere lido
		ch = getc(arq); //lê o próximo caractere
	}
	fclose (arq); //fecha o arquivo
	
	return 0;
}

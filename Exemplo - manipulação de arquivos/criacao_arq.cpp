#include <iostream> 
#include <stdio.h>
#include <string.h> 
using namespace std;
int main () {
	FILE *arq;
	char titulo[31]; 
	int codlivro;
 	float preco;
	if ((arq = fopen("teste.txt","w")) == NULL) { //inst�ncia para cria��o e manipula��o de arquivo
		cout << "Erro na cria��o do arquivo\n"; 
		return -1;
	}
	
	do {
		cout << "Titulo: "; 
		cin.clear(); fflush(stdin); //evitar lixo antes de leitura
		cin.getline(titulo, 30);
		if (strlen(titulo) > 1) {
			cout << "C�digo: "; 
			cin >> codlivro;
			cout << "Preco: "; 
			cin >> preco;
			fprintf (arq, "%-30s %-4d %.2f\n",titulo, codlivro, preco); //escrevendo em arquivo com formato pertinente
		}
	} while (strlen(titulo) > 1);
	fclose(arq); 
	system("pause");
	return 0;
}

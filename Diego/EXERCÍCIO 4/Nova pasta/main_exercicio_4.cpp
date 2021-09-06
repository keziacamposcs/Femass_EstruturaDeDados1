#include <locale> //Habilitar padões de caractere de teclado Ptb
#include <conio.h>
#include "maquina_de_escrever.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int num_elementos = 0;
	char *texto;
	char c;
	do{
		c = getch();
		
		printf("oi0");
		
		texto = cadastrar_novo_caractere(texto, &num_elementos, c);
		
		printf("%d\n", c);
		
		
	}while (c != 27);  //27 é a representação do "ESC" na tabela ASCII
	mostrar_texto(texto, num_elementos);
	
	
	free(texto);
	system("PAUSE");
	return 0;
}

#include <iostream>
#include <locale> //Habilitar padões de caractere de teclado Ptb
#include <conio.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	char c;
	do{
		cout << "Digite tecla: ";
		c = getch();
		printf("\nCaractere %c | Dec. ASCII: %d\n", c, c);
	}while (c != 27);  //27 é a representação do "ESC" na tabela ASCII
	cout << "Fim  de  programa,  tecla  ESC  foi  pressionada!\n";
	return 0;
}

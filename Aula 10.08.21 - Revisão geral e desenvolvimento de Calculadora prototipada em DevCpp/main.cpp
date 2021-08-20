#include <iostream>
#include<locale>
#include "Calculadora.h"

using namespace std;

//Menu das op��es
void menu(){
	cout << "Escolha op��o:\n";
	cout << "1 - Soma" << endl;
	cout << "2 - Subtra��o" << endl;
	cout << "3 - Multiplica��o" << endl;
	cout << "4 - Divis�o" << endl;
	cout << "Qualquer outra para sair.\n";
	cout << "Op��o: ";
}
//Fim menu

float ler_numero(int i)
{
	cout << "Informe N" << i <<":";
	float tmp;
	cin >> tmp;
	return tmp;
}

void mostra_resultado(float res){
	cout << "Resultado:" << res << endl;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int op(1);
	float n1, n2;
	do
	{
		menu();
		cin>>op;
		float tmp;
		
		switch(op){
			
			//Adicao
			case 1:
				n1 = ler_numero(1);
				n2 = ler_numero(2);
				tmp = soma(n1, n2);
				mostra_resultado(tmp)
				break;
			
			//Subtracao
			case 2:
				n1 = ler_numero(1);
				n2 = ler_numero(2);
				tmp = soma(n1, n2);
				mostra_resultado(tmp)
				break;

			//Multiplicacao
			case 3:
				n1 = ler_numero(1);
				n2 = ler_numero(2);
				tmp = soma(n1, n2);
				mostra_resultado(tmp)
				break;			
			//Divisao
			case 4:
				n1 = ler_numero(1);
				n2 = ler_numero(2);
				tmp = soma(n1, n2);
				mostra_resultado(tmp)
				break;
				
			default: cout <<"Op��o inv�lida e fim de programa\n";
		}
	}while(op >=1 && op<=4);
	
	cout << "Fim de programa\n";
	system("pause");
		
	return 0;
}

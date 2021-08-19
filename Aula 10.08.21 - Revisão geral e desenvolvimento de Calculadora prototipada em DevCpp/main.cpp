#include <iostream>
#include<locale>
using namespace std;


//Menu das opções
void menu(){
	cout << "Escolha opção:\n";
	cout << "1 - Soma" << endl;
	cout << "2 - Subtração" << endl;
	cout << "3 - Multiplicação" << endl;
	cout << "4 - Divisão" << endl;
	cout << "Qualquer outra para sair.\n";
	cout << "Opção: ";
}
//Fim menu

float ler_numero(int i)
{
	cout << "Informe N" << i <<":";
	float tmp;
	cin >> tmp;
	return tmp;
}

int main(int argc, char** argv) {
	
	int op(1);
	float n1, n2;
	do
	{
		menu();
		cin>>op;
		
		switch(op){
			
			//Adição
			case 1:
				n1 = ler_numero(1);
				n2 = ler_numero(2);
				break;
			
			//Subtração
			case 2:
				n1 = ler_numero(1);
				n2 = ler_numero(2);
			//Multiplicação
			case 3:
				n1 = ler_numero(1);
				n2 = ler_numero(2);
			
			//Divisão
			case 4:
				n1 = ler_numero(1);
				n2 = ler_numero(2);
				
			default: cout <<"Opção inválida e fim de programa\n";
		}
	}while(op >=1 && op<=4);
	
	cout << "Fim de programa\n";
	system("pause");
		
	return 0;
}

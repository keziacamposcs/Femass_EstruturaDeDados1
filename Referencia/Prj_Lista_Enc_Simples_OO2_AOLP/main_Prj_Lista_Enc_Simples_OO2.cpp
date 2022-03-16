#include "Lista.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*> Nas aulas e com a leitura do material "Cap. 10", iniciamos a implementação de uma biblioteca prototipada OO (2) em um projeto com "main" com métodos básicos. Logo, faça:


Adicione os métodos: busca(int i), retira(int i), insere_fim(int i), retira_inicio(), retira_fim(), imprime_inicio(), imprime_fim().
Crie melhorias para a interface com o usuário, exibindo um menu para escolha do uso entre todos os métodos públicos disponíveis na biblioteca Lista.
Atenção: esta tarefa é idêntica à anterior (no_dado definido por struct), porém com uso da biblioteca com classe no_dado.

Obs.: Enviar arquivo ZIP da pasta de projeto DevCpp com Makefile, excluindo .exe e .o (conforme as regras combinadas).
*/

void menu(){

	cout <<"PROGRAMA LISTA ENCADEADA SIMPLES Modificado por Ariel Pichone"<< endl;
	cout << "\nEscolha uma opção:\n";
	cout << "1-	Inicializa_Lista" << endl;
	cout << "2-	Remove _Lista" << endl;
	cout << "3-	Insere_Inicio" << endl;
	cout << "4-	Insere_Fim" << endl;
	cout << "5-	Imprime" << endl;
	cout << "6-	Imprime Inicio" << endl;
	cout << "7-	Imprime Fim" << endl;		
	cout << "8-	Vazia" << endl;
	cout << "9-	Libera" << endl;
	cout << "10-	Tamanho" << endl;
	cout << "11-	Busca Elemento na Lista" << endl;
	cout << "12-	Retira Elemento da Lista" << endl;
	cout << "13-	Retira Elemento do inicio da Lista" << endl;
	cout << "14-	Retira Elemento do fim da Lista" << endl;
	cout << "0-	Sair.\n";
	cout << "Opção: ";
}

float ler_numero(int i){
	cout << "Informe N" << i <<": ";
	float tmp;
	cin >> tmp;
	return tmp;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	Lista l; //instanciando objeto l conforme a classe Lista

int op(1);
	float n1;
	do{
		menu();
		cin >> op;
		switch(op){
			case 1: //inicializa lista vazia				
					Lista();
					cout << "Lista inicializada." <<endl;
					system("pause");
					system("cls");
					break;
			case 2: //destrutor
					l.~Lista();
					cout << "Lista removida." <<endl;
					system("pause");
					system("cls");
					break;
			case 3: //Insere Inicio
					n1 = ler_numero(1);
					l.insere_inicio(n1);
					system("pause");
					system("cls");
					break;
			case 4: //Insere Fim
					n1 = ler_numero(1);
					l.insere_fim(n1);
					system("pause");
					system("cls");
					break;					
			case 5: //Imprime
					l.imprime();
					system("pause");
					system("cls");
					break;
			case 6: //Imprime Inicio
					l.imprime_inicio();
					system("pause");
					system("cls");
					break;
			case 7: //Imprime Fim
					l.imprime_fim();
					system("pause");
					system("cls");
					break;										
			case 8: //Vazia
					l.vazia();
					system("pause");
					system("cls");
					break;
			case 9: //Libera
					l.libera();
					system("pause");
					system("cls");
					break;
			case 10: //Tamanho
					l.tamanho();
					system("pause");
					system("cls");
					break;
			case 11: //Busca
					n1 = ler_numero(1);
					if (l.busca(n1) == 0){
						cout <<"Elemento " << n1 << " não encontrado na lista." << endl;
					}else{
						cout <<"Elemento " << n1 << " encontrado na lista." << endl;
					}
					system("pause");
					system("cls");
					break;
			case 12: //Retira
					n1 = ler_numero(1);
					if (l.retira(n1)==1){
						cout << "Elemento " << n1 << " removido da Lista." <<endl;
					} else{
						cout << "Elemento " << n1 << " não encontrado na Lista" <<endl;
					}
					system("pause");
					system("cls");
					break;
			case 13: //Retira Inicio
					l.retira_inicio();
					system("pause");
					system("cls");
					break;
			case 14: //Retira Fim
					l.retira_fim();
					system("pause");
					system("cls");
					break;																											
			default: cout << "\nOp??o inv?lida e fim de programa!\n";	//3- apresentar resultado / melhoria no front-end	
		}
	}while(op>=1 && op<=14);
		
	cout << "Fim de programa!\n";
	system("pause");
	return 0;
}

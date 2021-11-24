/*
A Pesquisa Binaria funciona procurando na 
metade o valor pesquisado e so termina quando
 o valor eh encontrado.
*/

/*
Eh aplicado a formula:
(posicao do vetor inicial + posicao do vetor final) / 2
*/

int PesquisaBinaria (int x, int tamanho, int v[])
{
	//	x = numero pesquisado
	int inicio;
	int meio;
	int fim;
	
	if (inicio<=fim)
	{
		meio = (inicio+fim)/2;
		
		if(v[meio] == x)
		{
			/*
			Se na primeira interacao, na posicao 
			o meio ja for encontrado o numero pesquisado
			o programa encerra
			*/
			return meio;
		}
		//Se nao...
		if(v[meio] < x) // Se o numero na posicao do meio for menor que o valor procurado
		{
			
			meio = meio + 1;
			
			//Reliza a pesquisa do meio para o fim da lista de vetores
			return PesquisaBinaria(x,meio, fim, v);
		}
		else
			meio = meio - 1;
			
			//Senao realiza a pesquisa, do meio para o inicio da lista de vetores
			return PesquisaBinaria(x, inicio, meio, v);
			
	}
	else
		return -1;

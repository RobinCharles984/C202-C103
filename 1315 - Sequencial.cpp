#include <iostream>
using namespace std;

//Fun��o para encontrar a sequencial
int sequencial(int vet[], int tam, int x)
{
	int result;
	
	for(int i = 0; i < tam; i++)
	{
		//Se a busca for encontrada...
		if(vet[i] == x)
			result = vet[i];
		
		//Se n�o...	
		else
			result = -1;
	}
	
	return result;
}

//Fun��o Principal
int main(int argc, char** argv)
{
	//Vari�veis
	int vetor[100];
	int n;
	int busca;
	int resultado;
	
	//Entrando com os valores do vetor
	n = 0;
	cin >> vetor[0];
	do
	{
		n++;
		cin >> vetor[n];
	}while(vetor[n] != -1);
	
	//Procurando o valor no vetor
	cin >> busca;
	
	//Chamando a Fun��o Sequencial
	resultado = sequencial(vetor, n, busca);
	
	//Sa�da de Dados
	if(resultado != -1)
		cout << resultado << " encontrado na posicao " << n << endl;
	
	else
		cout << busca << " nao encontrado" << endl;
		   	
	
	return 0;
}
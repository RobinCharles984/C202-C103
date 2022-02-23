#include <iostream>

using namespace std;

//Fun��o Insertion
void insercaoDireta(int vetor[], int tamanho)
{
	int i, j; // contadores
	int chave;
	for (j = 1; j < tamanho; j++)
	{
		chave = vetor[j];
		i = j - 1;
		while ((i >= 0) && (vetor[i] < chave))
		{
			vetor[i + 1] = vetor[i];
			i = i - 1;
		}
		vetor[i + 1] = chave;
	}
}

//Fun��o Principal
int main(int argc, char** argv)
{
	//Vari�veis
	int vet[100];
	int n = 0;
	
	//Entrando com Valores
	cin >> vet[n];
	while(vet[n] != 0)
	{
		n++;
		cin >> vet[n];
	}
	
	//Chamando Fun��o Insertion
	insercaoDireta(vet, n);
	
	//Sa�da de Dados
	for(int i = 0; i < n; i++)
	{
		cout << vet[i] << " ";
	}
	cout << endl;
	
	return 0;
}

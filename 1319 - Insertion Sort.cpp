#include <iostream>

using namespace std;

//Função Insertion
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

//Função Principal
int main(int argc, char** argv)
{
	//Variáveis
	int vet[100];
	int n = 0;
	
	//Entrando com Valores
	cin >> vet[n];
	while(vet[n] != 0)
	{
		n++;
		cin >> vet[n];
	}
	
	//Chamando Função Insertion
	insercaoDireta(vet, n);
	
	//Saída de Dados
	for(int i = 0; i < n; i++)
	{
		cout << vet[i] << " ";
	}
	cout << endl;
	
	return 0;
}

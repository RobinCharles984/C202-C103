#include <iostream>

using namespace std;

//Fun��o Bubble
void bubbleSort(int vetor[], int tamanho)
{
	int i, j; // contadores
	int trab;
	bool troca;
	int limite;
	troca = true;
	limite = tamanho - 1;
	while (troca)
	{
		troca = false;
		for (i = 0; i < limite; i++)
			if (vetor[i] > vetor[i + 1])
			{
				trab = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = trab;
				j = i;
				troca = true;
			}
		limite = j;
	}
}

//Fun��o Principal
int main(int argc, char** argv)
{
	//Vari�veis
	int vet[100];
	int n = 0;
	
	//Entrando com valores
	cin >> vet[n];
	while(vet[n] != 0)
	{
		n++;
		cin >> vet[n];
	}
	
	//Chamando Fun��o Bubble
	bubbleSort(vet, n);
	
	//Sa�da de Dados
	for(int i = 0; i < n; i++)
	{
		cout << vet[i] << " ";
	}
	cout << endl;
	
	return 0;
}

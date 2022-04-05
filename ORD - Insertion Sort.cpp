#include <iostream>

using namespace std;

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
	int tamanho = 0;//Contador
	int vetor[100];//Vetor
	int flag;
	
	//Entrando com valores no vetor
	cin >> flag;
	while(flag != 0)
	{
		vetor[tamanho] = flag;
		tamanho++;
		cin >> flag;
	}
	
	//Chamando a fun��o
	insercaoDireta(vetor, tamanho);
	
	//Sa�da de Dados
	for(int i = 0; i < tamanho; i++)
	{
		cout << vetor[i] << " ";
	}
	
	return 0;
}

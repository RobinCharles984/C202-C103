#include <iostream>

using namespace std;

void bubbleSort(int vetor[], int tamanho, int trocaCont)
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
				cout << "New trab: " << trab << endl;
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = trab;
				j = i;
				troca = true;
				if(troca == true)
					trocaCont++;
			}
		limite = j;
	}
	cout << "Contador: " << trocaCont << endl;
}

//Função Principal
int main(int argc, char** argv)
{
	//Variáveis
	int tamanho;//Contador
	int vetor[100];//Vetor
	int trocaCont = 0;

	//Entrando com valores no vetor
	cin >> tamanho;
	
	for(int i = 0; i < tamanho; i++)
	{
		cin >> vetor[i];
	}

	//Chamando a função
	bubbleSort(vetor, tamanho, trocaCont);

	return 0;
}

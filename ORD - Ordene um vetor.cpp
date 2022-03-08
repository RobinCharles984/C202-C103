#include <iostream>
#include <cmath>

using namespace std;

//Função QuickSort
void quickSort(int vetor[], int tamanho, int i, int j)
{
	int trab, esq, dir, pivo;
	esq = i;
	dir = j;
	pivo = vetor[(int)round((esq + dir) / 2.0)];
	do
	{
		while (vetor[esq] < pivo)
			esq++;
		while (vetor[dir] > pivo)
			dir--;
		if (esq <= dir)
		{
			trab = vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = trab;
			esq++;
			dir--;
		}
	}
	while (esq <= dir);
	if (dir - i >= 0)
		quickSort(vetor, tamanho, i, dir);
	if (j - esq >= 0)
		quickSort(vetor, tamanho, esq, j);
}

//Função Main
int main(int argc, char** argv)
{
	//Variáveis
	int vet[20];
	int flag;
	int tam = 0;
	int esq, dir;
	
	//Colocando valores no vetor
	cin >> flag;
	esq = tam;
	while(flag != -1)
	{
		vet[tam] = flag;
		tam++;
		dir = tam;
		cin >> flag;
	}
	
	//Mandando valores para a função
	quickSort(vet, tam, esq, dir);
	
	//Imprimindo valores
	for(int i = 0; i < tam; i++)
	{
		cout << vet[i] << " ";
	}
	
	return 0;
}

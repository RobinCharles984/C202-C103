#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Struct
struct dados
{
    int codigo; // codigo do produto
    int quantidade; // quantidade em estoque
    float preco; // preco unitario
};

//Função Quick
void quickSort(dados vetor[], int tamanho, int i, int j)
{
	int esq, dir, pivo;
	dados trab;
	esq = i;
	dir = j;
	pivo = vetor[(int)round((esq + dir) / 2.0)].codigo;
	do
	{
		while (vetor[esq].codigo < pivo)
			esq++;
		while (vetor[dir].codigo > pivo)
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

//Função Principal
int main(int argc, char** argv)
{
	//Variáveis
	int i, j;
	int n;
	dados dados[100];
	
	//Entrada de Dados
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> dados[i].codigo;
		cin >> dados[i].quantidade;
		cin >> dados[i].preco;
	}
	
	//Enviando para Função Quick
	quickSort(dados, n, 0, n - 1);
	
	//Saída de Dados
	for(int i = 0; i < n; i++)
	{
		cout << "Codigo: " << dados[i].codigo << endl;
		cout << "Quantidade em estoque: " << dados[i].quantidade << endl;
		cout << fixed << setprecision(2) << "Preco unitario: " << dados[i].preco << endl;
		cout << endl;
	}
	return 0;
}

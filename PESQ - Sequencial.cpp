#include <iostream>

using namespace std;

int sequencial(int vetor[], int tamanho, int x)
{
	bool achou = false; // var aux p/ busca
	int i = 0; // contador
	while (achou == false && i < tamanho)
		achou = vetor[i++] == x;
	if (achou)
		return (i - 1);
	else
		return -1;
}

int main(int argc, char** argv)
{
	//Vari�veis
	int x;
	int vetor[10];
	int tamanho = 0;
	int funcao;

	//Entrando com valores no vetor
	cin >> vetor[tamanho];
	do
	{
		tamanho++;
		cin >> vetor[tamanho];
	}
	while(vetor[tamanho] != -1);
	//Entrando o numero a ser encontrado
	cin >> x;

	//Enviando para fun��o
	funcao = sequencial(vetor, tamanho, x);

	//Sa�da de dados
	if(funcao == -1)//Caso retorne -1
	{
		cout << x << " nao encontrado" << endl;
	}
	else //Caso contr�rio
	{
		cout << x << " encontrado na posicao " << funcao << endl;
	}
	return 0;
}

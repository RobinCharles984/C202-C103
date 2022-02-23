#include <iostream>

using namespace std;

int binaria(int vetor[], int tamanho, int x)
{
	bool achou; // var aux p/ busca
	int baixo, meio, alto; // var aux
	baixo = 0;
	alto = tamanho - 1;
	achou = false;
	while ((baixo <= alto) && (achou == false))
	{
		meio = (baixo + alto) / 2;
		if (x < vetor[meio])
			alto = meio - 1;
		else if (x > vetor[meio])
			baixo = meio + 1;
		else
			achou = true;
	}
	if (achou)
		return meio;
	else
		return -1;
}

int main(int argc, char** argv)
{
	//Variáveis
	int x;
	int vetor[10];
	int tamanho = 1;
	int funcao;
	
	//Entrando com valores no vetor
	cin >> vetor[tamanho];
	do
	{
		tamanho++;
		cin >> vetor[tamanho];
	}while(vetor[tamanho] != -1);
	//Entrando o numero a ser encontrado
	cin >> x;
	
	//Enviando para função
	funcao = binaria(vetor, tamanho, x);
	
	//Saída de dados
	if(funcao == -1)//Caso retorne -1
	{
		cout << "Nao possui acesso" << endl;
	}
	else //Caso contrário
	{
		cout << "Possui acesso" << endl;
	}
	return 0;
}
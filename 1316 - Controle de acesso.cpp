#include <iostream>

using namespace std;

//Função para encontrar elemento
int binaria(int vetor[],int tamanho, int x)
{		
	for(int i = 0; i < tamanho; i++)
	{
		//Se encontrar o número...
		if(vetor[i] != x)
			return -1; 
		
		else
			return 1;
	}
}

int main(int argc, char** argv)
{
	//Variáveis
	int vet[100];
	int n;
	int search;
	int resultado;
	
	//Entrando com Valores da ID
	n = 0;
	cin >> vet[n];
	
	while(vet[n] != -1)
	{
		n++;
		cin >> vet[n];
	}
	
	//Procurador do numero específico
	cin >> search;
	
	//Chamando a função binaria
	resultado = binaria(vet, n, search);
	
	//Saída de Dados
	if(resultado == -1)//Caso retorne -1...
		cout << "Nao possui acesso" << endl;
	
	else//Caso contrário...
		cout << "Possui acesso" << endl;
	
	return 0;
}
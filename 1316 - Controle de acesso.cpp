#include <iostream>

using namespace std;

//Fun��o para encontrar elemento
int binaria(int vetor[],int tamanho, int x)
{		
	for(int i = 0; i < tamanho; i++)
	{
		//Se encontrar o n�mero...
		if(vetor[i] != x)
			return -1; 
		
		else
			return 1;
	}
}

int main(int argc, char** argv)
{
	//Vari�veis
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
	
	//Procurador do numero espec�fico
	cin >> search;
	
	//Chamando a fun��o binaria
	resultado = binaria(vet, n, search);
	
	//Sa�da de Dados
	if(resultado == -1)//Caso retorne -1...
		cout << "Nao possui acesso" << endl;
	
	else//Caso contr�rio...
		cout << "Possui acesso" << endl;
	
	return 0;
}
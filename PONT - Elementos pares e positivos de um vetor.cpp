#include <iostream>

using namespace std;

//Fun��o Principal
int main(int argc, char** argv)
{
	int n;//Tamanho do vetor
	int *p;//Ponteiro
	int flag = 0;//Contador para positivos e pares
	int v[20];
	
	cin >> n;//Declarando o tamanho do vetor
	
	p = new int [n];//Alocando mem�ria
	
	//Entrando com os valores
	for(int i = 0; i < n; i++)
	{
		cin >> p[i];
		if(p[i] % 2 == 0 && p[i] > 0)
			flag++;
	}
	
	//Sa�da de dados
	cout << flag << endl;
	
	delete [] p;//Deletando vetor
	
	return 0;
}
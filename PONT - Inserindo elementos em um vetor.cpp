#include <iostream>

using namespace std;

//Fun��o Principal
int main(int argc, char** argv)
{
	int n;//Tamanho do vetor
	int *p;//Ponteiro
	
	cin >> n;//Declarando o tamanho do vetor
	
	p = new int [n];//Alocando mem�ria
	
	//Entrando com os valores
	for(int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	
	
	//Sa�da de dados
	for(int i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
	
	cout << endl;
	
	delete [] p;//Deletando vetor
	
	return 0;
}
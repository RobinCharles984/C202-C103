#include <iostream>

using namespace std;

//Função Principal
int main(int argc, char** argv)
{
	int n;//Tamanho do vetor
	int *p;//Ponteiro
	
	cin >> n;//Declarando o tamanho do vetor
	
	p = new int [n];//Alocando memória
	
	//Entrando com os valores
	for(int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	
	
	//Saída de dados
	for(int i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
	
	cout << endl;
	
	delete [] p;//Deletando vetor
	
	return 0;
}
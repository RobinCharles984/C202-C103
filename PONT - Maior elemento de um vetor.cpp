#include <iostream>

using namespace std;

//Fun��o Principal
int main(int argc, char** argv)
{
	int n;//Tamanho do vetor
	float *p;//Ponteiro
	float maior = 0;
	
	cin >> n;//Declarando o tamanho do vetor
	
	p = new float [n];//Alocando mem�ria
	
	//Entrando com os valores
	for(int i = 0; i < n; i++)
	{
		cin >> p[i];
		if(i == 0)
			maior = p[i];
		if(p[i] > p[i-1])
			maior = p[i];
	}
	
	//Sa�da de dados
	cout << maior << endl;
	
	cout << endl;
	
	delete [] p;//Deletando vetor
	
	return 0;
}
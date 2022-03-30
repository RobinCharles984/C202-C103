#include <iostream>
#include <iomanip>

using namespace std;

//Fun��o Principal
int main(int argc, char** argv)
{
	int n;//Tamanho do vetor
	float *p;//Ponteiro
	float media = 0;
	
	cin >> n;//Declarando o tamanho do vetor
	
	p = new float [n];//Alocando mem�ria
	
	//Entrando com os valores
	for(int i = 0; i < n; i++)
	{
		cin >> p[i];
		media += p[i];
	}
	
	//Sa�da de dados
	cout << fixed << setprecision(2);
	cout << media/n << endl;
	
	cout << endl;
	
	delete [] p;//Deletando vetor
	
	return 0;
}
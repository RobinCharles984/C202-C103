#include <iostream>
using namespace std;

//Fun��o Potencia
int pot(int a, int n)
{
	if(n == 0)
		return 1;

	else
	{
		return a * pot(a, n - 1);
	}

}

//Fun��o Principal
int main(int argc, char** argv)
{
	//Vari�veis
	int a, n;
	int result;

	//Entrada de Dados
	cin >> a >> n;
	
	//Chamando a Fun��o
	result = pot(a, n);

	//Sa�da de Dados
	cout << result << endl;

	return 0;
}
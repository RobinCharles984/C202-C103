#include <iostream>
using namespace std;

//Função Potencia
int pot(int a, int n)
{
	if(n == 0)
		return 1;

	else
	{
		return a * pot(a, n - 1);
	}

}

//Função Principal
int main(int argc, char** argv)
{
	//Variáveis
	int a, n;
	int result;

	//Entrada de Dados
	cin >> a >> n;
	
	//Chamando a Função
	result = pot(a, n);

	//Saída de Dados
	cout << result << endl;

	return 0;
}
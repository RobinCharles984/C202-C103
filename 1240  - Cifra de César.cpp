#include <iostream>

using namespace std;

int main()
{
	//Variáveis
	int n, m;
	char letra[50][50];
	int l, c;
	
	//Entrada de Linhas e Colunas
	cin >> n >> m;
	cin.ignore();
	
	//Entrando com a Mensagem na Matriz
	for(l = 0; l < n; l++)
	{
		for(c = 0; c < m; c++)
		{
			cin >> letra[l][c];
		}
	}
	
	//Imprimindo a Mensagem através da Matriz
	for(c = 0; c < m; c++)
	{
		for(l = 0; l < n; l++)
		{
			cout << letra[l][c];
		}
	}
	
	return 0;
}
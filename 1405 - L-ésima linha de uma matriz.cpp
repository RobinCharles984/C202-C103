//Bibliotecas
#include <iostream>

//Abrevia��es
using namespace std;

//Fun��o Principal
int main()
{
	//Vari�veis
	int mat[50][50];//Vari�vel da matriz
	int linhas, colunas;
	int l, c;//Contadores de linhas e colunas
	int search;//Vari�vel da linha procurada
	
	//Entrando com as linhas e colunas da matriz
	cin >> linhas;
	cin >> colunas;
	
	//Entrando com os valores da matriz
	for(l = 0; l < linhas; l++)
	{
		for(c = 0; c < colunas; c++)
		{
			cin >> mat[l][c];
		}
	}
	
	//Entrando com a linha que se deseja imprimir
	cin >> search;
	
	//Imprimindo a linha encontrada
	for(l = 0; l < linhas; l++)
	{
		for(c = 0; c < colunas; c++)
		{
			if(l == search)
			{
				cout << mat[l][c] << " ";
			}
		}
	}
	
	cout << endl;
	
	return 0;
}
//Bibliotecas
#include <iostream>

//Abreviações
using namespace std;

//Função Principal
int main(){
	
	//Variáveis
	int mat[10][10];//Matriz
	int nLinhas, nColunas;
	int l, c;//Contadores
	
	//Entrada de Dados para quantidade de linhas e colunas
	cin >> nLinhas >> nColunas;
	
	//Processamento para digitar valores da Matriz
	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cin >> mat[l][c];
		}
	}
	
	//Processamento para imprimir a Matriz
	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cout << mat[l][c] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
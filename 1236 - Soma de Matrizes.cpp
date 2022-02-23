//Bibliotecas
#include <iostream>

//Abreviações
using namespace std;

//Função Principal
int main(){
	
	//Variáveis
	int mat1[10][10];//Matriz 1
	int mat2[10][10];//Matriz 2
	int res[10][10];//Resultado
	int nLinhas, nColunas;
	int l, c;//Contadores
	
	//Entrada de Dados para quantidade de linhas e colunas
	cin >> nLinhas >> nColunas;
	
	//Processamento para receber os valores da Matrizes 1
	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cin >> mat1[l][c];
		}
	}
	
	//Processamento para receber os valores da Matrizes 2
	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cin >> mat2[l][c];
		}
	}
	
	//Processamento para somar as Matrizes
	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			res[l][c] = mat1[l][c] + mat2[l][c];
		}
	}
	
	//Processamento para imprimir a Matriz Resultante
	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cout << res[l][c] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
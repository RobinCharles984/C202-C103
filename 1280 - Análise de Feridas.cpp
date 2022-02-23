#include <iostream>

using namespace std;

int main()
{
	//Vari�veis
	int nLinhas, nColunas;
	int l, c;
	int area, soma = 0, dimensao;
	int mat[50][50];
	
	//Entrando com o valor de linhas e colunas
	cin >> nLinhas >> nColunas;
	
	//Entrando com a dimens�o do p�xel
	cin >> dimensao;
	
	//Entrando com o valor da matriz em repeti��o
	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cin >> mat[l][c];
			
			if(mat[l][c] == 1)
			{
				soma++;	  	
			}
		}
	}
	
	//Calculando a �rea
	area = dimensao * dimensao * soma;
	
	//Imprimindo a �rea
	cout << "AREA = " << area << " mm^2" << endl;
	
	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	//Variáveis
	int mat[50][50];
	int transposta[50][50];
	int det1 = 1, det2 = 1, detTotal;
	int l, c;

	//Entrando os Valores da Matriz
	for(l = 0; l < 2; l++)
	{
		for(c = 0; c < 2; c++)
		{
			cin >> mat[l][c];
		}
	}

	//Imprimindo os valores da Matriz
	cout << "M:" << endl;

	for(l = 0; l < 2; l++)
	{
		for(c = 0; c < 2; c++)
		{
			cout << mat[l][c] << " ";
		}
		cout << endl;
	}

	//Processando e Imprimindo a Matriz Transposta
	for(l = 0; l < 2; l++)
	{
		for(c = 0; c < 2; c++)
		{
			if(l == c)
			{
				transposta[l][c] = mat[l][c];
			}
			else
			{
				transposta[c][l] = mat[l][c];
			}
		}
		cout << endl;
	}

	cout << "M transposta:" << endl;

	for(l = 0; l < 2; l++)
	{
		for(c = 0; c < 2; c++)
		{
			cout << transposta[l][c] << " ";
		}
		cout << endl;
	}

	//Calculando e Imprimindo o Determinante
	for(l = 0; l < 2; l++)
	{
		for(c = 0; c < 2; c++)
		{
			if(l == c)
			{
				det1 = det1 * transposta[l][c];
			}
			else
			{
				det2 = det2 * transposta[l][c];
			}
		}
		cout << endl;
	}

	detTotal = det1 - det2;

	cout << "Determinante: " << detTotal << endl;

	return 0;
}

#include <iostream>

using namespace std;

int main(){
	int mat[10][10];
	int res = 0;
	int linhas = 3, colunas = 4;
	int l, c;
	
	for(l = 0; l < linhas; l++)
	{
		for(c = 0; c < colunas; c++)
		{
			cin >> mat[l][c];
			res = res + mat[l][c];
		}
	}
	
	cout << "soma = " << res << endl;
	
	return 0;
}
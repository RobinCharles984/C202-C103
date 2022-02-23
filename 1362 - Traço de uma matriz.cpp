#include <iostream>

using namespace std;

int main(){
	int mat[10][10];
	int res = 0;
	int linhas, colunas;
	int l, c;
	
	cin >> linhas;
	
	colunas = linhas;
	
	for(l = 0; l < linhas; l++)
	{
		for(c = 0; c < colunas; c++)
		{
			cin >> mat[l][c];
			if(l == c)
			{
				res = res + mat[l][c];
			}
		}
	}
	
	cout << "traco = " << res << endl;
	 
	return 0;
}
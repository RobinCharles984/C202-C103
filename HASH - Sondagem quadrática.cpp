#include <iostream>
#include <cmath>
using namespace std;

//Fun��o Hashing Auxiliar
int hash_aux(int k, int m)
{
	int h = k % m;
	if(h < 0)
		h += m;
	return h;
}

//Fun��o Hashing Quadr�tica
int hash2(int k, int i, int m, int c1, int c2)
{
	int i2 = pow(i, 2);
	int h = (hash_aux(k, m) + (c1 * i) + (c2 * i2)) % m;
	return h;
}

//Fun��o Principal
int main(int argc, char** argv)
{
	//Vari�veis
	int k;//Valor da chave
	int m;//Valor do tamanho da tabela
	int c1, c2;
	
	//Entrada de Dados
	cin >> k >> m >> c1 >> c2;
	
	//Processamento...
	for(int i = 0; i < m; i++)
	{
		cout << hash2(k, i, m, c1, c2) << " ";//Chamando a Fun��o Hashing Quadr�tica
	}
	
	cout << endl;
	
	return 0;
}
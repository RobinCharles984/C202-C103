#include <iostream>
#include <cmath>
using namespace std;

//Função Hashing Auxiliar 1
int h1(int k, int m)
{
	int h = k % m;
	if(h < 0)
		h += m;
	return h;
}

//Função Hashing Auxiliar 2
int h2(int k, int m)
{
	int h = 1 + (k % (m - 1));
	if(h < 0)
		h += m;
	return h;
}

//Função Double Hashing
int dhash(int k, int m, int i)
{
	int h = (h1(k, m) + (i * h2(k, m))) % m;
	return h;
}

//Função Principal
int main(int argc, char** argv)
{
	//Variáveis
	int k;//Valor da chave
	int m;//Valor do tamanho da tabela
	
	//Entrada de Dados
	cin >> k >> m;
	
	//Processamento...
	for(int i = 0; i < m; i++)
	{
		cout << dhash(k, m, i) << " ";//Chamando a Função Double Hashing
	}
	
	cout << endl;
	
	return 0;
}
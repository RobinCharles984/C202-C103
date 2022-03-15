#include <iostream>

using namespace std;

//Função Hashing Auxiliar
int hash_aux(int k, int m)
{
	int h = k % m;
	if(h < 0)
		h += m;
	return h;
}

//Função Hashing Linear
int hash1(int k, int i, int m)
{
	int h = (hash_aux(k, m) + i) % m;   	
	return h;
}

//Função Principal
int main(int argc, char** argv)
{
	//Variáveis
	int k, m;//Valores de k e m respectivamente
	int h;//Variável que recebe valor da função hash
	
	//Entrada de Dados
	cin >> k >> m;
	
	//Chamando a função hash
	for(int i = 0; i < m; i++)
	{
		h = hash1(k, i, m);
		
		//Saída de dados
		cout << h << " ";
	}
	
	cout << endl;
	
	return 0;
}
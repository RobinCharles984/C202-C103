#include <iostream>

using namespace std;

//Fun��o Hashing Auxiliar
int hash_aux(int k, int m)
{
	int h = k % m;
	if(h < 0)
		h += m;
	return h;
}

//Fun��o Hashing Linear
int hash1(int k, int i, int m)
{
	int h = (hash_aux(k, m) + i) % m;   	
	return h;
}

//Fun��o Principal
int main(int argc, char** argv)
{
	//Vari�veis
	int k, m;//Valores de k e m respectivamente
	int h;//Vari�vel que recebe valor da fun��o hash
	
	//Entrada de Dados
	cin >> k >> m;
	
	//Chamando a fun��o hash
	for(int i = 0; i < m; i++)
	{
		h = hash1(k, i, m);
		
		//Sa�da de dados
		cout << h << " ";
	}
	
	cout << endl;
	
	return 0;
}
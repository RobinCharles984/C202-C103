#include <iostream>

using namespace std;

//Função Hashing
int hash_aux(int k, int m)
{
    int h = k % m;
    if(h < 0)
        h+=m;
	return h;
}

//Função Principal
int main(int argc, char** argv)
{
	//Variáveis
	int i, j;//Valores de k e j, respectivamente
	int h;//Variável que recebe a função hash

	//Entrada de dados
	cin >> i >> j;
	while(i != 0 && j != 0)
	{
		//Chamanda a função hash
		h = hash_aux(i, j);

		//Saída de dados
		cout << h << endl;
		
		cin >> i >> j;
	}

	return 0;
}

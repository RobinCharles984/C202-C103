#include <iostream>

using namespace std;

//Fun��o Hashing
int hash_aux(int k, int m)
{
    int h = k % m;
    if(h < 0)
        h+=m;
	return h;
}

//Fun��o Principal
int main(int argc, char** argv)
{
	//Vari�veis
	int i, j;//Valores de k e j, respectivamente
	int h;//Vari�vel que recebe a fun��o hash

	//Entrada de dados
	cin >> i >> j;
	while(i != 0 && j != 0)
	{
		//Chamanda a fun��o hash
		h = hash_aux(i, j);

		//Sa�da de dados
		cout << h << endl;
		
		cin >> i >> j;
	}

	return 0;
}

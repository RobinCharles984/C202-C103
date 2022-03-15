#include <iostream>
using namespace std;

//Struct com os valores da chave
struct dado
{
	int k;
	int status;
};

//Função Hashing Auxiliar
int hash_aux(int k, int m)
{
	int h = k % m;
	if(h < 0)
		h += m;
	return h;
}

//Função Hashing Sondagem Linear
int hash1(int k, int i, int m)
{
	int h = (hash_aux(k, m) + i) % m; //Chamando a função Auxiliar   	
	return h;
}

//Função Hashing Incersão de Dados
int hash_insert(dado t[], int m, int k)
{
	int i = 0;
	int j;
	do
	{
		j = hash1(k, i, m);// Chamando a função Sondagem Linear
		if(t[j].status != 1)
		{
			t[j].k = k;
			t[j].status = 1;
			return j;
		}
		else
			i++;
	}while(i != m);
	
	return -1;   	
}

int main(int argc, char** argv)
{
	dado T[20]; //Tabela struct com os valores das chaves
	int m; //Tamanho da tabela
	int c; //Auxiliar para os valores das chaves
	
	cin >> m; //Entrando com o valor do tamanho da tabela

	//Declarando os valores iniciais
	for(int i = 0; i < m; i++)
	{
		T[i].status = 0;
		T[i].k = -1;
	}
	
	cin >> c; //Entrando com os valores das chaves
	
	//Mandando para a função Inserção de Dados
	while(c != 0)
	{
		hash_insert(T, m, c);
		cin >> c;
	}
	
	//Saída de Dados das chaves com suas posições finais
	for(int i = 0; i < m; i++)
	{
		cout << T[i].k << " ";
	}
	
	cout << endl;
	
	return 0;
}
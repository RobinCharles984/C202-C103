#include <iostream>
#include <cstring>

using namespace std;

struct dados
{
	char nome[100];
	int n1;
	int n2;
	int n3;
	int n4;
};

int strongest(dados atletas[], int nAtletas)
{
	//Variáveis
	int soma[10];
	int flag = -1;

	//Encontrando o Mais Forte
	for(int i = 0; i < nAtletas; i++)
	{
		soma[i] = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;

		if(i == 0)
		{
			flag = i;
		}
		if(soma[i] > soma[i - 1])
		{
			flag = i;
		}
	}

	return flag;
}

int main()
{
	//Variáveis
	dados var[10];
	int n;
	int flager;
	char maisForte[100];

	//Entrada Numero de Atletas
	cin >> n;

	//Entrada Nome e as 4 notas do Atleta
	for(int i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(var[i].nome, 100);
		cin >> var[i].n1;
		cin >> var[i].n2;
		cin >> var[i].n3;
		cin >> var[i].n4;
	}

	//Enviando os dados para a Função Strongest
	flager = strongest(var, n);

	//Chamando o Vencedor
	for(int i = 0; i < n; i++)
	{
		if(flager == i)
		{
			//Mostrando Vencedor
			strcpy(maisForte, var[flager].nome);
			cout << "Vencedor: " << maisForte << endl;
		}
	}

	return 0;
}

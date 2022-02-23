#include <iostream>
#include <cstring>

using namespace std;

struct jedi
{
	char nome[50];
	int base;
};

int main()
{
	jedi local[50];
	int n;
	char search[50];
	int pos = -1;

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(local[i].nome, 50);
		cin >> local[i].base;
	}

	cin.ignore();
	cin.getline(search, 50);

	for(int i = 0; i < n; i++)
	{
		if(strcmp(search, local[i].nome) == 0)
		{
			pos = i;
		}
	}

	if(pos == -1)
	{
		cout << "Este cavaleiro nao esta cadastrado" << endl;
	}
	else
	{
		cout << "Este cavaleiro esta na base " << local[pos].base << endl;;
	}

	return 0;
}

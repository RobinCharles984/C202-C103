#include <iostream>
#include <list>

using namespace std;

int main()
{
	//Variáveis
	list<int> lista;//Lista
	int x;//Variável a receber valores

	for(int i = 0; i < 4; i++)
	{
		cin >> x;//Entrando com valores
		lista.push_front(x);//Enviando valores para lista
	}

	//Enquanto não terminar de ler a lista...
	while(!lista.empty())
	{
		x = *lista.begin();
		cout << x << " ";//Saída de dadis
		lista.pop_front();//Removendo
	}

	return 0;
}

#include <iostream>
#include <list>
using namespace std;

//Função para encontrar 
bool encontrar(list<int> lista, int x)
{
	list<int>::iterator i;//Iterando a lista com i
	bool torF;//Variável flag
	
	for(i = lista.begin();i != lista.end(); i++)
	{
		if(*i == x)
			torF = true;
	}
	if(torF)
		return true;
	else
		return false;
}

//Função Principal
int main(int argc, char** argv)
{
	//Variáveis
	list<int> lista;//Lista
	list<int>::iterator p;//Iterador da lista
	int x;//Variável a receber valores
	int n = 0;//Contador
	int flag;//Variável para procurar valor
	int f;//Variável para receber função
	
	cin >> x;//Entrando com valores
	
	//Mandando pra lista
	while(x != 0)
	{
		lista.push_back(x);
		cin >>x;
	}
	
	cin >> flag;//Valor a procurar valor
	f = encontrar(lista, flag);//Recebendo função
	
	//Apagando lista
	for(p = lista.begin();p != lista.end() ; p++)
	{
		n++;
	}
	
	//Saída de dados
	if(f)
		cout << "Encontrado" << endl;
	else
		cout << "Nao encontrado" << endl;
	
	return 0;
}
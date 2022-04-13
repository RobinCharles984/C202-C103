#include <iostream>
#include <list>
using namespace std;

//Fun��o para encontrar 
bool encontrar(list<int> lista, int x)
{
	list<int>::iterator i;//Iterando a lista com i
	bool torF;//Vari�vel flag
	
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

//Fun��o Principal
int main(int argc, char** argv)
{
	//Vari�veis
	list<int> lista;//Lista
	list<int>::iterator p;//Iterador da lista
	int x;//Vari�vel a receber valores
	int n = 0;//Contador
	int flag;//Vari�vel para procurar valor
	int f;//Vari�vel para receber fun��o
	
	cin >> x;//Entrando com valores
	
	//Mandando pra lista
	while(x != 0)
	{
		lista.push_back(x);
		cin >>x;
	}
	
	cin >> flag;//Valor a procurar valor
	f = encontrar(lista, flag);//Recebendo fun��o
	
	//Apagando lista
	for(p = lista.begin();p != lista.end() ; p++)
	{
		n++;
	}
	
	//Sa�da de dados
	if(f)
		cout << "Encontrado" << endl;
	else
		cout << "Nao encontrado" << endl;
	
	return 0;
}
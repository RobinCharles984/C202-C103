//Bibliotecas
#include<iostream>
#include<iomanip>

//Abreviações
using namespace std;

//Função da Maior Altura
float maior(float alturas[], int nPessoas)
{
	float ma = -1;

	for(int i = 0; i < nPessoas; i++)
	{
		if(alturas[i] > ma)
		{
			ma = alturas[i];
		}
	}
	return ma;
}

//Função da Menor Altura
float menor(float alturas[], int nPessoas)
{

	float me = 100;

	for(int i = 0; i < nPessoas; i++)
	{
		if(alturas[i] < me)
		{
			me = alturas[i];	   	
		}
	}
	return me;
}

//Função Principal
int main()
{
	//Variáveis
	float alturas[100];
	float maiorAltura;
	float menorAltura;
	int n;
	int i = 0;

	//Entrando com as Alturas
	for(i = 0; i < 100; i++)
	{
		cin >> alturas[i];

		if(alturas[i] == 0)
			break;
	}
	
	//Chamando as Funções
	maiorAltura = maior(alturas, i);
	menorAltura = menor(alturas, i);

	//Imprimindo a Menor e Maior Altura
	cout << "Menor altura: " << menorAltura << endl;
	cout << "Maior altura: " << maiorAltura << endl;


	return 0;
}

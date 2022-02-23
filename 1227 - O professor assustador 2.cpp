//Bibliotecas
#include <iostream>
#include <iomanip>

//Abrevia��es
using namespace std;

//Fun��o Numeros abaixo da m�dia
int nAbaixo(int notas[], int nAlunos, float media)
{
	int abaixo = 0;//Vari�vel para numeros abaixo da m�dia

	for(int i = 0; i < nAlunos; i++)
	{
		if(notas[i] < media)//Caso a nota seja menor que a m�dia...
			abaixo++;
	}

	return abaixo;
}

//Fun��o Numeros acima da m�dia
int nAcima(int notas[], int nAlunos, float media)
{
	int acima = 0;//Vari�vel para numeros acima da m�dia

	for(int i = 0; i < nAlunos; i++)
	{
		if(notas[i] >= media)//Caso a nota seja maior ou igual a m�dia...
			acima++;
	}

	return acima;
}

//Fun��o Principal
int main()
{
	
	//Vari�veis
	int n;
	int _notas[100];
	float soma = 0, _media;
	int ac, ab;

	//Entrada de Dados
	cin >> n;

	//Repeti��o com Entrada de Notas
	for(int i = 0; i < n; i++)
	{
		cin >> _notas[i];
		soma = soma + _notas[i];
	}

	_media = soma / n;//Equa��o da M�dia

	//Chamando as Fun��es
	ab = nAbaixo(_notas, n, _media);
	ac = nAcima(_notas, n, _media);
	
	//Sa�da de Dados com Controle de Casas Decimais
	cout << fixed << setprecision(2) << "Media da turma = " << _media << endl;
	cout << "Alunos com nota abaixo da media: " << ab << endl;
	cout << "Alunos com nota acima da media: " << ac << endl;
	
	return 0;
}

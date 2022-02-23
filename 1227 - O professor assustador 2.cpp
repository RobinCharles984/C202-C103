//Bibliotecas
#include <iostream>
#include <iomanip>

//Abreviações
using namespace std;

//Função Numeros abaixo da média
int nAbaixo(int notas[], int nAlunos, float media)
{
	int abaixo = 0;//Variável para numeros abaixo da média

	for(int i = 0; i < nAlunos; i++)
	{
		if(notas[i] < media)//Caso a nota seja menor que a média...
			abaixo++;
	}

	return abaixo;
}

//Função Numeros acima da média
int nAcima(int notas[], int nAlunos, float media)
{
	int acima = 0;//Variável para numeros acima da média

	for(int i = 0; i < nAlunos; i++)
	{
		if(notas[i] >= media)//Caso a nota seja maior ou igual a média...
			acima++;
	}

	return acima;
}

//Função Principal
int main()
{
	
	//Variáveis
	int n;
	int _notas[100];
	float soma = 0, _media;
	int ac, ab;

	//Entrada de Dados
	cin >> n;

	//Repetição com Entrada de Notas
	for(int i = 0; i < n; i++)
	{
		cin >> _notas[i];
		soma = soma + _notas[i];
	}

	_media = soma / n;//Equação da Média

	//Chamando as Funções
	ab = nAbaixo(_notas, n, _media);
	ac = nAcima(_notas, n, _media);
	
	//Saída de Dados com Controle de Casas Decimais
	cout << fixed << setprecision(2) << "Media da turma = " << _media << endl;
	cout << "Alunos com nota abaixo da media: " << ab << endl;
	cout << "Alunos com nota acima da media: " << ac << endl;
	
	return 0;
}

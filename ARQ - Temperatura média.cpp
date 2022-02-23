//Bibliotecas
#include <iostream>
#include <fstream>
#include <iomanip>

//Abrevia��es
using namespace std;

//Fun��o Principal
int main()
{

	//Vari�veis
	ifstream temp;//Vari�vel para o arquivo
	char nome[50];
	float valor, n = 0;
	float media, soma = 0;

	//Entrada de Dados
	cin.getline(nome, 50);

	temp.open(nome, ifstream::in);//Abrindo o arquivo

	//Enquanto n�o ler at� o final do arquivo...
	while(!temp.eof())
	{
		temp >> valor;//Receber os valores do arquivo dentro da vari�vel "values"
		soma = soma + valor;
		n++;
	}

	media = soma / n;//Equa��o da M�dia

	//Fechar o arquivo
	temp.close();
	
	//Sa�da de Dados
	cout << fixed << setprecision(1);//Controlando as casas decimais
	cout << "Temperatura media: " << media << " graus" << endl;//Imprimindo a m�dia
	
	cin.ignore();

	return 0;
}

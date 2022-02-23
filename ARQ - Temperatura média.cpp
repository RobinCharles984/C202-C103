//Bibliotecas
#include <iostream>
#include <fstream>
#include <iomanip>

//Abreviações
using namespace std;

//Função Principal
int main()
{

	//Variáveis
	ifstream temp;//Variável para o arquivo
	char nome[50];
	float valor, n = 0;
	float media, soma = 0;

	//Entrada de Dados
	cin.getline(nome, 50);

	temp.open(nome, ifstream::in);//Abrindo o arquivo

	//Enquanto não ler até o final do arquivo...
	while(!temp.eof())
	{
		temp >> valor;//Receber os valores do arquivo dentro da variável "values"
		soma = soma + valor;
		n++;
	}

	media = soma / n;//Equação da Média

	//Fechar o arquivo
	temp.close();
	
	//Saída de Dados
	cout << fixed << setprecision(1);//Controlando as casas decimais
	cout << "Temperatura media: " << media << " graus" << endl;//Imprimindo a média
	
	cin.ignore();

	return 0;
}

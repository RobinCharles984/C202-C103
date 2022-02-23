//Bibliotecas
#include<iostream>

//Abreviações
using namespace std;

//Função Principal
int main(){
	
	//Variáveis
	int n, soma = 0;
	
	cin >> n;//Entrada de casos
	
	//Processamento
	for(int i = 0; i <= n; i++)
	{
		soma = i + soma;//Equação da soma
	}
	
	//Saída de Dados
	cout << "Soma = " << soma << endl; 
	
	return 0;
}
//Bibliotecas
#include<iostream>

//Abrevia��es
using namespace std;

//Fun��o Principal
int main(){
	
	//Vari�veis
	int n, soma = 0;
	
	cin >> n;//Entrada de casos
	
	//Processamento
	for(int i = 0; i <= n; i++)
	{
		soma = i + soma;//Equa��o da soma
	}
	
	//Sa�da de Dados
	cout << "Soma = " << soma << endl; 
	
	return 0;
}
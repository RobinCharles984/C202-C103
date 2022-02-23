//Bibliotecas
#include<iostream>
#include<cmath>
#include<iomanip>

//Abrevia��es
using namespace std;

//Fun��o Principal
int main(){
	
	//vari�veis
	int n;//Vari�vel para n�mero de casos
	float p, h, imc;//Vari�vel para peso, altura e IMC
	float maior, menor;
	float media, soma = 0, m = 0;
	
	cin >> n;//Entrada para n�mero de casos
	
	//Processamento
	for(int i = 0; i < n; i++)
	{
		
		//Entrada de Dados
		cin >> p;//Entrada do peso
		cin >> h;//Entrada da altura
		
		imc = p/pow(h, 2);//Equa��o para IMC
		
		m++;
		soma = soma + imc;
		
		//Processamento para encontrar o maior e menor
		if(i == 0){
			maior = imc;
			menor = imc;	
		}
		else if(imc > maior)
			maior = imc;
		
		if(imc < menor)
			menor = imc;
	}
	
	media = soma/m;//Equa��o para encontrar a m�dia
	
	//Controle de casas decimais
	cout << fixed << setprecision(1);
	
	//Sa�da de Dados
	cout << "Menor IMC: " << menor << endl;
	cout << "Maior IMC: " << maior << endl;
	cout << "IMC medio: " << media << endl;
	
	
	return 0;
}
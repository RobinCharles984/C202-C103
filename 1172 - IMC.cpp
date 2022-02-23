//Bibliotecas
#include<iostream>
#include<cmath>
#include<iomanip>

//Abreviações
using namespace std;

//Função Principal
int main(){
	
	//variáveis
	int n;//Variável para número de casos
	float p, h, imc;//Variável para peso, altura e IMC
	float maior, menor;
	float media, soma = 0, m = 0;
	
	cin >> n;//Entrada para número de casos
	
	//Processamento
	for(int i = 0; i < n; i++)
	{
		
		//Entrada de Dados
		cin >> p;//Entrada do peso
		cin >> h;//Entrada da altura
		
		imc = p/pow(h, 2);//Equação para IMC
		
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
	
	media = soma/m;//Equação para encontrar a média
	
	//Controle de casas decimais
	cout << fixed << setprecision(1);
	
	//Saída de Dados
	cout << "Menor IMC: " << menor << endl;
	cout << "Maior IMC: " << maior << endl;
	cout << "IMC medio: " << media << endl;
	
	
	return 0;
}
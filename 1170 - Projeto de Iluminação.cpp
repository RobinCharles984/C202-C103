//Bibliotecas
#include<iostream>
#include<iomanip>
#include<cmath>

//Abreviações
using namespace std;

//Função Principal
int main(){
	
	//Variáveis
	int c;////Variável para Classes do Mínimo de Potência
	double x, y;//Variáveis para largura e comprimento
	double area, potencia, nlampadas;
	int classe1, classe2, classe3;
	
	classe1 = 15;
	classe2 = 18;
	classe3 = 20;
	
	//Entrada de Dados
	cin >> c;//Entrada para a Classe específica
	cin >> x >> y;//Entrada para largura e comprimento
	
	area = x * y;//Equação da Área
	
	//Processamento
	switch(c)
	{
	case 1:
		potencia = classe1 * area;//Equação para achar a potência
		break;
	
	case 2:
		potencia = classe2 * area;//Equação para achar a potência
		break;
	
	default:
		potencia = classe3 * area;//Equação para achar a potência
		break;
	}
	
	nlampadas = potencia/60;//Equação para achar o número de lâmpadas
	
	//Saída de Dados com controle de casas decimais
	cout << fixed << setprecision(1) << "Area do comodo: " << area << " m^2" << endl;
	cout << fixed << setprecision(1) << "Potencia necessaria: " << potencia << " W" << endl;
	cout << fixed << setprecision(0) << "Numero de lampadas de 60 W a comprar: " << ceil(nlampadas) << endl;
	
	return 0;
}
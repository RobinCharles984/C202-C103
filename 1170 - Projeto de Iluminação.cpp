//Bibliotecas
#include<iostream>
#include<iomanip>
#include<cmath>

//Abrevia��es
using namespace std;

//Fun��o Principal
int main(){
	
	//Vari�veis
	int c;////Vari�vel para Classes do M�nimo de Pot�ncia
	double x, y;//Vari�veis para largura e comprimento
	double area, potencia, nlampadas;
	int classe1, classe2, classe3;
	
	classe1 = 15;
	classe2 = 18;
	classe3 = 20;
	
	//Entrada de Dados
	cin >> c;//Entrada para a Classe espec�fica
	cin >> x >> y;//Entrada para largura e comprimento
	
	area = x * y;//Equa��o da �rea
	
	//Processamento
	switch(c)
	{
	case 1:
		potencia = classe1 * area;//Equa��o para achar a pot�ncia
		break;
	
	case 2:
		potencia = classe2 * area;//Equa��o para achar a pot�ncia
		break;
	
	default:
		potencia = classe3 * area;//Equa��o para achar a pot�ncia
		break;
	}
	
	nlampadas = potencia/60;//Equa��o para achar o n�mero de l�mpadas
	
	//Sa�da de Dados com controle de casas decimais
	cout << fixed << setprecision(1) << "Area do comodo: " << area << " m^2" << endl;
	cout << fixed << setprecision(1) << "Potencia necessaria: " << potencia << " W" << endl;
	cout << fixed << setprecision(0) << "Numero de lampadas de 60 W a comprar: " << ceil(nlampadas) << endl;
	
	return 0;
}
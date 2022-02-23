//Bibliotecas
#include <iostream>
#include <iomanip>
#include <cmath>

//Abreviações
using namespace std;

//Função Principal
int main(){
	
	//Variáveis
	int X;
	float Y, consumo;
	
	cout << fixed << setprecision(3);//Casas Decimais
	cin >> X >> Y;//Entrada de Dados
	
	consumo = X/Y;/*Se ele quer achar km/l, é só dividir os kilômetros por
					litros, ou seja, X = KM e Y = L.*/
	
	cout << consumo << " km/l" << endl;//Saída de Dados
	
	return 0;	
}
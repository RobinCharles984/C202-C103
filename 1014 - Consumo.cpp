//Bibliotecas
#include <iostream>
#include <iomanip>
#include <cmath>

//Abrevia��es
using namespace std;

//Fun��o Principal
int main(){
	
	//Vari�veis
	int X;
	float Y, consumo;
	
	cout << fixed << setprecision(3);//Casas Decimais
	cin >> X >> Y;//Entrada de Dados
	
	consumo = X/Y;/*Se ele quer achar km/l, � s� dividir os kil�metros por
					litros, ou seja, X = KM e Y = L.*/
	
	cout << consumo << " km/l" << endl;//Sa�da de Dados
	
	return 0;	
}
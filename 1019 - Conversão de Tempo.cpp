//Bibliotecas
#include <iostream>
#include <iomanip>
#include <cmath>

//Abrevia��es
using namespace std;

//Fun��o Principal
int main(){
	
	//Vari�veis
	int N;
	
	cin >> N;//Entrada de Dados
	
	/*Esse daqui � realmente confuso, eu n�o sei como explicar, o monitor me
	explicou mas mesmo assim eu n�o entendi, s� sei como fazer, mas a l�gica
	eu n�o tenho a menor id�ia, eu usei essas "equa��es" e deu certo. */
	int segundos = N%60;
	int minutos = (N%3600)/60;
	int horas = N/3600;
	
	//Sa�da de Dados
	cout << horas << ":" << minutos << ":" << segundos << endl;
	
	return 0;	
}
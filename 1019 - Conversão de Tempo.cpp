//Bibliotecas
#include <iostream>
#include <iomanip>
#include <cmath>

//Abreviações
using namespace std;

//Função Principal
int main(){
	
	//Variáveis
	int N;
	
	cin >> N;//Entrada de Dados
	
	/*Esse daqui é realmente confuso, eu não sei como explicar, o monitor me
	explicou mas mesmo assim eu não entendi, só sei como fazer, mas a lógica
	eu não tenho a menor idéia, eu usei essas "equações" e deu certo. */
	int segundos = N%60;
	int minutos = (N%3600)/60;
	int horas = N/3600;
	
	//Saída de Dados
	cout << horas << ":" << minutos << ":" << segundos << endl;
	
	return 0;	
}
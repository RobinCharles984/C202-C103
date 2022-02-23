#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

 

int main(){
	int horas, velocidade, consumo;
	float consumofinal;
	
	cin >> horas >> velocidade;
	
	consumo = 12;
	
	consumofinal = (horas * velocidade * 1.0)/consumo;
	
	cout << fixed << setprecision(3);
	cout << consumofinal << endl;
	
	return 0;	
}
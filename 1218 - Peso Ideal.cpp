#include <iostream>
#include <iomanip>
using namespace std;

double ideal(double h, char sexo)
{
	double pesoIdeal;
	
	if(sexo == 'M'){
		pesoIdeal = 72.7 * h - 58;
	}
	
	else if(sexo == 'F'){
		pesoIdeal = 62.1 * h - 44.7;
	}
	
	return pesoIdeal;
}

int main(){
	double altura;
	char genero;
	
	cin >> altura;
	cin >> genero;
	
	cout << fixed << setprecision(2) << "Peso ideal: " << ideal(altura, genero) << " kg" << endl;
	
	return 0;
}
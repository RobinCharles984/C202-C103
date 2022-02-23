#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int _funcionumero, _horas;
	float _valorphora, _salario;
	
	cin >> _funcionumero;
	cout << "NUMBER = " << _funcionumero << endl;
	
	cin >> _horas >> _valorphora;
	cout << fixed << setprecision(2);
	_salario = _horas * _valorphora;
	cout << "SALARY = U$ " << _salario << endl;
	
	return 0;
	
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

 

int main(){
    double A, B, C, pi = 3.14159, atriangulo, acirculo, atrapezio, aquadrado, aretangulo;
    
	cout << fixed << setprecision(3);
	cin >> A >> B >> C;
	
	atriangulo = (A * C)/2;
	acirculo = (C * C) * pi;
	atrapezio = ((A + B) * C)/2;
	aquadrado = B * B;
	aretangulo = A * B;
	
	cout << "TRIANGULO: " << atriangulo << endl;
	cout << "CIRCULO: " << acirculo << endl;
	cout << "TRAPEZIO: " << atrapezio << endl;
	cout << "QUADRADO: " << aquadrado << endl;
	cout << "RETANGULO: " << aretangulo << endl;
    
    return 0;
}
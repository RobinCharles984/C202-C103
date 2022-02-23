#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	double raio;
	double area;
	double pi;
	
	pi = 3.14159;
 	
	cin >> raio; 
 	area = pi * pow(raio, 2);
 	
 	cout << fixed << setprecision(4);
 	
 	cout << "A=" << area << endl;
	
	return 0;
}
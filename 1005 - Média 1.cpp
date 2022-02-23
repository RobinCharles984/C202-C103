#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	double A, B, media;
	
	cin >> A >> B;
	
	cout << fixed << setprecision(5);
	
	media =  (A*3.5 + B*7.5)/11;
	
	cout << "MEDIA = " << media << endl; 
	
	return 0;
}
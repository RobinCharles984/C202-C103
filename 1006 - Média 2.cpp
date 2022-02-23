#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	double A, B, C, media;
	
	cin >> A >> B >> C;
	
	cout << fixed << setprecision(1);
	
	media =  (A*2 + B*3 + C*5)/10;
	
	cout << "MEDIA = " << media << endl; 
	
	return 0;
}
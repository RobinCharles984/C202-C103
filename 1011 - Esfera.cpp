#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int volume;
	float pi = 3.14159;
	double r;
	
	cin >> r;
	
	volume = (4.0/3) * pi * pow(r, 3);
	
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << volume * 1.0 << endl;
		
	return 0;
}
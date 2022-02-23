#include <iostream>
#include <iomanip>

using namespace std;

void converte(float F, float &C, float &K)
{
	C = (5 * (F - 32)) / 9;
	K = C + 273;
}

int main()
{
	float f, c, k;
	
	cin >> f;
	
	converte(f, c, k);
	
	cout << fixed << setprecision(2);
	cout << "Celsius: " << c << endl;
	cout << "Kelvin: " << k << endl;
	
	return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



int main()
{
	double A, B, C, delta, r1, r2;

	cin >> A >> B >> C;

	delta = pow(B, 2) - 4 * A * C;

	if(delta <= 0 && A == 0 || delta <= 0 || A == 0)
	{
		cout << "Impossivel calcular" << endl;
	}
	else
	{
		r1 = (-B + sqrt(delta)) / (2 * A);
		r2 = (-B - sqrt(delta)) / (2 * A);
		cout << fixed << setprecision(5) << "R1 = " << r1 << endl;
		cout << fixed << setprecision(5) << "R2 = " << r2 << endl;
	}
	return 0;
}
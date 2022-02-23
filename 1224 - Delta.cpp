#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

float calc_delta(float a, float b, float c)
{
	float delta;
	
	delta = pow(b, 2) - 4 * a * c;
	
	cout << fixed << setprecision(2) << "delta = " << delta << endl;
	
	return delta;
}

int main(){
	float x, y, z;
	
	cin >> x >> y >> z;
	
	calc_delta(x, y, z);
	
	return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

int calc_a(int x)
{
	int a;
	//a = 2x^2 + 3x - 1; 
	a = pow(x, 2)*2 + 3*x - 1;
	return a;
}

int calc_b(int x)
{
	int b;
	//b = x^3;
	b = pow(x, 3);
	return b;
}

int calc_c(int y)
{
	int c;
	//c = y^3;
	c = pow(y, 3);
	return c;
}

int main()
{
    int o,p;
    
    cin >> o >> p;

    cout << "a = " << calc_a(o) << endl;

    cout << "b = " << calc_b(o) << endl;

    cout << "c = " << calc_c(p) << endl;
    return 0;
}
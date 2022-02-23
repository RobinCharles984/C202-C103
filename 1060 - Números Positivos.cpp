#include<iostream>
using namespace std;

int main()
{
	double a, i, n = 0;
	for(i = 0; i < 6; i++)
	{
		cin >> a;
		if(a > 0)
			n++;

	}
	cout << n << " valores positivos" << endl;

	return 0;
}

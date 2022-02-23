#include<iostream>
using namespace std;

int main()
{
	double i, n = 0;
	int a;
	
	for(i = 0; i < 5; i++)
	{
		cin >> a;
		if(a % 2 == 0)
		{
			n++;
		}
	}
	cout << n << " valores pares" << endl;

	return 0;
}
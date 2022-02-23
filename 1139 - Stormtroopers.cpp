#include<iostream>
#include<iomanip>

using namespace std;

struct dados
{
	int ID;
	double IM;
	double FA;
	double GA;
};

int main()
{
	dados stormtrooper[100];
	int n = 0;
	int escolhido;

	cin >> stormtrooper[n].ID;
	
	while (stormtrooper[n].ID != 0)
	{
		cin >> stormtrooper[n].IM;
		cin >> stormtrooper[n].FA;

		stormtrooper[n].GA = (stormtrooper[n].IM + stormtrooper[n].FA) / 2;
		
		if(n == 0)
		{
			escolhido = n;;
		}
		if(stormtrooper[n].GA > stormtrooper[escolhido].GA)
		{
			escolhido = n;
		}
		
		n++;
		
		cin >> stormtrooper[n].ID;
	}

	cout << "Stormtrooper escolhido: " << stormtrooper[escolhido].ID << endl;
	cout << fixed << setprecision(2);
	cout << "GA = " << stormtrooper[escolhido].GA << endl;

	return 0;
}

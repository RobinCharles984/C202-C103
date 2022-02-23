#include <iostream>
using namespace std;

int main()
{
	float X, Y;
	
	cin >> X >> Y;
	
	if (X > 0 && Y > 0)
		cout << "Q1" << endl;
	if (X < 0 && Y > 0)
		cout << "Q2" << endl;
	if (X < 0 && Y < 0)
		cout << "Q3" << endl;
	if (X > 0 && Y < 0)
		cout << "Q4" << endl;
	if (X == 0 && Y > 0 || X == 0 && Y < 0)
		cout << "Eixo Y" << endl;
	if (X > 0 && Y == 0 || X < 0 && Y == 0)
		cout << "Eixo X" << endl;
	if (X == 0 && Y == 0)
		cout << "Origem" << endl;

	return 0;
}
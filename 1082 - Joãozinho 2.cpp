#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	float x[20], y[20];
	char op[20];

	cin >> n;//Numero de Vezes

	//Entrando Valores de X
	for(int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	
	//Entrando Valores de Y
	for(int i = 0; i < n; i++)
	{
		cin >> y[i];
	}
	
	//Entrando Valores de OP
	for(int i = 0; i < n; i++)
	{
		cin >> op[i];
	}
	
	//Processamento para fazer as Contas
	for(int i = 0; i < n; i++)
	{
		cout << fixed << setprecision(0);
		switch(op[i])
		{
		case '+':
			cout << x[i] << " + " << y[i] << " = " << x[i] + y[i] << endl;
			break;
		
		case '-':
			cout << x[i] << " - " << y[i] << " = " << x[i] - y[i] << endl;
			break;

		case '*':
			cout << x[i] << " * " << y[i] << " = " << x[i] * y[i] << endl;
			break;
		
		case '/':
			cout << x[i] << " / " << y[i] << " = " << fixed << setprecision(2) << x[i] / y[i] << endl;
			break;
		}
	}

	return 0;
}

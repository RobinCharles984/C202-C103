#include <iostream>,
#include <iomanip>
using namespace std;

int main()
{
	int senha, tentativa;
	
	senha = 2002;
	
	cin >> tentativa;
	
	while(tentativa != senha)
	{
		cout << "Senha Invalida" << endl;
		cin >> tentativa;
	}

	cout << "Acesso Permitido" << endl;

	return 0;
}
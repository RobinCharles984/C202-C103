//Biblioteas
#include<iostream>
#include<iomanip>
#include<cmath>

//Abrevia��es
using namespace std;

//Fun��o das Ra�zes
int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
	int delta;//Vari�vel para Delta

	delta = pow(b, 2) - 4 * a * c;//Equa��o do Delta

	//Caso delta e "a" sejam diferentes de zero
	if(delta >= 0 && a != 0)
	{
		x1 = (-b - sqrt(delta)) / (2 * a);//Equa��o da Primeira Ra�z

		x2 = (-b + sqrt(delta)) / (2 * a);//Equa��o da Segunda Raiz

		return 0;//Retorna a 0
	}

	else//Caso contr�rio...
	{
		return 1;//Retorna a 1
	}
}

//Fun��o Principal
int main()
{
	
	//Vari�veis
	float x, y, z;
	float r1 = 0, r2 = 0;
	float calc;

	//Entrada de Dados
	cin >> x >> y >> z;

	//Chamando a Fun��o das Ra�zes
	calc = calc_raizes(x, y, z, r1, r2);

	//Controlando as Casas Decimais
	cout << fixed << setprecision(2);
	
	//Caso o valor retornado da Fun��o das Ra�zes seja 0...
	if(calc == 0)
	{
		if (r1 != r2)//Caso as ra�zes sejam diferentes...
		{
			if(r1 < r2)//Se as primeira ra�z for maior que a segunda...
			{
				cout << "x1 = " << r1 << endl;
				cout << "x2 = " << r2 << endl;
			}
			else//Caso contr�rio...
			{
				cout << "x2 = " << r2 << endl;
				cout << "x1 = " << r1 << endl;
			}
		}
		else if (r1 == r2)//As ra�zes sejam iguais...
		{
			cout << "x = " << r2 << endl;
		}	
		
	}
	
	else//Caso o valor retornado da Fun��o das Ra�zes seja 1
	{
		cout << "Nao ha raizes reais" << endl;
	}
	
	return 0;
}

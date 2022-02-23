//Biblioteas
#include<iostream>
#include<iomanip>
#include<cmath>

//Abreviações
using namespace std;

//Função das Raízes
int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
	int delta;//Variável para Delta

	delta = pow(b, 2) - 4 * a * c;//Equação do Delta

	//Caso delta e "a" sejam diferentes de zero
	if(delta >= 0 && a != 0)
	{
		x1 = (-b - sqrt(delta)) / (2 * a);//Equação da Primeira Raíz

		x2 = (-b + sqrt(delta)) / (2 * a);//Equação da Segunda Raiz

		return 0;//Retorna a 0
	}

	else//Caso contrário...
	{
		return 1;//Retorna a 1
	}
}

//Função Principal
int main()
{
	
	//Variáveis
	float x, y, z;
	float r1 = 0, r2 = 0;
	float calc;

	//Entrada de Dados
	cin >> x >> y >> z;

	//Chamando a Função das Raízes
	calc = calc_raizes(x, y, z, r1, r2);

	//Controlando as Casas Decimais
	cout << fixed << setprecision(2);
	
	//Caso o valor retornado da Função das Raízes seja 0...
	if(calc == 0)
	{
		if (r1 != r2)//Caso as raízes sejam diferentes...
		{
			if(r1 < r2)//Se as primeira raíz for maior que a segunda...
			{
				cout << "x1 = " << r1 << endl;
				cout << "x2 = " << r2 << endl;
			}
			else//Caso contrário...
			{
				cout << "x2 = " << r2 << endl;
				cout << "x1 = " << r1 << endl;
			}
		}
		else if (r1 == r2)//As raízes sejam iguais...
		{
			cout << "x = " << r2 << endl;
		}	
		
	}
	
	else//Caso o valor retornado da Função das Raízes seja 1
	{
		cout << "Nao ha raizes reais" << endl;
	}
	
	return 0;
}

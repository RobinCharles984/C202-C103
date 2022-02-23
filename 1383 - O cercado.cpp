//Bibliotecas
#include <iostream>
#include <iomanip>
#include <cmath>

//Abreviações
using namespace std;

//Função Calculando a Distância
float dist(int XA, int YA, int XB, int YB)
{
	float d;
	d = sqrt(pow(XB-XA, 2) + pow(YB-YA, 2)) * 4;
	
	return d;
}

//Função Principal
int main()
{
	//Variáveis
	int x[50], y[50];
	int xa, ya;
	int xb, yb;
	float distancia;

	//Entrando com os valores de X e Y em repetição
	for(int i = 0; i < 100; i++)
	{
		cin >> x[i];
		cin >> y[i];
		
		if(i == 0)
		{
			xa = x[i];
			ya = y[i];
		}
		
		if(i == 1)
		{
			xb = x[i];
			yb = y[i];
		}
		
		if(x[i] == 0 && y[i] == 0)
			break;
	}

	//Chamando a Função
	distancia = dist(xa, ya, xb, yb);
	
	//Imprimindo a Distância
	cout << fixed << setprecision(2);
	cout << distancia << endl;
	
	return 0;
}

//Bibliotecas
#include <iostream>
#include <iomanip>
#include <cmath>

//Abreviações
using namespace std;

//Função Principal
int main(){
	
	//Variáveis(coloquei muita mesmo, vai chorar?)
	double x1, x2, y1, y2, distancia, p1, p2;
	cout << fixed << setprecision(4);//Casas Decimais

	cin >> x1 >> y1 >> x2 >> y2;//Entrada de Dados
	
	//Na formula, eu resolvi separar o (x2 - x1)^2 e o (y2 - y1)^2 pra ficar mais facil de entender
	p1 = pow(x2 - x1, 2);
	p2 = pow(y2 - y1, 2);
	distancia = sqrt(p1 + p2);//Equação que ta pedindo pra usar

	cout << distancia << endl;//Saída de Dados
	
	return 0;	
}
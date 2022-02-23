#include<iostream> //Entrada e saída
#include<cmath> //Comandos matemáticos
#include<iomanip> //Manipulação das casas decimais

using namespace std;

int main(){
	
	int x, y;
	
	x = 10;
	y = 6;
	
	float resultado;
	
	//Funções básicas: +, -, *, /, %
	resultado = x + y;
	cout<<"Soma: "<<resultado<<endl;
	
	resultado = x - y;
	cout<<"Subtracao: "<<resultado<<endl;
	
	resultado = x * y;
	cout<<"Multiplicacao: "<<resultado<<endl;
	
	resultado = (x*1.0) / y;
	cout<<"Divisao: "<<resultado<<endl;
	
	//Restringindo casas decimais
	cout<<fixed<<setprecision(2);
	
	//Funções do cmath
	float potencia = pow(x,3); //(base, expoente)
	cout<<x<<" elevado a 3: "<<potencia<<endl;
	
	float raiz = sqrt(x);
	cout<<"Raiz: "<<raiz<<endl;
	

	//Arredondamento
	cout<<"Raiz arredondada para baixo: "<<floor(raiz)<<endl;
	cout<<"Raiz arredondada para cima: "<<ceil(raiz)<<endl;
	
	
	
	return 0;
}
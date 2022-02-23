#include<iostream> //Entrada e sa�da
#include<cmath> //Comandos matem�ticos
#include<iomanip> //Manipula��o das casas decimais

using namespace std;

int main(){
	
	int x, y;
	
	x = 10;
	y = 6;
	
	float resultado;
	
	//Fun��es b�sicas: +, -, *, /, %
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
	
	//Fun��es do cmath
	float potencia = pow(x,3); //(base, expoente)
	cout<<x<<" elevado a 3: "<<potencia<<endl;
	
	float raiz = sqrt(x);
	cout<<"Raiz: "<<raiz<<endl;
	

	//Arredondamento
	cout<<"Raiz arredondada para baixo: "<<floor(raiz)<<endl;
	cout<<"Raiz arredondada para cima: "<<ceil(raiz)<<endl;
	
	
	
	return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

//Struct para as notas
struct notas
{
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float media;	
};

//Fun��o Principal
int main(int argc, char** argv)
{
	notas *n;//Declarando ponteiro da struct
	
	n = new notas;//Alocando mem�ria
	
	//Entrando com as notoas
	cin >> n->nota1;
	cin >> n->nota2;
	cin >> n->nota3;
	cin >> n->nota4;
	
	//Calculando a m�dia
	n->media = (n->nota1 + n->nota2 + n->nota3 + n->nota4) / 4;
	
	//Sa�da de Dados
	cout << fixed << setprecision(2);//Controle de casas decimais
	cout << n->media;
	
	delete n; 
	
	return 0;
}
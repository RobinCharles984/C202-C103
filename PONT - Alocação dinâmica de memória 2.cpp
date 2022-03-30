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

//Função Principal
int main(int argc, char** argv)
{
	notas *n;//Declarando ponteiro da struct
	int tam;
	float mediaFinal = 0;

	cin >> tam;//Declarando tamanho do vetor

	n = new notas[tam];//Alocando memória

	//Entrando com os valores das notas
	for(int i = 0; i < tam; i++)
	{
		cin >> n[i].nota1;
		cin >> n[i].nota2;	
		cin >> n[i].nota3;
		cin >> n[i].nota4;
		n[i].media = (n[i].nota1 + n[i].nota2 + n[i].nota3 + n[i].nota4) / 4;
	}
	
	//Somando as médias
	for(int i = 0; i < tam; i++)
	{
		mediaFinal = n[i].media + n[i-1].media; 
	}
	
	//Saída de Dados
	cout << fixed << setprecision(2);//Controle de casas decimais
	cout << mediaFinal/tam << endl;//Média Final

	delete [] n;

	return 0;
}

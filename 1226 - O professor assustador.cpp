#include<iostream>
#include<iomanip>

using namespace std;

float media(int notas[], int nAlunos)
{
	float soma = 0;
	
	for(int i = 0; i < nAlunos; i++)
	{
		soma = soma + notas[i];
	}
	
	soma = soma / nAlunos;
	
	return soma;
}

int main(){
	int n;
	int _notas[50];
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> _notas[i];
	}
	
	cout << fixed << setprecision(2) << "Media da turma = " << media(_notas, n) << endl;
	
	return 0;
}
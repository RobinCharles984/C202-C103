#include<iostream>
#include<iomanip>

using namespace std;

struct aluno{
	
	int matricula;
	double nota1, nota2;   	
	
};

int main(){
	aluno dados;
	
	cin >> dados.matricula;
	cin >> dados.nota1;
	cin >> dados.nota2;
	
	cout << "Matricula do aluno: " << dados.matricula << endl;
	cout << fixed << setprecision(2);
	cout << "Nota da primeira prova: " << dados.nota1 << endl;
	cout << "Nota da segunda prova: " << dados.nota2 << endl;	
		
	return 0;
}
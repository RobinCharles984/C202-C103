#include <iostream>
#include <iomanip>

using namespace std;

struct notas{
	int matricula;
	double prova1;
	double prova2;
	double media;
};

int main(){
	notas aluno;
	
	cin >> aluno.matricula;
	cin >> aluno.prova1;
	cin >> aluno.prova2;
	
	aluno.media = (2 * aluno.prova1 + 3 * aluno.prova2)/5;
	
	cout << "Matricula do aluno: " << aluno.matricula << endl;
	cout << fixed << setprecision(2);
	cout << "Nota da primeira prova: " << aluno.prova1 << endl;
	cout << "Nota da segunda prova: " << aluno.prova2 << endl;
	cout << "Media: " << aluno.media << endl;
	
	return 0;
}
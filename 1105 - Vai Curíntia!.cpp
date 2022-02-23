#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int alunos;
	char nome[20];
	float n1, n2, n3, n4, media;
	
	cin >> alunos;
	
	for(int i = 0; i < alunos; i++)
	{
		cin.ignore();
		cin.getline(nome, 20);
		cin >> n1 >> n2 >> n3 >> n4;
		
		media = 1.0*(n1 + 2*n2 + 3*n3 + 4*n4)/10;
		
		cout << fixed << setprecision(2) << nome << ": " << media << endl;
	}
	
	return 0;
}
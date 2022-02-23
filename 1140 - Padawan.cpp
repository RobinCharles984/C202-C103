#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct padawan
{
	char nome[50];
	int pontos[50];
	char melhor[50];
	int maisPontos;
};

int main()
{
	padawan testes;
	int n;
	int totalPontos[50];
	float mediaTurma = 0;
	
	cin >> n;
		
	for(int i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(testes.nome, 50);
		cin >> testes.pontos[i];
		
		mediaTurma = mediaTurma + testes.pontos[i];
		
		if(i == 0)
		{
			totalPontos[i] = 0;
			totalPontos[i] = totalPontos[i] + testes.pontos[i];
			testes.maisPontos = totalPontos[i];
			strcpy(testes.melhor, testes.nome);
		}
		
		if(totalPontos[i] < testes.maisPontos)
		{
			totalPontos[i] = 0;
			totalPontos[i] = totalPontos[i] + testes.pontos[i];
			testes.maisPontos = totalPontos[i];
			strcpy(testes.melhor, testes.nome);
		}
	}
	
	mediaTurma = mediaTurma / n;
	
	cout << "Padawan com mais pontos: " << testes.melhor << endl;
	cout << "Pontos: " << testes.maisPontos << endl;
	cout << fixed << setprecision(2) << "Media da turma: " << mediaTurma << " pontos" << endl;
		
	return 0;
}
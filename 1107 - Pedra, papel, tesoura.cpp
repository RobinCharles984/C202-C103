#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int n;
	char jogadorA[10], jogadorB[10];
	
	cin >> n;
	cin.ignore();
	
	for(int i = 0; i < n; i++)
	{
		cin.getline(jogadorA, 10);
		cin.getline(jogadorB, 10);
		//////////Pedra e Papel/////////////
		if(strcmp(jogadorA, "papel") == 0 && strcmp(jogadorB, "pedra") == 0)
		{
			cout << "Jogador A" << endl;
		}
		
		else if(strcmp(jogadorA, "pedra") == 0 && strcmp(jogadorB, "papel") == 0)
		{
			cout << "Jogador B" << endl;
		}
		///////////////////////////////////
		
		////////Pedra e Tesoura///////////
		if(strcmp(jogadorA, "tesoura") == 0 && strcmp(jogadorB, "pedra") == 0)
		{
			cout << "Jogador B" << endl;
		}
		
		else if(strcmp(jogadorA, "pedra") == 0 && strcmp(jogadorB, "tesoura") == 0)
		{
			cout << "Jogador A" << endl;
		}
		/////////////////////////////////
		
		///////Papel e Tesoura///////////
		if(strcmp(jogadorA, "papel") == 0 && strcmp(jogadorB, "tesoura") == 0)
		{
			cout << "Jogador A" << endl;
		}
		
		else if(strcmp(jogadorA, "tesoura") == 0 && strcmp(jogadorB, "papel") == 0)
		{
			cout << "Jogador B" << endl;
		}
		
		/////////Empate/////////////////
		else if(strcmp(jogadorA, jogadorB) == 0)
			cout << "Empate" << endl;
	}
	
	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	int golGremio, golInter, vitGremio = 0, vitInter = 0, _1ou2, empates = 0, grenais = 0;
	
	do{
		cin >> golInter >> golGremio;
		
		if(golGremio > golInter)
		{
			vitGremio++;
			grenais++;
		}
		else if(golGremio < golInter)
		{
			vitInter++;
			grenais++;
		}
		else if(golGremio == golInter)
		{
			empates++;
			grenais++;
		}
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> _1ou2;
		if(_1ou2 > 2 || _1ou2 < 1)
			cout << "Por favor, não zombe do algorítmo!" << endl;
	}
	while (_1ou2 != 2);
	
	cout << grenais << " grenais" << endl;
	cout << "Inter:" << vitInter << endl;
	cout << "Gremio:" << vitGremio << endl;
	cout << "Empates:" << empates << endl;
	
	if(vitInter > vitGremio)
		cout << "Inter venceu mais" << endl;
	else
		cout << "Gremio venceu mais" << endl;
		
	return 0;
}
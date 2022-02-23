#include <iostream>
using namespace std;

int main(){
	int DDD;
	
	cin >> DDD;
	
	if(DDD ==61)
		cout << "Brasilia" << endl;
	if(DDD ==71)
		cout << "Salvador" << endl;
	if(DDD ==11)
		cout << "Sao Paulo" << endl;
	if(DDD ==21)
		cout << "Rio de Janeiro" << endl;
	if(DDD ==32)
		cout << "Juiz de Fora" << endl;
	if(DDD ==19)
		cout << "Campinas" << endl;
	if(DDD ==27)
		cout << "Vitoria" << endl;
	if(DDD ==31)
		cout << "Belo Horizonte" << endl;
	else if(DDD != 31 && DDD != 27 && DDD != 19 && DDD != 32 && DDD != 21 && DDD != 11 && DDD != 71 && DDD != 61)
	{
		cout << "DDD nao cadastrado" << endl;
	}
	
	return 0;
}
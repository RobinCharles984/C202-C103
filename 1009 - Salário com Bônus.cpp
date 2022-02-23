#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	char nome[30];
	double sFixo, vendas;
	double total;
	
	cin.getline(nome, 30);
	cin >> sFixo >> vendas;
	
	vendas = vendas * .15;
	
	total = sFixo + vendas;
	
	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << total << endl;
	
	return 0;
}
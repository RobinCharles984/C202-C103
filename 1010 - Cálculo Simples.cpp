#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int cod1, cod2;
	int n1, n2;
	float preco1, preco2;
	float total;
	
	cin >> cod1 >> n1 >> preco1;
	cin >> cod2 >> n2 >> preco2;
	
	preco1 = preco1 * n1;
	preco2 = preco2 * n2;
	
	total = preco1 + preco2;
	
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << total << endl;
	
	return 0;
}
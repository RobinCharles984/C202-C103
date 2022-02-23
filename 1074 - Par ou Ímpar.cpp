#include <iostream>

using namespace std;

int main(){
	int n, x;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(x > 0 && x % 2 == 0)//Pares Positivos
			cout << "EVEN POSITIVE" << endl;
		
		else if(x < 0 && x % 2 == 0)//Pares Negativos
			cout << "EVEN NEGATIVE" << endl;
		
		else if(x > 0 && x % 2 != 0)//Impares Positivos
			cout << "ODD POSITIVE" << endl;
		
		else if(x < 0 && x % 2 != 0)//Impares Negativos
			cout << "ODD NEGATIVE" << endl;
		
		else if(x == 0)//Zeros
			cout << "NULL" << endl;
	}
	
	return 0;
}
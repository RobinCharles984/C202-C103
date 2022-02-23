#include <iostream>
using namespace std;

int sinal(int n)
{
	if(n == 1)
		cout << "Positivo" << endl;
	
	else if(n == -1)
		cout << "Negativo" << endl;
	
	else 
		cout << "Zero" << endl;
	
	return n;
}

int main(){
	int x;
	int result;
	
	cin >> x;
	
	if(x > 0)
		result = 1;
		
	else if(x < 0)
		result = -1;
		
	else	
		result = 0;
	
	sinal(result);
	
	return 0;
}
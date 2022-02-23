#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	for (int i = 0; i <= n; i++){
		if (i % 2 == 0 && i != 0){
			cout << fixed << setprecision(0) << i << "^2 = " << pow(i, 2) << endl;
		}
	}
		   	   	   	   	   	   	   	
	return 0;
}
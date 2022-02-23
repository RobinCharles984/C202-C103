#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double nota, media;
	
	media = 0;
	
	for(int i = 0; i < 2; i++){
		
		cin >> nota;
		
		while(nota < 0 || nota > 10){
			cout << "nota invalida" << endl;
			cin >> nota;
		}
		media = media + nota;
	}
	
	cout << fixed << setprecision(2) << "media = " << media/2 << endl;

	return 0;
}
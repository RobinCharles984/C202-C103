#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void media(int x, int y, float &m)
{
	m = sqrt(x * y) * 1.0;
	cout << fixed << setprecision(2) << "Media: " << m << endl;
}

int main(){
	int a, b;
	float md = 0;
	
	cin >> a >> b;
	
	media(a, b, md);
	
	return 0;
}
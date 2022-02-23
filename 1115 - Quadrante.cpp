#include <iostream>,
#include <iomanip>
using namespace std;

int main()
{
	int x, y;
	
	cin >> x >> y;
	
	while(x != 0 || y != 0){
		if(x > 0 && y > 0)
		{
			cout << "primeiro" << endl;
			cin >> x >> y;
		}
		
		else if(x < 0 && y > 0)
		{
			cout << "segundo" << endl;
			cin >> x >> y;
		}
		
		else if(x < 0 && y < 0)
		{
			cout << "terceiro" << endl;
			cin >> x >> y;
		}
		
		else if(x > 0 && y < 0)
		{
			cout << "quarto" << endl;
			cin >> x >> y;
		}
	}

	return 0;
}

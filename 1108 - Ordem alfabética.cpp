#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char nome1[15], nome2[15], nome3[15];
	
	cin.getline(nome1, 15);
	cin.getline(nome2, 15);
	cin.getline(nome3, 15);
	
	if(strcmp(nome1, nome2) < 0 && strcmp(nome1, nome3)<0)
	{
		if(strcmp(nome2, nome3) < 0)
		{
			cout << nome1 << " " << nome2 << " " << nome3 << endl;
		}
		else
		{
			cout << nome1 << " " << nome3 << " " << nome2 << endl;
		}
	}
	
	else if(strcmp(nome2, nome1) < 0 && strcmp(nome2, nome3)<0)
	{
		if(strcmp(nome1, nome3) < 0)
		{
			cout << nome2 << " " << nome1 << " " << nome3 << endl;
		}
		else
		{
			cout << nome2 << " " << nome3 << " " << nome1 << endl;
		}
	}
	
	else if(strcmp(nome3, nome1) < 0 && strcmp(nome3, nome2)<0)
	{
		if(strcmp(nome1, nome2) < 0)
		{
			cout << nome3 << " " << nome1 << " " << nome2 << endl;
		}
		else
		{
			cout << nome3 << " " << nome2 << " " << nome1 << endl;
		}
	}
	
	return 0;
}
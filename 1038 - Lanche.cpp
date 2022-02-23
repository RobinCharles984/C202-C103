#include <iostream>
#include <iomanip>

 

using namespace std;

 

int main(){
    int codigo, quantidade;
    
    cin >> codigo >> quantidade;
    
    cout << fixed << setprecision(2);
    
    if (codigo == 1)
        cout << "Total: R$ " << quantidade * 4.00 << endl; 
    if (codigo == 2)
        cout << "Total: R$ " << quantidade * 4.50 << endl; 
    if (codigo == 3)
        cout << "Total: R$ " << quantidade * 5.00 << endl; 
    if (codigo == 4)
        cout << "Total: R$ " << quantidade * 2.00 << endl; 
    if (codigo == 5)
        cout << "Total: R$ " << quantidade * 1.50 << endl; 
    
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int positivos;
    int negativos;
    int i;
    float x;
    float soma;
    float media;

    positivos = 0;
    negativos = 0;
    soma = 0;

    for (i = 1; i <= 6; i++)
    {
        cin >> x;
        if (x < 0)
            negativos = negativos + 1;
        else if (x > 0){
            positivos = positivos + 1;
            soma = soma + x;}
    }
    
    media = (soma * 1.0) / positivos;
    
    cout << positivos << " valores positivos" << endl;
    cout << fixed << setprecision(1);
    cout << media << endl;

 

    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;




int main(){

int numero;
cin >> (numero);

int ano = numero / 365;
int restoAno = numero % 365;
int restoMes = restoAno % 30;
int mes = restoAno / 30;
int dia = restoMes % 30;

cout << ano << " ano(s)" << endl;
cout << mes << " mes(es)" << endl;
cout << dia << " dia(s)" << endl;

}
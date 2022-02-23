//Biblioteca
#include <iostream> //Entrada e saída
#include <locale> //Permitir usar acento

using namespace std; //Facilitar entrada e saída

//Programa principal
int main(){
	
	setlocale(LC_ALL,"Portuguese"); //Habilitar acento
	
	//Comentário simples
	
	/* Comentário
	de várias linhas
	*/
	
	//Saída - escrever na tela
	cout<<"Hello World!"<<endl;
	cout<<"Bem vindos C202"<<endl;
	
	//Variáveis
	//tipo nome; ou tipo nome = valor;
	//int idade;
	int idade = 20;
	char nome[50];
	
	//Saída com variável
	cout<<"A idade eh: "<<idade<<endl;
	
	//Entrada de dados
	cout<<"Digite sua idade: ";
	cin>>idade;
	cout<<"A idade do usuario eh: "<<idade<<endl;

	cout<<"Diigite seu nome: ";
	cin.ignore(); //Utilizar antes do cin.getline() - depois de ler numero e antes de nome
	cin.getline(nome, 50);
	cout<<"Ola "<<nome<<endl;
	
	//Ler dois numeros
	int x, y;
	cin>>x>>y;
	cout<<"X = "<<x<<" Y = "<<y;
	
	return 0;
}



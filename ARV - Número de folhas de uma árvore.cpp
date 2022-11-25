#include <iostream>

using namespace std;

//Struct Arvore Binaria
struct treenode
{
	int info;
	treenode *esq;
	treenode *dir;
};

typedef treenode* treenodeptr;

//Funcao da Soma das Folhas
void somaFolhas (treenodeptr arvore, int &s1)
{
	if (arvore != NULL)
	{
		somaFolhas(arvore->esq, s1);
		somaFolhas(arvore->dir, s1);
		if(arvore->esq == NULL && arvore->dir == NULL)
			s1++;
	}
}

//Funcao insere
void tInsere(treenodeptr &p, int x)
{
	if (p == NULL)
	{
		p = new treenode;
		p->info = x;
		p->esq = NULL;
		p->dir = NULL;
	}
	else if (x < p->info)
		tInsere(p->esq, x);
	else
		tInsere(p->dir, x);
}


//Funcao Soma da Arvore
int contaFolhas(treenodeptr arvore)
{
	int s1= 0;
	somaFolhas(arvore, s1);
	return s1;
}

//Destruir Arvore
void tDestruir (treenodeptr &arvore)
{
    if (arvore != NULL)
    {
        tDestruir(arvore->esq);
        tDestruir(arvore->dir);
        delete arvore;
    }
    arvore = NULL;
}

//Funcao main
int main()
{
	//Variaveis
	treenodeptr p = NULL;
	treenodeptr tree = NULL;  
	int n; 
	int input;
	int x; 

	//Inserindo valor em arvore
	cin >> x;
	while(x != -1)
	{
		tInsere(tree, x);
		cin >> x;
	}

	
	//Calculando a Soma da Arvore
	cout << contaFolhas(tree) << endl;

    //Destruindo Arvore
    tDestruir(tree);

	return 0;
}

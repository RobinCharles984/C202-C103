#include <iostream>
#include <iomanip>

using namespace std;

//Struct Arvore Binaria
struct treenode
{
	int info;
	treenode *esq;
	treenode *dir;
};

typedef treenode* treenodeptr;

//Funcao Soma
void soma(treenodeptr arvore, float &s1, float &n)
{
	if (arvore != NULL)
	{
		soma(arvore->esq, s1, n);
		soma(arvore->dir, s1, n);
		s1 += arvore->info;
		n++;
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


//Funcao Media
float media(treenodeptr arvore)
{
	float s1 = 0;
	float m = 0;
	soma(arvore, s1, m);
	return s1 / m;
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
	int x; 

	//Inserindo valor em arvore
	cin >> x;
	while(x != -1)
	{
		tInsere(tree, x);
		cin >> x;
	}

	//Saindo com a media
	cout << fixed << setprecision(2);
	cout << "Media: " << media(tree) << endl;

    //Destruindo Arvore
    tDestruir(tree);

	return 0;
}

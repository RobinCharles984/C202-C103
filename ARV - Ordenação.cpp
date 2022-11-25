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

//Funcao da Arvore em Ordem
void emOrdem (treenodeptr arvore)
{
	if (arvore != NULL)
	{
		emOrdem(arvore->dir);
		cout << arvore->info << " ";
		emOrdem(arvore->esq);
	}
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

	//Saindo em ordem decrescente
	emOrdem(tree);
    
    //Destruindo Arvore
    tDestruir(tree);

	return 0;
}

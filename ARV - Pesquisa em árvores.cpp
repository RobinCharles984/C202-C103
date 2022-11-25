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

//Funcao Pesquisa
treenodeptr tPesq(treenodeptr p, int x)
{
	if (p == NULL)
		return NULL;

	else if (x == p->info)
		return p;

	else if(x < p->info)
		return tPesq(p->esq, x);

	else
		return tPesq(p->dir, x);
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

	//Valor a ser inserido na arvore
	cin >> n;

	//Inserindo valor em arvore
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		tInsere(tree, input);
	}

	//Valor a ser pesquisado na arvore
	cin >> x;
	p = tPesq(tree, x);

	//Impressao de Dados
	if(p == NULL)
		cout << "Elemento nao encontrado" << endl;
	else
		cout << "Encontrado" << endl;
    
    //Destruindo Arvore
    tDestruir(tree);
    
	return 0;
}

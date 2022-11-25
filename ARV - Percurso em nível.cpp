#include <iostream>
#include <list>

using namespace std;

//Structs Arvore Binaria
struct treenode
{
	int info;
	treenode *esq;
	treenode *dir;
};
typedef treenode* treenodeptr;

//Funcao Destruir
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

//Funcao EmNivel
void emNivel(treenodeptr t)
{
	treenodeptr n;
	list<treenodeptr> q;
	if (t != NULL)
	{
		q.push_back(t);
		while (!q.empty())
		{
			n = *q.begin();
			q.pop_front();
			if (n->esq != NULL)
				q.push_back(n->esq);;
			if (n->dir != NULL)
				q.push_back(n->dir);
			cout << n->info << " ";
		}
	}
}

int main(int argc, char** argv)
{
	//Variaveis
    treenodeptr tree = NULL;
	int x;

	//Entrando com valores na arvore
	cin >> x;
	while(x != -1)
	{
		tInsere(tree, x);
		cin >> x;
	}

	//Funcao EmNivel
	emNivel(tree);

	//Destruindo Arvore
	tDestruir(tree);
	return 0;
}

	//Bibliotecas
	#include <iostream>
	
	//Abreviações
	using namespace std;
	
	//Função Principal
	int main()
	{
	
		//Variáveis//
		int elementos[50];//Elementos a serem digitados
		int m = 0;
		int procurado;//Elemento a ser encontrado
		int flag = 0;
		//////////////
	
		cin >> elementos[m];
	
		//Enquanto "elementos" for diferente de 0...
		while(elementos[m] != 0)
	    {
	    	m++;
	        cin >> elementos[m];
	    }
	
		//Entrada de Dados para procurar o elemento desejado
		cin >> procurado;
	
		for(int i = 0; i < m; i++)
		{
			//Se encontrar...
			if(elementos[i] == procurado)
			{
				cout << "Elemento " << elementos[i] << " encontrado na posicao " << i << endl;
				flag++;
			}
		}
		
		if(flag == 0)//Se não encontrar...
			{
				cout << "Elemento " << procurado << " nao foi encontrado" << endl;
			}
	
		return 0;
	}

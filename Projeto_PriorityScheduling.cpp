//Bibliotecas
#include <iostream>
#include <iomanip>
#include <fstream>

//Abrevia��es
using namespace std;

//Struct de Dados
struct dados
{
    int prio;//Vari�vel para as Prioridades
    int te;//Vari�vel para Tempo de Execu��o
    int processo;//Vari�vel para os Processos
};

//Fun��o Principal
int main()
{
	//Vari�veis
    ifstream arq;//Vari�vel do Arquivo
    dados ordem[50];//Vari�vel da Struct "dados"
    char nomeArq[50];//Vari�vel para entrar com o nome do Arquivo
    int n = 0;//Vari�vel Contadora
    int x = 0;//Vari�vel x para calcular Tempo de Espera
    float tm = 0;//Vari�vel para o Tempo M�dio de Espera
    float soma = 0;
    float aux = 0;//Vari�vel auxiliar para calcular Tempo de Espera
    
    //Entrada do nome do Arquivo
    cin.getline(nomeArq, 50);
    
    //Abrindo o arquivo
    arq.open(nomeArq, ifstream::in);
    
    //Lendo at� o final do arquivo
    while(!arq.eof())
    {
    	//Recebendo valores dos arquivos
        arq >> ordem[n].processo;
        arq >> ordem[n].te;
        arq >> ordem[n].prio;
        n++;
    }
    
    arq.close();//Fechando o Arquivo
    
    //Imprimindo os Processos por prioridade e seu tempo em caracteres
	for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(ordem[j].prio == i + 1)
            {
                cout << "P" << j + 1;
                for(int k = 0; k < ordem[j].te; k++)
                {
                    cout << "-";
                }
                //Calculando o tempo de espera total
                aux = aux + x;
                soma = soma + aux;
                x = ordem[j].te;
            }
        }
    }
    cout << endl;
    
    //Calculando o Tempo M�dio de Espera
    tm = soma/n;
    
    //Imprimindo o Tempo M�dio de Espera
    cout << fixed << setprecision(1);//Controle de Casas Decimais
    cout << "Tempo medio de espera: " << tm << " ms" << endl;
    
    return 0;
}
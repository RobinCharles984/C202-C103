//Bibliotecas
#include <iostream>
#include <iomanip>
#include <fstream>

//Abreviações
using namespace std;

//Struct de Dados
struct dados
{
    int prio;//Variável para as Prioridades
    int te;//Variável para Tempo de Execução
    int processo;//Variável para os Processos
};

//Função Principal
int main()
{
	//Variáveis
    ifstream arq;//Variável do Arquivo
    dados ordem[50];//Variável da Struct "dados"
    char nomeArq[50];//Variável para entrar com o nome do Arquivo
    int n = 0;//Variável Contadora
    int x = 0;//Variável x para calcular Tempo de Espera
    float tm = 0;//Variável para o Tempo Médio de Espera
    float soma = 0;
    float aux = 0;//Variável auxiliar para calcular Tempo de Espera
    
    //Entrada do nome do Arquivo
    cin.getline(nomeArq, 50);
    
    //Abrindo o arquivo
    arq.open(nomeArq, ifstream::in);
    
    //Lendo até o final do arquivo
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
    
    //Calculando o Tempo Médio de Espera
    tm = soma/n;
    
    //Imprimindo o Tempo Médio de Espera
    cout << fixed << setprecision(1);//Controle de Casas Decimais
    cout << "Tempo medio de espera: " << tm << " ms" << endl;
    
    return 0;
}
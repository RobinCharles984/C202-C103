#include <iostream>
#include <cstring>

using namespace std;

struct numero
{
	char n[10];
};

int main()
{
	int mat0[5][3];
	int mat1[5][3];
	int mat2[5][3];
	int mat3[5][3];
	int mat4[5][3];
	int mat5[5][3];
	int mat6[5][3];
	int mat7[5][3];
	int mat8[5][3];
	int mat9[5][3];
	int mat[5][3];
	int l, c;
	bool flag = true;
	
	numero num[10];
	strcpy(num[0].n, "ZERO");
	strcpy(num[1].n, "UM");
	strcpy(num[2].n, "DOIS");
	strcpy(num[3].n, "TRES");
	strcpy(num[4].n, "QUATRO");
	strcpy(num[5].n, "CINCO");
	strcpy(num[6].n, "SEIS");
	strcpy(num[7].n, "SETE");
	strcpy(num[8].n, "OITO");
	strcpy(num[9].n, "NOVE");
//Declarando Valores da Matríz 0
	mat0[0][0] = 0;
	mat0[0][1] = 0;
	mat0[0][2] = 0;
	mat0[1][0] = 0;
	mat0[1][1] = 1;
	mat0[1][2] = 0;
	mat0[2][0] = 0;
	mat0[2][1] = 1;
	mat0[2][2] = 0;
	mat0[3][0] = 0;
	mat0[3][1] = 1;
	mat0[3][2] = 0;
	mat0[4][0] = 0;
	mat0[4][1] = 0;
	mat0[4][2] = 0;
//Declarando Valores da Matríz 1
	mat1[0][0] = 1;
	mat1[0][1] = 1;
	mat1[0][2] = 0;
	mat1[1][0] = 1;
	mat1[1][1] = 1;
	mat1[1][2] = 0;
	mat1[2][0] = 1;
	mat1[2][1] = 1;
	mat1[2][2] = 0;
	mat1[3][0] = 1;
	mat1[3][1] = 1;
	mat1[3][2] = 0;
	mat1[4][0] = 1;
	mat1[4][1] = 1;
	mat1[4][2] = 0;
//Declarando Valores da Matríz 2
	mat2[0][0] = 0;
	mat2[0][1] = 0;
	mat2[0][2] = 0;
	mat2[1][0] = 1;
	mat2[1][1] = 1;
	mat2[1][2] = 0;
	mat2[2][0] = 0;
	mat2[2][1] = 0;
	mat2[2][2] = 0;
	mat2[3][0] = 0;
	mat2[3][1] = 1;
	mat2[3][2] = 1;
	mat2[4][0] = 0;
	mat2[4][1] = 0;
	mat2[4][2] = 0;
//Declarando Valores da Matríz 3
	mat3[0][0] = 0;
	mat3[0][1] = 0;
	mat3[0][2] = 0;
	mat3[1][0] = 1;
	mat3[1][1] = 1;
	mat3[1][2] = 0;
	mat3[2][0] = 0;
	mat3[2][1] = 0;
	mat3[2][2] = 0;
	mat3[3][0] = 1;
	mat3[3][1] = 1;
	mat3[3][2] = 0;
	mat3[4][0] = 0;
	mat3[4][1] = 0;
	mat3[4][2] = 0;
//Declarando Valores da Matríz 4
	mat4[0][0] = 0;
	mat4[0][1] = 1;
	mat4[0][2] = 0;
	mat4[1][0] = 0;
	mat4[1][1] = 1;
	mat4[1][2] = 0;
	mat4[2][0] = 0;
	mat4[2][1] = 0;
	mat4[2][2] = 0;
	mat4[3][0] = 1;
	mat4[3][1] = 1;
	mat4[3][2] = 0;
	mat4[4][0] = 1;
	mat4[4][1] = 1;
	mat4[4][2] = 0;
//Declarando Valores da Matríz 5
	mat5[0][0] = 0;
	mat5[0][1] = 0;
	mat5[0][2] = 0;
	mat5[1][0] = 0;
	mat5[1][1] = 1;
	mat5[1][2] = 1;
	mat5[2][0] = 0;
	mat5[2][1] = 0;
	mat5[2][2] = 0;
	mat5[3][0] = 1;
	mat5[3][1] = 1;
	mat5[3][2] = 0;
	mat5[4][0] = 0;
	mat5[4][1] = 0;
	mat5[4][2] = 0;
//Declarando Valores da Matríz 6
	mat6[0][0] = 0;
	mat6[0][1] = 0;
	mat6[0][2] = 0;
	mat6[1][0] = 0;
	mat6[1][1] = 1;
	mat6[1][2] = 1;
	mat6[2][0] = 0;
	mat6[2][1] = 0;
	mat6[2][2] = 0;
	mat6[3][0] = 0;
	mat6[3][1] = 1;
	mat6[3][2] = 0;
	mat6[4][0] = 0;
	mat6[4][1] = 0;
	mat6[4][2] = 0;
//Declarando Valores da Matríz 7
	mat7[0][0] = 0;
	mat7[0][1] = 0;
	mat7[0][2] = 0;
	mat7[1][0] = 1;
	mat7[1][1] = 1;
	mat7[1][2] = 0;
	mat7[2][0] = 1;
	mat7[2][1] = 1;
	mat7[2][2] = 0;
	mat7[3][0] = 1;
	mat7[3][1] = 1;
	mat7[3][2] = 0;
	mat7[4][0] = 1;
	mat7[4][1] = 1;
	mat7[4][2] = 0;
//Declarando Valores da Matríz 8
	mat8[0][0] = 0;
	mat8[0][1] = 0;
	mat8[0][2] = 0;
	mat8[1][0] = 0;
	mat8[1][1] = 1;
	mat8[1][2] = 0;
	mat8[2][0] = 0;
	mat8[2][1] = 0;
	mat8[2][2] = 0;
	mat8[3][0] = 0;
	mat8[3][1] = 1;
	mat8[3][2] = 0;
	mat8[4][0] = 0;
	mat8[4][1] = 0;
	mat8[4][2] = 0;
//Declarando Valores da Matríz 9
	mat9[0][0] = 0;
	mat9[0][1] = 0;
	mat9[0][2] = 0;
	mat9[1][0] = 0;
	mat9[1][1] = 1;
	mat9[1][2] = 0;
	mat9[2][0] = 0;
	mat9[2][1] = 0;
	mat9[2][2] = 0;
	mat9[3][0] = 1;
	mat9[3][1] = 1;
	mat9[3][2] = 0;
	mat9[4][0] = 1;
	mat9[4][1] = 1;
	mat9[4][2] = 0;
	
	//Entrando com Valores da Matriz em LOOP
	while(flag)
	{
		flag = false;
		for(l = 0; l < 5; l++)
		{
			for(c = 0; c < 3; c++)
			{
				cin >> mat[l][c];
				if(mat[l][c] == 1)
					flag = true;
			}
		}
		int vet[10];
		for(int i = 0; i < 10; i++)
		{
			vet[i] = 0;
		}
//Imprimindo as Matrizes Encontradas
		for(l = 0; l < 5; l++)
		{
			for(c = 0; c < 3; c++)
			{
				if(mat[l][c] == mat0[l][c])
				{
					vet[0]++;
				}

				if(mat[l][c] == mat1[l][c])
				{
					vet[1]++;
				}

				if(mat[l][c] == mat2[l][c])
				{
					vet[2]++;
				}

				if(mat[l][c] == mat3[l][c])
				{
					vet[3]++;
				}
				
				if(mat[l][c] == mat4[l][c])
				{
					vet[4]++;
				}
				
				if(mat[l][c] == mat5[l][c])
				{
					vet[5]++;
				}
				
				if(mat[l][c] == mat6[l][c])
				{
					vet[6]++;
				}
				
				if(mat[l][c] == mat7[l][c])
				{
					vet[7]++;
				}
				
				if(mat[l][c] == mat8[l][c])
				{
					vet[8]++;
				}
				
				if(mat[l][c] == mat9[l][c])
				{
					vet[9]++;
				}
			}
		}

		for(int i = 0; i <= 9 ; i++)
		{
			if(vet[i] == 15)
				cout << num[i].n << endl;
		}
	}
	return 0;
}

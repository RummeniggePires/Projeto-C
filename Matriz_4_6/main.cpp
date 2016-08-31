#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std ;

//declaracao de vetores

int matrizb[4][6];
int matriza[4][6];
int soma[4][6];
float subtracao[4][6];
//funcao para criacao da matriz a

float matriza()
{
		
		for (int i = 0; i < 3; i++)
		{
		
			for (int x = 0; x < 5; x++)
			{
							
				system("clear");
		
				printf("Digite um valor da matriz A: ");

				scanf("%d", &matriza[i][x]);

				getchar();

			}
		}

	system("clear");

}

//funcao para criacao da matriz b

float matrizb()
{
		
		for (int i = 0; i < 3; i++)
		{
		
			for (int x = 0; x < 5; x++)
			{
							
				system("clear");
		
				printf("Digite um valor da matriz B: ");

				scanf("%d", &matrizb[i][x]);

				getchar();

			}
		}

	system("clear");

}	
//funcao para soma matriz A e B

float soma()
{
	
	for (int i = 0; i < 3; i++)
	{
		for (int x = 0; x < 5; x++)
		{
			soma[i][x] = matriza[i][x]+matrizb[i][x];
		
		printf("\n O valor da soma das matrizes eh: %d", soma[i][x]);
		}
	}
		 
}
//funcao para subtracao matriz A e B

float subtracao()
{
		int	subtracao=0;
	
	for (int i = 0; i < 3; i++)
	{
		for (int x = 0; x < 5; x++)
		{
			subtracao[i][x] = matriza[i][x]-matrizb[i][x];
		
		printf("\n O valor subtracao das matrizes eh: %d", subtracao[i][x]);
		}
	}
		
}
//funcao principal do programa

int main(int argc, char const *argv[])
{

	matriza();
	
	matrizb();
	
	soma();
	
	subtracao();
	
	printf("\n \n");
		
	printf("\n \n");
		
	system("break");

}
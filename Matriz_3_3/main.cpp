#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std ;

//declaracao de vetores

int matriz[3][3];
int linha[3];
int col[3];

//funcao para criacao da matriz

int tabela(){

		for (int i = 0; i < 3; ++i)
		{

			for (int x = 0; x < 3; ++x)
			{

				system("clear");

				printf("Digite um valor: ");

				scanf("%d", &matriz[i][x]);

				getchar();

			}
		}

	system("clear");

}
//funcao para apresentar diagonal principal

int principal()
{
	int	soma=0;

	for (int i = 0; i < 3; ++i){


		soma = soma + matriz[i][i];
	}
	printf("\n O valor da diagonal principal eh: %d", soma);

}
//funcao para apresentar diagonal secundaria

int secundaria()
{
	int soma=0;

	for (int i = 0; i < 3; ++i)
	{
		soma = soma + matriz[i][2-i];
	}

	printf("\n O valor da diagonal secundaria eh: %d", soma);

	system("break");
}
//funcao principal do programa

int main()
{
	tabela();

	principal();

	printf("\n \n");

	secundaria();

	printf("\n \n");

	system("break");

}

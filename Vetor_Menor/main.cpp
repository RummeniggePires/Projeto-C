#include <cstdio>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int	valor[10];
int pos, menor =99999999;

int entrada()
{
	for (int i = 0; i < 10; ++i)
	{
		system("clear");
		printf("Digite o um valor: ");

		scanf("%d", &valor[i]);

		if (valor[i] < menor)
		{
			menor = valor[i];
			pos = i+1;
		}
	}
			system("clear");
			printf("\nA posicao do menor valor eh %d, e o valor eh %d. \n \n", pos,menor);
			system("");
}

int main()
{
	entrada();
	
}
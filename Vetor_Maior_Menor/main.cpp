#include <cstdio>

#include <cstdlib>

using namespace std;

int	valor[10];
int posma, maior, posme, menor=9999999999999;

int entrada()
{
	for (int i = 0; i < 10; ++i)
	{
		system("cls");
		printf("Digite o um valor: ");

		scanf("%d", &valor[i]);

		if (valor[i] > maior)
		{
			maior = valor[i];
			posma = i+1;
		}
		if (valor[i] < menor)
		{
			menor = valor[i];
			posme = i+1;
		} 
	}
			system("cls");
			printf("\n A posicao do menor valor eh %d, e o valor eh %d.", posme,menor);
			printf("\n A posicao do maior valor eh %d, e o valor eh %d. \n \n", posma,maior);

			system("pause");
}

int main()
{
	entrada();
}
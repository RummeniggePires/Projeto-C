#include <cstdio>

#include <cstdlib>

using namespace std;

int	valor[10];
int pos, maior;

int entrada()
{
	for (int i = 0; i < 10; ++i)
	{
		system("clear");
		printf("Digite um valor: ");

		scanf("%d", &valor[i]);

		if (valor[i] > maior)
		{
			maior = valor[i];
			pos = i+1;
		}
	}
			system("clear");
			printf("\n A posicao do maior valor eh %d, e o valor eh %d. \n \n", pos,maior);

			system("break");
}

int main()
{
	entrada();
}
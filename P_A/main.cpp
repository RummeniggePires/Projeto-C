#include <cstdio>
#include <cstdlib>

int pa[10];
int inicial, razao, soma;

int entrada_pa()
{
	printf("Digite o numero incial da PA:");
	scanf("%d", &inicial);
	
	printf("\nDigite a razao da PA:");
	scanf("%d", &razao);
}

int progressao()
{
	pa[0] = inicial;
	
	for (int i = 1; i < 10; ++i)
	{
		pa[i] = razao+pa[i-1];
	}
	soma = (pa[0]+ pa[9])*10/2;
}

int exibicao()
{
	printf("\nA soma da PA eh: %d\n \n", soma);
	for (int i = 0; i < 10; ++i)
	{
		printf("Os numeros da PA sao: %d\n", pa[i]);
	}
}

int main(int argc, char **argv)
{
	entrada_pa();
	progressao();
	exibicao();
	system("break");
}

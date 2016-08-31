#include <cstdio>
#include <cstdlib>

int pg[10];
int inicial, razao;

int entrada_pa()
{
	printf("Digite o numero incial da PG:");
	scanf("%d", &inicial);
	
	printf("\nDigite a razao da PG: \n \n");
	scanf("%d", &razao);
}

int progressao()
{
	pg[0] = inicial;
	
	for (int i = 1; i < 10; ++i)
	{
		pg[i] = razao*pg[i-1];
	}
}

int exibicao()
{
	
	for (int i = 0; i < 10; ++i)
	{
		printf("Os numeros da PG sao: %d\n", pg[i]);
	}
}

int main(int argc, char **argv)
{
	entrada_pa();
	progressao();
	exibicao();
	system("pause");
}
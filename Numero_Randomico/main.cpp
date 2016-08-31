#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()

int num, valor;
int valores[10];

using namespace std;


int randomico()
{

     for (int i=0; i < 10; i++)
     {
           // gerando valores aleatórios na faixa de 0 a 100
          valores[i]=(rand() % 100);


	}
	return 0;
}

int entrada()
{

	printf("Digite um valor: ");
	scanf("%d", &num);

}


int teste()
{
	for (int i = 1; i <= 10; i++)
	{
		if (num == valores[i])

		{
            cout << "O valor foi encontrado na posicao ";
            cout << "A posicao do valor eh: " << i;

        }

	}
}


int main(int argc, char **argv)
{


	randomico();
	entrada();

	teste();

}


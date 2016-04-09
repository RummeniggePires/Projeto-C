/* 50 numeros aleatorios (positivos e negativos) ordene crescente e decrescente, exiba os dois resultados.*/

/* criar torre de pascal*/

#include <cstdio>
#include <cstdlib>;

double num1[50], num2[50], resultado[50];
int aux;

int main(int argc, char const *argv[])
{
	//srand(time(null));



	for (int i = 0; i < 50; ++i)
	{
		num1[i] = (rand() * 100) - 10;
	}

	for (int i = 0; i < 50; ++i)
	{
		num2[i] = (rand() * 10);
	}

	for (int i = 0; i < 50; ++i)
	{
		resultado[i] = num1 -num2;
	
	}
		for (int i = 0; i < 50; ++i)
		{
			/* code */
		printf("%f \n",resultado[i] / i * (i-1) );
		}




	return 0;
}

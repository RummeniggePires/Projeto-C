/* 50 numeros aleatorios (positivos e negativos) ordene crescente e decrescente, exiba os dois resultados.*/

/* criar torre de pascal*/

#include <cstdio>
#include <cstdlib>;

using namespace std;

double num1[50], num2[50], resultado[50];
int aux;

int main(int argc, char const *argv[])
{
	srand((unsigned) time(NULL));



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
		cout << resultado[i] / i * (i-1) ) <<endl;
		}




	return 0;
}

/*
	escreva uma funcao mm que receba um vetor interito v[o...n] e os
	enderecos de duas varias inteiras, digamos mim e max. e deposite nessas
	variaveis o valor de um elemento minimo e o valor de um elemento maximo do
	vetor.escreva tambem uma funcao main que use a funcao mm.
*/

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int *max, *min, maior, menor=9999999;
int vetor[4] = {2,4,6,3};



int teste()
{

	for (int i = 0; i < 3; i++)
	{

		if (vetor[i] > maior){


			max = vetor[i];

		}

		if (vetor[i] < menor){


			*min = vetor[i];

		}
	}
}

int resposta()
{
	cout << "o valor maximo e: " << *max;
	cout << "o valor minimo e: " << *min;
}




int main(int argc, char const *argv[])
{
	teste();
	resposta();

	return 0;
}

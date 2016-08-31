#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()
#include <iostream>

using namespace std;

int vezes;
int valores;
int num[6];


int jogada()
{
	printf("Digite quantas vezes o dado sera jogado: \n");
	scanf("%d", &vezes); // entrada de quantas vezes o laco vai rodar
}

int randomico()
{

     for (int i=0; i < vezes; i++)
     {
           // gerando valores aleatórios na faixa de 0 a 6
          valores=(rand() % 6);
          num[valores] +=1 ;

	 }

	for (int i = 0; i < 6; ++i)
	{
		cout << " Total de numero" << i + 1 << ":" << num[i] << "\n";
	}
}


int main()
{
	//srand (time);
	jogada();
	randomico();
	return 0;

}

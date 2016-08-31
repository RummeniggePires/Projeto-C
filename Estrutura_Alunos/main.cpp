#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;
int reprovado;
float total;

int main()
{
		 

	struct alunos
	{
		char nome[20];
		int serie;
		float media;
	};

	alunos cadastro[50];

		for (int i = 0; i < 5; ++i)
		{
			cout << "Digite o nome do aluno: ";
			cin >> cadastro[i].nome;
			
			cout << "Digite o serie do aluno: ";
			cin >> cadastro[i].serie;

			cout << "Digite o media do aluno: ";
			cin >> cadastro[i].media;

			if (cadastro[i].media < 6)
			{
				reprovado = +1;
			}

			system("clear");
		}
		total = (reprovado* 100) / 50;

		printf("%f \n", total);

	return 0;


}

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class caminho_matriz
{
private:
	int cont, i, j;
	int mat[4][4];
	int result[4][4];
public:
	caminho_matriz(){
		cont = 0;
		i = 0;
		j = 0;
	}
	void zera_result();
	void preeche_matriz();	
	void imprime_matriz();
	void verifica_menor();
	void imprime_matriz_menor();
};

void caminho_matriz::zera_result(){
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			result[i][j] = 0;
		}
	}
}

void caminho_matriz::preeche_matriz(){
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
		 	mat[i][j] = (1+(rand() % 9 ));
		
		}
	}
}
void caminho_matriz::imprime_matriz(){
	for (int i = 0; i < 4; ++i)
	{
	
		for (int j = 0; j < 4; ++j)
		{
			cout <<" " << mat[i][j] << " ";
			if (j == 3){
				cout << endl;
			}
		}
	}

	cout << endl << endl; // ajuste visual

}

void caminho_matriz::verifica_menor(){
	
	while( cont < 6 ) {

		if (mat[i+1][j] <= mat[i][j+1])
		{
			result[i+1][j] = mat[i+1][j];
			if (i < 3)
			{
				i++;
			}else{
				j++;
			}
		
		}else{

			result[i][j+1] = mat[i][j+1];
			if (j < 3)
			{
				j++;
			}else{
				i++;
			}
		}
	
	cont++;
	}
}


void caminho_matriz::imprime_matriz_menor(){
	for (int i = 0; i < 4; ++i)
	{
	
		for (int j = 0; j < 4; ++j)
		{
			cout <<" " << result[i][j] << " ";
			if (j == 3){
				cout << endl;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	srand ( (unsigned) time(NULL));

	caminho_matriz m;

	m.zera_result();
	m.preeche_matriz();
	m.imprime_matriz();
	m.verifica_menor();
	m.imprime_matriz_menor();

	return 0;
}
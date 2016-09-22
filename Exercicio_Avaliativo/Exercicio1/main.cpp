#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int mat[4][4];
int result[4][4];

void preeche_matriz(){
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
		 	mat[i][j] = (1+(rand() % 9 ));
		
		}
	}
}
void imprime_matriz(){
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

void verifica_menor(){
	int i =0, j=0, cont=0;
	while(cont < 6) {
			    
	

			if (mat[i+1][j] <= mat[i][j+1])
			{

				result[i+1][j] = mat[i+1][j];
				if(j < 3){
					j++;
				}else{
					i++;
				}

			}else{
				result[i][j+1] = mat[i][j+1];
				if(i < 3){
					i++;
				}else{
					j++;
				}
			
			}
		cont++;
		}
	}



void imprime_matriz_menor(){
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

	preeche_matriz();
	imprime_matriz();
	verifica_menor();
	imprime_matriz_menor();

	return 0;
}
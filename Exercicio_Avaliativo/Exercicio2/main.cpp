#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int tam;
int vet[0];


void preenche_vet(){

	cout << "Digite quantos valores serao acrescentados: ";
	cin >> tam;

	
	for (int i = 0; i < tam; ++i)
		{
		 	vet[i] = (rand() % 100 );
		}

}


void imprime_vet(){
	for (int i = 0; i < tam; ++i)
	{
		cout <<" - "<< vet[i] << " - ";
	}
	cout << endl;
}
void ordena_vet(){
	int aux;

	for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vet[i] < vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }

    }
}

void maior_repet(){
	int cont_tmp, cont;

	cont_tmp = 0;
	cont = 0;

	ordena_vet();
    

    for (int i = 0; i < tam; ++i)
    {
    	if( (vet[i]+1) == (vet[i+1]) )
    	{
    		cont_tmp++;
    	}
    	if ( (vet[i]+1) != vet[i+1])
    	{
    		if (cont < cont_tmp )
    		{
    			cont = cont_tmp;
    			cont_tmp = 0;
    		}
    	}
    
    }
		cout << cont << " consecutivos... " << endl;
}

int main(int argc, char const *argv[])
{
	srand ( (unsigned) time(NULL));
	int vet[tam];

	preenche_vet();
	imprime_vet();
	maior_repet();
	return 0;
}

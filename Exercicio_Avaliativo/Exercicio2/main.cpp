#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;



class vetor_consecutivo
{
private:
	int tam;
	int vet[100];
	int vet_tmp[100];
	
public:

	void preenche_vet();
	void imprime_vet();
	void ordena_vet();
	void maior_repet();

};

void vetor_consecutivo::preenche_vet(){

	cout << "Digite quantos valores serao acrescentados: ";
	cin >> tam;

	for (int i = 0; i < tam; ++i)
		{
		 	vet[i] = (rand() % 100 );
		}
}


void vetor_consecutivo::imprime_vet(){
	for (int i = 0; i < tam; ++i)
	{
		cout <<" - "<< vet[i] << " - ";
	}

	cout << endl; //para melhorar a visualizacao
}
void vetor_consecutivo::ordena_vet(){
	int aux;
	
	for (int i = 0; i < tam; ++i)
	{
		vet_tmp[i] = vet[i];
	}

	for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vet_tmp[i] < vet_tmp[j])
            {
                aux = vet_tmp[i];
                vet_tmp[i] = vet_tmp[j];
                vet_tmp[j] = aux;
            }
        }

    }

 }

void vetor_consecutivo::maior_repet(){
	int cont_tmp, cont;
	cont_tmp = 0;
	cont = 0;

 	ordena_vet();

    for (int i = 0; i < tam; ++i)
    {
    	if( (vet_tmp[i]+1) == (vet_tmp[i+1]) )
    	{
    		cont_tmp++;
    	}
    	if ( (vet_tmp[i]+1) != vet_tmp[i+1])
    	{
    		if (cont <= cont_tmp )
    		{
    			cont = cont_tmp;
    			cont_tmp = 0;
    		}
    	}
    
    }
		cout << cont << " consecutivos... " << endl;

		for (int i = 0; i < tam; ++i)
	{
		cout <<" - "<< vet_tmp[i] << " - ";
	}

	cout << endl;
		
}

int main(int argc, char const *argv[])
{
	vetor_consecutivo v;
	
	srand ( (unsigned) time(NULL));

	v.preenche_vet();
	v.imprime_vet();
	v.maior_repet();
	
	return 0;
}
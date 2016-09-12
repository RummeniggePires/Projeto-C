#include <iostream>

using namespace std;

int tam;

class Vetor
{
private:

    int vet[];

public:


    void preenche_vet();

	void ordena(int vet[]);

};



void ordena(int vet[]){

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
void preenche_vet(){
	int opc;

	while(opc == 0) {

		cout << "Digite o valor do item: ";
		cin >> vet[tam];

		tam++;

		cout << "Deseja digitar outro numero? 0 - Sim / 1 - Não";
		cin >> opc;

		cout << "\n\n\n\n\n\n";
	}

}



int main(int argc, char const *argv[])
{
	preenche_vet();

	return 0;
}

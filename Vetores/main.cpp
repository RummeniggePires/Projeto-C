#include <iostream>
#include <cstdio>
#include <cstdlib>
 
#define qnt_vetor 4
using namespace std;

int vetorA[qnt_vetor];
int vetorB[qnt_vetor];
int vetorAUX[qnt_vetor];

void exibir()
{
	cout << "VALOR DOS VETORES:\n";
	for (int i = 0; i < qnt_vetor; ++i)
	{
		cout << vetorA[i] << "\t" << vetorB[i] << "\n";
	}
}

void  inversoB()
{
	for (int i = 0; i < qnt_vetor; ++i)
	{
		vetorAUX[i] = vetorA[i];
	}
	
	for (int i = qnt_vetor; i =0; --i)
	{
		for (int k = 0; k < qnt_vetor; ++k)
		{
			vetorA[k] = vetorB[i];
		}
	}
	exibir();
}

void crescenteA()
{
	int AUX;
	for (int i = 0; i < qnt_vetor; ++i)
	{
		vetorA[i] = vetorAUX[i];
		vetorAUX[i] = vetorB[i];	
	
	}
	//ORDENA EM ORDEM CRESCENTE...
	
	for (int i=0;i<qnt_vetor;++i)
	{
		
		for (int j=i+1; j<= qnt_vetor;++j)
		{
			
			if(vetorA[i] < vetorA[j])
			{
				AUX=vetorA[i];
				vetorA[i]=vetorA[j];					
				vetorB[i]=AUX;
			}
		}
	}
	exibir();
}





int main(int argc, char const *argv[])
{
	

	for (int i = 0; i < qnt_vetor; ++i)
	{
		cout << "Digite os valores de A:";
		cin >> vetorA[i];
		system("clear");	
	}	
	
	cout << "\n\nVALORE DE a LANCADOS....";
	
	cin.get();
	cin.get();
	system("clear");
	
	for (int i = 0; i < qnt_vetor; ++i)
	{
		cout << "Digite os valores de B:";
		cin >> vetorB[i];
		system("clear");
		
	}	
	cout << "\n\nVALORE DE B LANCADOS....";

	cin.get();
	cin.get();
	system("clear");
		
	exibir();
	

	inversoB();
	crescenteA();
	/*ordenaB();
	*/

	return 0;
}

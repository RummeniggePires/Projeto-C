#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

double *notas, numNotas;

double media(double *notas, double numNotas){

}

int main(int argc, const char *argv[])
{   

	 
	cout << "Digite a qntdade de notas>: ";
	cin >> numNotas;
	 
	notas = new int[numNotas];
	 
    for (int i = 0; i < numNotas ; i++)
	{
		
	         
		cout << " Digite a nota: " << endl;
        cin >> *(notas +1);
     }
     
    double m = media(notas, numNotas);
	cout << "\n\nMedia das notas: " << m;
     
    delete [] notas;
    return 0;
}

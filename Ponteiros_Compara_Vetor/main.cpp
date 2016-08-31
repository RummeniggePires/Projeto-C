#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int *somaVet(int *s1, int *s2, int numVet1, int numVet2, int *cont);

int main(int argc, const char *argv[])
{
    int i,numVet1, numVet2, *s1,*s2,*s3,cont = 0;
    cout << "Digite quantos numeros seram lancados no primeiro vetor: ";
    cin >> numVet1;

    cout << "Digite quantos numeros seram lancados no segundo vetor: "; 
    cin >> numVet2;

    s1 = new int [numVet1];
    s2 = new int [numVet2];
    s3 = new int [numVet1 + numVet2];

    for (i = 0; i < numVet1; i++) {
        cout << "Digite o numero de posicao "<< i+1 << " primeiro vetor :";
        cin >> *(s1+i);
    }
    
    for (i = 0; i < numVet2; i++) {
        cout << "Digite o numero de posicao " << i+1 << " segundo vetor :";
        cin >> *(s2+i);
    }
    
    s3 = somaVet(s1,s2,numVet1, numVet2, &cont);

        for (i = 0; i < cont; i++) {
            cout << endl << *(s3+i);
        }
    cout<< endl << endl;
    return 0;
}

int *somaVet(int *s1, int *s2, int numVet1, int numVet2, int *cont){
    int *vet, i,j, sev;

    vet = new int [numVet1 +numVet2];

    for (i = 0; i < numVet1; i++) {

        for (j = 0; j < numVet2; j++) {
        
            if (*(s1+i)== *(s2+j)) {
            
                *(vet+*cont) = *(s1+i);
                sev++;
            }
         
            
        }
    
    }
*cont=sev;    
return vet;
}

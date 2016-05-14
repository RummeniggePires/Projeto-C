#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int *busca(char *str, char c,int*tp); //c = letra, tp = tamanho ponteiro

int main(int argc, const char *argv[])
{   
    int *indice, n=0, i;
    char *frase =(char *)"teste";
    char c;

    cout << "Digite a letra: ";
    cin >> c;

    indice = busca(frase, c, &n);

    for (i = 0; i < n; i++) {
        cout << *(indice+i);
    }

    return 0;
}

int *busca(char *str, char c, int *tp)
{
    int *indice, n=0;

    for (i = 0; i < *(str+i) !='\0'; ++i) {
        if (*str+i)==c) {
            n++;
        }
    
    }

    indice = new int[n];
    
    n=0;
    for (i = 0; *(str+i)!= '\0' ; i++) {
        if (*str+i) == c) {
            *(indice+n)=i;
            n++;
        }
    }

    delete [] indice;
    return indice;
    
}


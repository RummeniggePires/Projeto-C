//fazer uma funcao recursica, que calculo o valor da serie S descrita a seguir (n>0)
//fazer uma funcao "normal" e uma recursiva, que exiba a sequencia de fibonacci, até um número n. 0-1-2-3-5-8-13
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int i=1, n, factor;

int factorial(int n);



int main(int argc, char const *argv[])
{
    cout << "Digite o valor de N: ";
    cin >> n;

    factorial();


    return 0;
}

int factorial(int n)
{
    if (n==0)
        return 1;
    else
        return n * factorial(n-1);

}

float soma(int x, int n)
{
    return x / factorial(soma(x+2,n));
}


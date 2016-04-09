#include <iostream>
#include <cstdlib>
#include <cstdio>


using namespace std;

int arr[5] = {1,2,3,4,5};


int soma(int vetor[], int x)
{
 if (x==0)
        return vetor[x];
    else
        return vetor[x] + soma(vetor, x-1);



}

int main(int argc, char const *argv[])
{


    cout<< soma(arr , 5);

    return 0;
}


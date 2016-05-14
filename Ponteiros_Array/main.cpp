#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int qnt, min=9999, max,i,*num;

void mm( int *num,int qnt,int *min,int *max)
{
	*min =*num;
	*max =*num;
    for (i = 0; i < qnt; i++) {
        if (*(num+i) > *max)
            *max = *(num+i);
        else
            *min = *(num+i);
    }
}

int main(int argc, const char *argv[])
{
    num = new int[qnt];
    
    cout << "Digite a quantidade de numeros que serao digitados: ";
    cin >>qnt;

    for (i = 0; i < qnt; i++) {
        cout << "Digite o numero " << i+1;
        cin >> *(num+1);

    }

    mm(num, qnt, &min, &max);
        
    cout<< "O Minimo eh: " << min;
    cout << "O Maximo eh: " << max;
    delete[];

    
    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int k,n;

int expo(int k, int n)
{
    if (n == 0)
        return 1;
    else

        return n * expo(k, n-1);
}

int main(int argc, char const *argv[])
{
    cout << " Digite o valor o do numerador: ";
    cin >> n;
    cout << "Digite o valor do expoente: ";
    cin >> k;

    expo(k,n);

    return 0;

}
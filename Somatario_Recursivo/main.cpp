/* crie uma funcao que soma os valores de n*/

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
int n;

int soma(int n)
{
    if (n== 0)

        return 0;

    else

        return n + soma(n-1);

}

int main(int argc, char const *argv[])
{
    cout << "Digite o valor de N: ";
    cin >> n;

    soma(n);

    return 0;
}
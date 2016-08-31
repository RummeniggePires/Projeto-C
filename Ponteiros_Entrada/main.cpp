#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

void reajuste20(double &a)
{
	cout << " O valor de entrada eh: " << a << endl;
    a = a + (a * 0.2);
}

int main(int argc, const char *argv[])
{
    double valor;

    cout << "Digite um valor: ";
    cin >> valor;

    reajuste20(valor);

    cout << " O valor com o reajuste eh: " << valor << endl;
    
    cin.get();
    cin.get();
    return 0;

}

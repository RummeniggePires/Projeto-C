#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class Retangulo
{
private:
    int bas, alt;
public:
    void init(int b, int h)
    {
        bas = b;
        alt = h;
    }

    void printdata()
    {
        cout << "\nBase = " << bas << " Altura = " << alt;
        cout << "\nArea = " << (bas*alt) << endl;

    }
};

int main()
{
    Retangulo x , y;
    x.init(5,3);
    y.init(10,6);
    x.printdata();
    y.printdata();
}
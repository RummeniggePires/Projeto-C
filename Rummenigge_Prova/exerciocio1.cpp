#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define vezes 4
int cont;

class dado{
private:

    int valores;
    int num[6];

public:
   void rolar();
   int get_estatistica();

};

void dado::rolar(){

    // gerando valores aleatórios na faixa de 0 a 6
    valores= 1 + (rand() % 6 )  ;
    num[valores] +=1 ;

    if (valores = 4)
        {
            cont++;
        }

}

int dado::get_estatistica(){
    int result = 0;
    result =(vezes * 100) / cont;

    return result;
}


int main(int argc, char const *argv[])
{
    dado d;

    for (int i = 0; i < vezes; ++i)
    {
        d.rolar();

    }


    d.get_estatistica();

    return 0;
}
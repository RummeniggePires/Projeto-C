#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

char *std1 = (char*)"Teste";
char *std2;

char *strcopy(char *std2)
{
    int n;
    char *novo;
	
	for (n = 0; *(std1+n) != '\0'; ++n){}
       
		novo = new char[n];
       
	for (int i=0 ; i<=n; i++)
	{ 
		*(novo+i)= *(std1+i);

        }
	
    
	return novo;
}

int main(int argc, char const *argv[])
{
    
    std2 = strcopy(std1);

    cout << std2 << endl;

    return 0;
}

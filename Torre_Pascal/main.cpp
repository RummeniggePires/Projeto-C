#include <cstdio>
#include <cstdlib>
#include <math.h>

int num = 1 , i;

int main(int argc, char const *argv[])
{


	do
	{
		printf("%d \n",num );

		num = 2 ^ i-1;
		i++;

	} while (i < 50);


}

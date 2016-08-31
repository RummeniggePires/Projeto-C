#include <iostream>

using namespace std;

void f(int *a, int *b);

int main(){

	int a,b;
	int *pa = &a, *pb = &b;

	cout << "Digite o valor de A :";
	cin >> a;

	cout << "Digite o valor de B :";
	cin >> b;

	f(pa,pb);

	cout << "Valor A: " << a << endl;
	cout << "Valor B: " << b << endl;

	return 0;

}
void f(int *a, int *b){

	 int c = *a;

	 *a = *a + *b;
	 *b = *b - c;

	 if (*b < 0)
		 *b = *b * (-1);

}

/* implemente um tad (conta bancaria ) com os campos numeor e saldo onde os clientrs possam realizar
 as eguintes operacoes: iniciar uma conta com um nemero e um saldo, depositar um valoe, sacar um valor, imprimir o saldo..*/


#include <iostream>

using namespace std;

typedef struct 
{
	
	int numero;
	double saldo;

}ContaBancaria;

void iniciar(ContaBancaria* cb, int pnumero, double psaldo);
void deposito(ContaBancaria* cb, double valor);
void saque(ContaBancaria* cb, double valor);
void imprimir(ContaBancaria* cb);
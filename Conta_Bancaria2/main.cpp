 // criar uma algoritmo que simule o funcionamento de uma conta de banco.

#include <cstdio>
#include <cstdlib>
#include <iostream>


using namespace std;

// Declaracao das estruturas

// Declaracao de variaveis e constanetes globais necessarias.

int i, k;
#define qnt_conta 3

typedef struct 
{
	float saldo;
	int senha;

}Conta;

typedef struct 
{
	char nome[25];
	long long cpf;
	Conta conta;

}Cliente;

typedef struct 
{
	string movimentacao[50];

}Extrato;

typedef struct 
{
	float saldo[5];
	int senha[5];
}Sub_conta;

Cliente cliente[qnt_conta];
Sub_conta subconta[5];



void SubConta()
{		
		int contas;
		cout << "################ CADASTRA CLIENTE ################ \n\n";
		cout << "Digite quantas subconta serao acrescentadas: ";
		cin >> contas;			
			
			while (contas != 0 )
			{
				int k = i*5;
				cout << "	Digite a senha da subconta " << k << " do cliente " << cliente[i].nome << " : ";
				cin >> cliente[k].conta.senha;
				cout << "	Digite o saldo inicial da conta " << k << " do cliente " << cliente[i].nome << " : ";
				cin >> cliente[k].conta.saldo;
				cout << "	SUBCONTA REGISTRADA COM SUCESSO... ";
				cin.get();
				cin.get();
				system("clear");

				contas -=1;
			}

}

void cadastro()
{
	int compara;
	for (int i = 1; i <= qnt_conta ; ++i)
	{
		cout << "################ CADASTRA CLIENTE ################ \n\n";
		cout << "	Digite o nome do titular da conta " << i << " : ";
		cin >> cliente[i].nome;
		cout << "	Digite o CPF do titular da conta " << i << " : ";
		cin >> cliente[i].cpf;
		cout << "	Digite o senha da conta " << i << " : ";
		cin >> cliente[i].conta.senha;
		cout << "	Digite o saldo inicial da conta " << i << " : ";
		cin >> cliente[i].conta.saldo;
		
		cout << "	CADASTRO EFETUADO COM SUCESSO....";
		cin.get();
		cin.get();
		system("clear");

		cout << "	Deseja efetuar a criacao de contas secundaria para esse cliente? (1-sim / 2-nao): ";
		cin >> compara;
		
			if (compara == 1 )
			{	
				system("clear");

				SubConta();
			}
				
		
	}

}	
void Deposito()
{
	cout << "################ MENU PRINCIPAL ############### \n\n";
	cout << "	Digite a conta a efetuar o deposito: ";
	cin >> i;
	if (i <0 || i>4 )
		{
			cout << " CONTA NAO ENCONTRADA...";
			cin.get();
			cin.get();
			system("clear");
			Deposito();
			
		}
		else
		{	
			int deposito;
			char confirmacao;
			cout << "O valor sera deposito na conta de: " << cliente[i].nome <<" \n";
			cout << "Deseja continuar: (1-sim 2-nao)";
			cin >> confirmacao;
						
				if (confirmacao == 1)
				{
					cout << "Digite o valor a ser depositado: ";
					cin >> 	deposito;
				
					if (deposito < 0)
					{
						cout << "VALOR INVALIDO...";
						cin.get();
						cin.get();
						system("clear");
						Deposito();
					}
					else
					{

						cliente[i].conta.saldo = deposito + cliente[i].conta.saldo;
						cout << "\nDEPOSITO EFETUADO COM SUCESSO...";
						cin.get();
						cin.get();
						system("clear");
					}
				}
		}
}

void menu_cliente()
{
	int op;
	cout << "################ MENU PRINCIPAL ############### \n\n";
	cout << "	1 - Deposito: \n2 - Saque: \n3 - Extrato: \n4 - Sair: \n\n";
	cin >> op;

		switch (op)
		{
		
			case 1:
				Deposito();
				break;
			case 2:
				Saque();
				break;
			default :
				cout << "VALOR INVALIDO...";
				cin.get();
				cin.get();
				system("clear");
				menu_cliente();
				break;
		}

}


void Logar()
{
	int compara;
	cout << "################ MENU PRINCIPAL ############### \n\n";
	cout << "	Digite a conta: ";
	cin >> i;
	if (i <0 && i>4 )
		{
			cout << " CONTA NAO ENCONTRADA...";
			cin.get();
			cin.get();
			system("clear");
			Saque();
		}
			else
			{
				cout >> "Digite a senha da conta: ";
				cin >> compara;

				if (senha == cliente[i].conta.senha)
					{
						cliente[i].conta.saldo = cliente[i].conta.saldo - saque ;		
						cout << "SAQUE REALIZADO COM SUCESSO...";
						cin.get();
						cin.get();
						system("clear");
					}
					else
					{
						cout << "SENHA INVALIDA...";
						cin.get();
						cin.get();
						system("clear");
						Saque();
					}
				menu_cliente();
			}
}
void menu_principal()
{
	int op;
	cout << "################ MENU PRINCIPAL ############### \n\n";
	cout << "	1 - DEPOSITO \n2- ACESSAR SUA CONTA\n\n";
	cout << "	Digite a opcao desejada : ";
	cin >> op;

		switch (op)
		{
			case 1:
				Deposito();
				break;
			case 2:
				Logar();
				break;
			default :
				cout << "VALOR INVALIDO...";
				cin.get();
				cin.get();
				system("clear");
				menu_principal();
				break;
		}
}

int main()
{
	cadastro();
	menu_principal();

	return 0;
}

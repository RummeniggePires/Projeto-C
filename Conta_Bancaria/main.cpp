/*conta bancaria, sacar e depositar, com menu*/
#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;


	typedef struct
	{
		long senha;
		float saldo;
		int extrato[];

	}Conta;


	typedef struct
	{

		char nome[25];
		long long cpf;
		Conta conta;


	}Cliente;


	Cliente cliente[3];
	int i,x, j;


void fim()
{
	system("clear");
	cin.get();
	cin.get();
	system("clear");
	cout << " VOLTE SEMPRE";
}


void Cadastro()
{
	int verificador;

	for (int i = 1; i <= 3; ++i)
	{

		cout << "Digite o nome do titular da conta " << i << ": ";
		cin >> cliente[i].nome;
		cout << "Digite o CPF do titular da conta: " << i << ": ";
		cin >> cliente[i].cpf;
		cout << "Digite o saldo inicial da conta: ";
		cin >> cliente[i].conta.saldo;
		cout << "Digite uma senha de quatro digitos: ";
		cin >> cliente[i].conta.senha;

		cout << "\n \nCADASTRO EFETUADO COM SUCESSO.... \n";
		cin.get();
		cin.get();
		system("clear");

		cout << "Deseja acrescentar mais uma conta a esse cliente? (1-sim / 2-nao)";
		cin >> verificador;
		if (verificador == 1)
		{
			int num_conta;
			cout << "Digite quantas constas seram acrescentadas: ";
			cin >> num_conta;

			for (int j = i+10; j <= num_conta+10; ++j)
			{
				cout << "Digite o saldo inicial da conta adicional: ";
				cin >> cliente[j].conta.saldo;
				cout << "Digite uma senha de quatro digitos: ";
				cin >> cliente[j].conta.senha;

				cout << "\n \nCADASTRO EFETUADO COM SUCESSO.... \n";
				cout << " O NUMERO DA CONTA CRIADA EH: " << j ;
				cin.get();
				cin.get();
				system("clear");

			}
		}


	}
}

void Deposito()
{
	int i, deposito;

	cout << "Digite o numero da conta: ";
	cin >> i;

		if (i <0 && i>4 )
		{
			cout << " CONTA NAO ENCONTRADA...";
			cin.get();
			cin.get();
			system("clear");
			Deposito();
		}
		else
		{
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
				else
				{
					cout << "VALOR INVALIDO...";
					cin.get();
					cin.get();
					system("clear");
					Deposito();
				}

			}
}


void Saque()
{
	int i, saque, senha;

	cout << "Digite o numero da conta: ";
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
					cout << "Ola "<< cliente[i].nome << " qual o valor a ser sacado: ";
					cin >> 	saque;
					cout << "Digite a senha: ";
					cin >>  senha;

					if (senha == cliente[i].conta.senha)
					{
						cliente[i].conta.saldo = cliente[i].conta.saldo - saque ;
						cout << "SAQUE REALIZADO COM SUCESSO...";
						cin >> cliente[i].conta.extrato[x];// >> " Saque de " >> saque;
						x += 1;
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


			}

}

void Extrato()
{
	cout << cliente[i].conta.extrato[x];
}

void Saldo()
{

	int i, senha;

	cout << "Digite o numero da conta: ";
	cin >> i;

		if (i <0 && i>4 )
		{
			cout << " CONTA NAO ENCONTRADA...";
			cin.get();
			cin.get();
			system("clear");
			Extrato();
		}
			else
			{
					cout << "Digite a senha: ";
					cin >>  senha;

					if (senha == cliente[i].conta.senha)
					{
						cout << cliente[i].conta.saldo;
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
						Extrato();
					}


			}

}



void menu()
{
	int op;

	cout << "\n 	Digite 1 para Cadastro: \n 	Digite 2 para Deposito: \n 	Digite 3 para Saque...: \n 	Digite 4 para Saldo...: \n 	Digite 0 para Sair....: \n \n 	Digite a operação: ";
	cin >> op;


	switch (op)
	{
		case 1:
			Cadastro();
			break;
		case 2:
			Deposito();
			break;
		case 3:
			Saque();
			break;
		case 4:
			Saldo();
			break;
		case 0:
			fim();
			break;
		default:
			menu();

	}
	menu();
}



int main(int argc, char const *argv[])

{
	menu();
	fim();

	return 0;
}

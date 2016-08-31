
//criar um algoritmo que simule as movimentações de um banco.
#include <cstdlib>
#include <iostream>
using namespace std;

//define quantas contas tera no banco
#define qntConta 1
int numConta; //sera o numero de controle da contas

//struct para armazenamento da conta. senha e saldo
typedef struct
{

    float saldo;
    char senha[4];

}Conta;

//struct para armazenamento do cliente. nome, cpf e outros dados.
typedef struct
{
    char nome[25];
    long long cpf;

}Cliente;

//classe para movimentacoes do banco
class banco
{
private:
    Cliente cliente[qntConta];
    Conta conta[qntConta];
public:

    void addCliente();

    float deposito(float valorMov);

    float saque(float valorMov);

};

//inclusao de de clintes ao banco
void banco::addCliente()
{
    for (int numConta = 0; numConta < qntConta; numConta++)
    {

        cout << "Digite o nome do cliente: ";
        cin >> banco::cliente[numConta].nome;

        cout << "Digite uma senha de 4 digitos: ";
        cin >> banco::conta[numConta].senha;

        cout << "Digite o saldo inicial: ";
        cin >> banco::conta[numConta].saldo;

        cout << "\nConta criada com sucesso...\nO numero da sua conta eh: " << numConta+1;

        cout << "\n\nPressione ENTER para continuar...";
        cin.get();
        cin.get();
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\\";

    }
}

//metodo construtor
int main(int argc, char const *argv[])
{
    banco b1;

    b1.addCliente();

    return 0;
}
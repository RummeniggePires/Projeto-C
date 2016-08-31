//Rummenigge Pires
#include <iostream>
#include <string>


using namespace std;
#define qntmov 5
typedef struct
{
    string data;
    float valor;
    int tipo_mov;
}df_mov;


typedef struct
{
    int num_conta;
    float saldo_inicial;
    float saldo_atual;
    string cliente;
    string senha;
    string tipo_conta;
}df_inf_conta;

class conta
{

private:
    df_mov mov[qntmov];
    int cont;
public:

    df_inf_conta inf;
    conta();

    void definir_inf();
    void add_mov(string p_data, float p_valor, int p_tipomov);
    void add_mov();
    void extrato();
    float credDeb(int p_tipomov,float p_valor);
};

conta::conta()
{
    inf.saldo_inicial=0;
    for (int i = 0; i < qntmov; ++i)
    {
        mov[i].valor=0;
    }
}

void conta::add_mov(string p_data, float p_valor, int p_tipomov)
{
    if (cont<qntmov)
    {
        mov[cont].data = p_data;
        mov[cont].valor = p_valor;
        mov[cont].tipo_mov = p_tipomov;

        float credDeb(int p_tipomov,float p_valor);

        cont++;
    }else{
        cout <<"\nLimite de movimento ultrapassou 5";
    }
}

void conta::extrato()
{
    for (int i = 0; i < qntmov; ++i)
    {
       cout <<"Saque de " << mov[i].valor << " dia " << mov[i].data << endl;
    }

    cout << "\nSaldo Final: " << inf.saldo_atual;
}

void conta::add_mov()
{
    df_mov temp;

    cout <<"\nDigite a Data: ";
    cin >> temp.data;
    cout <<"\nDigite a Valor: ";
    cin >> temp.valor;
    cout <<"\nDigite a movimento: (1:Credito  2:Debito): ";
    cin >> temp.tipo_mov;

    add_mov(temp.data, temp.valor, temp.tipo_mov);
}

float conta::credDeb(int p_tipomov,float p_valor)
{
    if (p_tipomov == 1) //credito
    {
        inf.saldo_atual += p_valor;
    }
    if (p_tipomov == 2) //debito
    {
        inf.saldo_atual -= p_valor;
    }

    return inf.saldo_atual;
}

void conta::definir_inf()
{
    cout << "Digite o Num. Conta: ";
    cin >> inf.num_conta;
    cout << "\nDigite o Salario Inicial: ";
    cin >> inf.saldo_inicial;
    inf.saldo_atual= inf.saldo_inicial;
    cout << "\nDigite o cliente: ";
    cin >> inf.cliente;
    cout << "\nDigite o Senha: ";
    cin >> inf.senha;
    cout << "\nDigite o tipo da conta: (P - Poupancao C - Corrente)";
    cin >> inf.tipo_conta;
    cout << "\n\n";
}

int main(int argc, char const *argv[])
{
    conta c1;

    c1.definir_inf();

    return 0;
}
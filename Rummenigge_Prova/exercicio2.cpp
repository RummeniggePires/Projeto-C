/*
#include <iostream>
#include <string>


using namespace std;

int cont;

typedef struct
{
    string nome;
    float salario;
    int departamento;
}inf_func;

typedef struct
{
   string nome;
   string cnpj;

}inf_emp;


class funcionario{

private:

    inf_func func[3];

public:
    void Funcionario(string nome,float salario, int departamento);

};

class empresa{
private:
    inf_emp emp;

public:
    void Empresa(string nome, string cnpj);
};

void funcionario::Funcionario(string nome,float salario, int departamento){
    cont++;
    funcionario[cont].nome = nome;
    funcionario[cont].salario = salario;
    funcionario[cont].departamento = departamento;
}

void empresa::Empresa(string nome, string cnpj){
    cont++;
    empresa[cont].nome = nome;
    empresa[cont].cnpj = cnpj;
}

int main(int argc, char const *argv[])
{
    empresa e;
    funcionario f;

    e.empresa("farma",123456789);

    f.funcionario("ze", 1000.00, 1);
    f.funcionario("maria", 1000.00, 2);
    f.funcionario("manoel", 1000.00, 3);

    for (int i = 0; i < cont; ++i)
    {
        if (funcionario[i].departamento = 1)
        {
            funcionario[i].salario += (salario * 0.10);
        }
    }

    return 0;
}
*/
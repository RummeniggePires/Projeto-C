
#include <iostream>
#include <string>


using namespace std;

typedef struct {
    string Nome;
    int qtde;
    float preco;

} df_item;

class venda {
private:
    int cont;
    df_item item[5];
public:
    venda();

    void AddItem(string nome, int qt, float pr);

    df_item get_item(int idx);

    int get_total_item();

};

venda::venda() {
    cont = 0;
    for (int i = 0; i < 5; ++i)
    {
        item[i].preco = 0;
        item[i].qtde = 0;
    }
}

int venda::get_total_item(){
    int total=0;
    for (int i = 0; i < 5; ++i)
    {
        if (item[i].qtde > 0)
        {
            total++;
        }
    }
    return total;
}

df_item venda::get_item(int idx) {
    return item[idx];
}

void venda::AddItem(string nome, int qt, float pr) {
    if ((cont <= 4) && (qt > 0) && (pr >= 0)) {
        item[cont].Nome = nome;
        item[cont].preco = pr;
        item[cont].qtde = qt;

        cont++;
    }
}


class movimento {
private:
    venda lista_vendas[10];
    int cont;
    float totalVenda;
public:
    movimento();

    void add_venda(venda v);

    void print_vendas();
};

movimento::movimento() {
    cont = 0;
}

void movimento::add_venda(venda v) {
    if (cont <= 9) {
        for (int i = 0; i < 5; i++) {
            lista_vendas[cont].AddItem(v.get_item(i).Nome,
                                       v.get_item(i).qtde,
                                       v.get_item(i).preco);
        }
        cont++;
    }
}

void movimento::print_vendas() {
    for (int i = 0; i < 10; i++) {

        if (lista_vendas[i].get_total_item() > 0)
        {



        cout << "\n Venda " << i + 1 << "   Itens: \n";
        for (int j = 0; j < 5; j++) {
            if (lista_vendas[i].get_item(j).qtde > 0) {
                cout << "\t" << lista_vendas[i].get_item(j).Nome
                << "  Qtde: " << lista_vendas[i].get_item(j).qtde
                << "  Preco: " << lista_vendas[i].get_item(j).preco
                << endl;
                totalVenda = totalVenda + (lista_vendas[i].get_item(j).qtde * lista_vendas[i].get_item(j).preco);
            }
        }
         cout << "\n    Preco total: " << totalVenda << endl;
    totalVenda = 0;
    }
}
}

int main() {
    movimento mov;
    venda v1, v2;

    v1.AddItem("Produto 1", 10, 100);
    v1.AddItem("Produto 2", 1, 9.9);

    v2.AddItem("Produto 1", 5, 500);
    v2.AddItem("Produto 2", 5, 19.9);
    v2.AddItem("Produto 3", 1, 0.1);

    mov.add_venda(v1);
    mov.add_venda(v2);

    mov.print_vendas();


    return 0;
}
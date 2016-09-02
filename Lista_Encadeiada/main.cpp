#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct lista{
	int info;
	struct lista* prox;

}Lista;

Lista* lst_criar(void){ //o void significa que nao sera passado nenhum parametro.

	return NULL; // retorna nulo para criar a variavel com valor nulo(zerado).
}

Lista* lst_inserir(Lista  *l, int i){

	Lista *novo = new Lista;//cria o novo no
	novo->info = i; //o -> indica uma referencia do struct, mesmo ultilizacao do ponto para classe.
	novo->prox = l;

	return novo;
}

void lst_imprimir( lista *l){

	Lista *p;


	for (p = l ; p!= NULL; p = p->prox){
		cout << p->info << "\n";

	}
}

bool lst_busca(lista *l, int num)
{

	for (Lista *p = l; p != NULL; p = p->prox)

		if (p->info == num) return p;

	 return false;
}


bool lst_vazia(lista *l){
	return (l==NULL);
}

Lista *lst_excluir(Lista *l, int val){

    Lista *a = NULL; //ponteiro para o elemento anterior
    Lista *p = l; //ponteiro que vai percorrer a lista

    //procurando o elemento na lista, guardando o NO na auxiliar a

    while( (p != NULL) && (p->info != val)){

        a = p;
        p = p->prox;
    }

    if (p==NULL) // elemento nao encontrado.

        return l;


    if (a == NULL) {

        l = p->prox;

    }else{

        a->prox = p->prox;
    }

    free(p); //limpa a memoria e apaga o valor do p

    return l;

}


int main(){

	Lista *l;

	l = lst_criar();
	l = lst_inserir(l,2); //l recebe a posicao do novo no
	l = lst_inserir(l,3); //l receve a posicao do novo no
    l = lst_inserir(l,5);
    l = lst_inserir(l,9);

	lst_imprimir(l);

    lst_excluir(l,9);

    cout << "xupa eu " << endl;

    lst_imprimir(l);

	return 0;

}



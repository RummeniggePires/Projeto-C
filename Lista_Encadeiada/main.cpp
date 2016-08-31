#include <iostream>

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

bool lst_busca(lista *l, int num){
	
	for (Lista *p = l; p != NULL; p = p->prox)
	
		if (p->info == num) return p;
	 
	 return false;
	
}


bool lst_vazia(lista *l){
	return (l==NULL);
}


int main(){
	
	Lista *l;

	l = lst_criar();	
	l = lst_inserir(l,2); //l recebe a posicao do novo no
	l = lst_inserir(l,3); //l receve a posicao do novo no

	lst_imprimir(l);
	
	cout << lst_busca(l, 2) << endl;

	return 0;

}



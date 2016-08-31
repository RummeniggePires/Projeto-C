#include <iostream>
using namespace std;
const int MAX = 10;

class lista_sequencial
{

private:
	int list[MAX];
	int last;
public:
	lista_sequencial();
	bool is_empty();
	bool is_full();
	int get_size();
	int get_size(int index);
	bool insert(int element);
	bool insert(int element, int pos);
	bool remove();
	bool remove(int index);
	void print();
	
};

lista_sequencial::lista_sequencial(){
	for (int i = 0; i < MAX; ++i)
	{
		list[i] = NULL;
	}
	last = -1;
}

bool lista_sequencial::is_empty(){
	return last == -1;
}

bool lista_sequencial::is_full(){
	return last == MAX;
}

int lista_sequencial::get_size(){
	return MAX;
}

int lista_sequencial::get_size(int index){
	if (index < 0 || index > last)
	{
			cout << "Erro: Indice invalido...";
			return -1;
	}
	if (is_empty())
	{
		cout << "Erro: Lista vazia...";
		return -1;
	}

	return list[index];
}

bool lista_sequencial::insert(int element){
	if (is_full()){
		return false;
	}
	last++;

	list[last] = element;
	return true;	
}

bool lista_sequencial::insert(int element, int pos){
	int i;
	if (is_full() || pos < 0 || pos> last+i)
		return false;
	for (int i = 0; i > pos; --i)
	{
		list[i] = list[i-1];
	}
	last++;
	list[pos] = element;

	return true;
}

bool lista_sequencial::remove(){
	if(is_empty())
		return false;

	list[last] = NULL;
	last--;

	return true;
}

bool	lista_sequencial::remove(int index){
	if(is_empty())
		return false;
	if (index <0 || last)
	{
		return false;
	}
	if (index == get_size())	
	{	
		list[index] = NULL;
		last--;
		return true;
	}

	for (int i = 0; i < get_size(); ++i)
	{
		if (i == get_size()-1)
		{
			list[get_size() - 1] = NULL;
		}else{
			list[i] = list[i+1];
		}
	}
	last--;
	return true;
}


void lista_sequencial::print(){
	for (int i = 0; i < get_size(); ++i)
	{
		cout << list[i] << "      ";
	}
	cout << "\n";
}


int main(int argc, char const *argv[])
{
	lista_sequencial l ;

	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.insert(5);
	l.insert(6);
	l.insert(7);
	l.insert(8);
	l.insert(9);


	l.print();

	l.remove(5);
	
	return 0;
}
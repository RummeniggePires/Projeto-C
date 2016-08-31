#include <iostream>

using namespace std;

int tam_str(char *str){
    int n;

    for (n = 0; *(str + n) != '\0'; ++n){}

    return n;
}

char *crypt(char *str)
{
    int tam,i;
    tam = tam_str(str);

    char *senha;

    senha = new char[tam];

    for (int i=0 ; i<=tam; i++)
    {
        if (( (*(str+i) >= 'a' ) && (*(str+i) <='z')) || ( (*(str+i) >= 'A' ) && (*(str+i) <='Z')))
        {
            if (*(str+i) =='Z')
            {
                *(senha+i) = 'A';

                }

                else if (*(str+i) =='z')
                {
                    *(senha+i) = 'z';
                }

                else
                {
                    *(senha+i) = *(str+i) + 1;
                }

                else
                {
                    *(senha+i) = *(str+i);
                }

        }

    }
    *(senha+i)= '\0';

    return senha;

}
int main(int argc, char const *argv[])
{
    char entrada;
    char *str = &entrada;

    cout << "Digite a senha: ";
    cin >> entrada;

    crypt(str);



    return 0;
}

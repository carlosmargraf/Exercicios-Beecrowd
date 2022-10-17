#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1;
    int j;
    for(j = 60; j >= 0; j--)
    {
        cout << "I=" << i << " " << "J=" << j << endl;
        i += 3;
        j -= 4;
    }
    return 0;
}
//Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

//Entrada
//Não há nenhuma entrada neste problema.

//Saída
//Imprima a sequencia conforme exemplo abaixo

//Exemplo de Entrada 	Exemplo de Saída

//                        I=1 J=60
//                        I=4 J=55
//                        I=7 J=50
//                          ...
//                        I=? J=0
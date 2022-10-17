#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{   int i, j;
    for(i = 1; i < 10; i+=2)
    {
        for(j = 7; j > 4; j--)
        {
            cout << "I=" << i << " " << "J=" << j << endl;
        }
    }
    return 0;
}
//Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

//Entrada

//Não há nenhuma entrada neste problema.

//Saída
//Imprima a sequencia conforme exemplo abaixo
//Exemplo de Entrada 	Exemplo de Saída

//                          I=1 J=7
//                          I=1 J=6
//                          I=1 J=5
//                          I=3 J=7
//                          I=3 J=6
//                          I=3 J=5
//                            ...
//                          I=9 J=7
//                          I=9 J=6
//                          I=9 J=5
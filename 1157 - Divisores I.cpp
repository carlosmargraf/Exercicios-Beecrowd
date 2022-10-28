#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, x;

    cin >> N;

    for(x = 1; x <= N; x++)
    {
        if(N % x == 0) //Ler um número inteiro N e calcular todos os seus divisores
        cout << x << endl;
    }

    return 0;
}
//Ler um número inteiro N e calcular todos os seus divisores.
//Entrada

//O arquivo de entrada contém um valor inteiro.
//Saída

//Escreva todos os divisores positivos de N, um valor por linha.

//Exemplo de Entrada 	Exemplo de Saída


//6                        1
//                         2
//                         3
//                         6
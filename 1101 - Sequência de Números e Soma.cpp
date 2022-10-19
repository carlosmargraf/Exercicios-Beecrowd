#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i, X, Y, diferente, soma;

    
    while(true)
    {
        cin >> X;
        cin >> Y;
        if(X <= 0)
        {
            break;
        }
        if(Y <= 0)
        {
            break;
        }
        if(X > Y)
        {
            diferente = X;
            X = Y;
            Y = diferente;
        }
        soma = 0;
        for(i = X; i <= Y; i++)
        {
            cout << i << " ";
            soma += i;
        }
        cout << "Sum=" << soma << endl;
    }
    return 0;
}
//Leia um conjunto não determinado de pares de valores M e N 
//(parar quando algum dos valores for menor ou igual a zero). 
//Para cada par lido, mostre a sequência do menor até o maior 
//e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

//Entrada
//O arquivo de entrada contém um número não determinado de valores 
//M e N. A última linha de entrada vai conter um número nulo ou negativo.

//Saída
//Para cada dupla de valores, imprima a sequência do menor até o maior 
//e a soma deles, conforme exemplo abaixo.

//Exemplo de Entrada 	Exemplo de Saída

//5 2                   
//6 3                    2 3 4 5 Sum=14
//5 0                    3 4 5 6 Sum=18
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int valor1, valor2, soma = 0, x;
    int minimo, maximo;

    cin >> valor1 >> valor2;

    if(valor1 < valor2)
    {
        minimo = valor1;
        maximo = valor2;
    }
    else
    {
        maximo = valor1;
        minimo = valor2;
    }

    for(x = (minimo + 1); x < maximo; ++x)
    {
        if(x % 2 != 0)
        {
            soma +=x;
        }
    }
    cout << soma << endl;
    return 0;
}
//Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares 
//entre eles.

//Entrada
//O arquivo de entrada contém dois valores inteiros.

//Saída
//O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares 
//que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.

//Exemplo de Entrada 	Exemplo de Saída

//      6
//     -5                      5

//     15
//     12                     13

//     12
//     12                      0
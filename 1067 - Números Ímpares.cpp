#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero, x;
    cin >> numero;
    for(x = 1; x <= numero; x++)
    {
        if(x % 2 !=0)
        cout << x << endl;
    }
    return 0;
}
//Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, 
//um valor por linha, inclusive o X, se for o caso.

//Entrada
//O arquivo de entrada contém 1 valor inteiro qualquer.

//Saída

//Imprima todos os valores ímpares de 1 até X, inclusive X, se for o caso.

//Exemplo de Entrada 	Exemplo de Saída

//        8                     1
//                              3
//                              5
//                              7
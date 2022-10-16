#include<iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    int numero, x;
    int maior_valor = 0;
    int posicao = 0;

    for(x = 0; x < 100; x++)
    {
        cin >> numero;

     if(numero > maior_valor)
     {
        maior_valor = numero;
        posicao = x; 
     }
    }
    cout << maior_valor << endl;
    cout << posicao+1 << endl;

    return 0;
}
//Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

//Entrada

//O arquivo de entrada contém 100 números inteiros, positivos e distintos.

//Saída

//Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.

//Exemplo de Entrada 	Exemplo de Saída

//       2                   34565
//     113                   4
//      45
//   34565
//       6
//     ...
//       8
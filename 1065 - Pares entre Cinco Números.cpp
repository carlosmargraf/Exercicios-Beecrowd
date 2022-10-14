#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero, pares=0;
    int x;
    for(x = 0; x < 5; x++)
    {
        cin >> numero;
        if(numero % 2 == 0)
        pares++;
    }
    cout << pares << " valores pares" << endl;
    return 0;
}
//Faça um programa que leia 5 valores inteiros. Conte quantos destes 
//valores digitados são pares e mostre esta informação.

//Entrada
//O arquivo de entrada contém 5 valores inteiros quaisquer.

//Saída
//Imprima a mensagem conforme o exemplo fornecido, indicando a 
//quantidade de valores pares lidos.


//Exemplo de Entrada 	Exemplo de Saída

//      7
//     -5
//      6                3 valores pares
//     -4
//     12
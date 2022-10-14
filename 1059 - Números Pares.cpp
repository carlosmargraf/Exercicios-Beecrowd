#include<iostream>
#include<stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;

    for(x=1; x<=100; x=x+1)
    if(x % 2 == 0)
    cout << x << endl;
    return 0;
}
//Faça um programa que mostre os números pares entre 1 e 100, 
//inclusive.

//Entrada
//Neste problema extremamente simples de repetição não há entrada.

//Saída
//Imprima todos os números pares entre 1 e 100, inclusive se 
//for o caso, um em cada linha.

//Exemplo de Entrada 	Exemplo de Saída
	
//                           2
//                           4
//                           6
//                          ...
//                          100
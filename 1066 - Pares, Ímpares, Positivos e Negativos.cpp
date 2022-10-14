#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero, pares = 0, impares = 0, positivos = 0, negativos = 0;
    int x;

    for(x = 0; x < 5; x++)
    {
        cin >> numero;
        if(numero % 2 == 0)
        pares++;
        if(numero % 3 != 0)
        impares++;
        if(numero > 0)
        positivos ++;
        if(numero < 0)
        negativos++;
    }    
        cout << pares << " valor(es) par(es)" << endl;
        cout << impares << " valor(es) impar(es)" << endl;
        cout << positivos << " valor(es) positivo(s)" << endl;
        cout << negativos << " valor(es) negativo(s)" << endl;
    
    return 0; 
}
//Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, 
//quantos valores digitados foram ímpares, quantos valores digitados foram positivos 
//e quantos valores digitados foram negativos.

//Entrada
//O arquivo de entrada contém 5 valores inteiros quaisquer.

//Saída
//Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não 
//esquecendo o final de linha após cada uma.


//Exemplo de Entrada 	Exemplo de Saída

//       -5             3 valor(es) par(es)
//        0             2 valor(es) impar(es)
//       -3             1 valor(es) positivo(s)
//       -4             3 valor(es) negativo(s) 
//       12
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y, z, i;
    cin >> x >> y;
    
    if(x > y)
    {
        z = x;
        x = y;
        y = z;
    }
    for(i = x+1; i < y; i++)
    {
        if(i%5 == 2 || i%5 == 3) //resto da divisão dele por 5 for igual a 2 ou igual a 3
        {
            cout << i << endl;
        }
    }
    return 0;
}
//Escreva um programa que leia 2 valores X e Y e que imprima todos os valores 
//entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.

//Entrada
//O arquivo de entrada contém 2 valores positivos inteiros quaisquer, 
//não necessariamente em ordem crescente.

//Saída
//Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.

//Sample Input 	Sample Output

//10                12
//18                13
//                  17
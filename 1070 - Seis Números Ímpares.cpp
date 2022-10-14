#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero, y = 0;
    cin >> numero;

    while (y < 6) //percorre 
    {
        if(numero % 2 !=0)
        {
            cout << numero << endl;
            y++;
        }
        numero++;
    }
    
    return 0;
}
//Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos 
//a partir de X, um valor por linha, inclusive o X ser for o caso.

//Entrada
//A entrada será um valor inteiro positivo.

//Saída
//A saída será uma sequência de seis números ímpares.


//Exemplo de Entrada 	Exemplo de Saída

//       8                     9
//                            11
//                            13
//                            15
//                            17
//                            19
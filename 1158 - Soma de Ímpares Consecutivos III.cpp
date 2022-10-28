#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, x, y, soma;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        cin >> y;

        soma = 0;

        if(x%2 != 0)
        {
            soma +=x;
        }
        else
        {
            x+= 1;
            soma += x;
        }
        for(int i = 0; i < y-1; i++)
        {
            x += 2;
            soma += x;
        }

        cout << soma << endl;
    }    
    return 0;
}
//Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
//Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a 
//soma de Y ímpares consecutivos a partir de X inclusive o próprio X se ele for ímpar. Por exemplo:

//para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13
//para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13

//Entrada
//A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. 
//Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

//Saída
//Imprima a soma dos consecutivos números ímpares a partir do valor X.

//Exemplo de Entrada 	Exemplo de Saída

//       2                    21
//     4 3                    24 
//    11 2
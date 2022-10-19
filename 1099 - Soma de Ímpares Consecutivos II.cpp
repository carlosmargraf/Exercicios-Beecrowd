#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, X, Y, diferente, soma;
    
    cin >> n;

    while(true)
    {
        if(n == 0) break;
        cin >> X;
        cin >> Y;

        if(X > Y)
        {
            diferente = X;
            X = Y;
            Y = diferente;
        }
        soma = 0;
        for(i = X + 1; i < Y; i++)
        {
            if(i %2 !=0)
            soma += i;
        }
        cout << soma << endl;
        n--;
    }
    return 0;   
}
//Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
//Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma 
//de todos os ímpares existentes entre X e Y.

//Entrada

//A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste 
//que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

//Saída
//Imprima a soma de todos valores ímpares entre X e Y.
//Exemplo de Entrada 	Exemplo de Saída

//        7                    
//      4 5                    0
//    13 10                   11
//      6 4                    5
//      3 3                    0
//      3 5                    0
//      3 4                    0
//      3 8                   12
	














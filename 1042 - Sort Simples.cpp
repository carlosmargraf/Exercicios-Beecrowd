#include <iostream>
using namespace std;

void Ordem(int A, int B, int C)
{
    int minimo, medio, maximo;
    if(A < B && A < C)
    {
        minimo = A;
        if(B < C)
        {
            medio = B;
            maximo = C;
        }
        else
        {
            medio = C;
            maximo = B;
        }
    }
    else if(B < A && B < C)
    {
        minimo = B;
        if(A < C)
        {
            medio = A;
            maximo = C;
        }
        else
        {
            medio = C;
            maximo = A;
        }
    }
    else
    {
        minimo = C;
        if(A < B)
        {
            medio = A;
            maximo = B;
        }
        else
        {
            medio = B;
            maximo = A;
        }
    }
    cout << minimo << endl << medio << endl << maximo << endl << endl;
}
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    Ordem(A, B, C);
    cout << A << endl << B << endl << C << endl;
    return 0;
}
//Leia 3 valores inteiros e ordene-os em ordem crescente. 
//No final, mostre os valores em ordem crescente, uma linha
//em branco e em seguida, os valores na sequência como foram
//lidos.
//Entrada
//A entrada contem três números inteiros.
//Saída
//Imprima a saída conforme foi especificado.

//Exemplo de Entrada 	Exemplo de Saída

//7 21 -14               -14
//                         7
//                        21

//                         7
//                        21
//                       -14

//-14 21 7               -14
//                         7
//                        21

//                       -14
//                        21
//                         7
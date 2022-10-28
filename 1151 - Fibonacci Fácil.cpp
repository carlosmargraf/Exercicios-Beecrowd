#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b = 3, c = 0, d = 1, e;

    cin >> a;

    if (a == 0)
        exit(0);
    if (a == 1)
        cout << c << endl;
    else {
        if (a == 2)
           cout << c << " " << d << endl;
        else {
            cout << c << " " << d << " ";
            while (b <= a) {
                e = c + d;
                c = d;
                d = e;

                if(b == a)
                    cout << e << endl;
                else
                    cout << e << " ";
                b++;
            
            }
        }
    }
    return 0;
}
//A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. 
//Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. 
//Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

//Entrada
//O arquivo de entrada contém um valor inteiro N (0 < N < 46).

//Saída
//Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. 
//Não deve haver espaço após o último valor.

//Exemplo de Entrada 	Exemplo de Saída

//        5                0 1 1 2 3
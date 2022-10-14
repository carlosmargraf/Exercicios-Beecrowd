#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, x;
    cin >> N;

    for(x = 1; x <= N; x++)
    {
        if(x%2 == 0)
        cout << x << "² = " << x*x << endl;
    }
    return 0;
}
//Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, 
//de 1 até N, inclusive N, se for o caso.

//Entrada
//A entrada contém um valor inteiro N (5 < N < 2000).

//Saída
//Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo abaixo.

//Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao 
//invés de 1000000 o que ocasionará resposta errada. Neste caso, configure a precisão 
//adequadamente para que isso não ocorra.

//Exemplo de Entrada 	Exemplo de Saída

//        6                   2^2 = 4
//                            4^2 = 16
//                            6^2 = 36
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n;

    for(x = 1; x < 10000; x++)
    {
        if(x % n == 2)
        cout << x << endl;
    }
    
    return 0;
}
//Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que 
//divididos por N dão resto igual a 2.

//Entrada
//A entrada contém um valor inteiro N (N < 10000).

//Saída
//Imprima todos valores que quando divididos por N dão resto = 2, 
//um por linha.

//Exemplo de Entrada 	Exemplo de Saída

//       13                    2
//                            15
//                            28
//                            41
//                            ...
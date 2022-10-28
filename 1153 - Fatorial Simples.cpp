#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, fatorial = 1;

    cin >> n;

   for(i = 0; i < (n-1); i++)
   {
        fatorial *= (n-i);
   }
   cout << fatorial << endl;
    return 0;
}
//Ler um valor N. Calcular e escrever seu respectivo fatorial. 
//Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

//Entrada
//A entrada contém um valor inteiro N (0 < N < 13).

//Saída
//A saída contém um valor inteiro, correspondente ao fatorial de N.

//Exemplo de Entrada 	Exemplo de Saída

//4                           24
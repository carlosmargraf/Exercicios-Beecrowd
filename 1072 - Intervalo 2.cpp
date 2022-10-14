#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, X, y;
    int in = 0;
    int out = 0;

    cin >> N;
    for(y = 0; y < N; y++) //percorre a quantidade de N
    {
        cin >> X;
        if(X >= 10 && X <= 20) in++;
        else out++;        
    }
    cout  << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}
//Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X 
//que serão lidos em seguida.
//Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão 
//fora do intervalo, mostrando essas informações.

//Entrada
//A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o 
//número de casos de teste.
//Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 
//Saída
//Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão 
//fora (out) do intervalo.


//Exemplo de Entrada 	Exemplo de Saída

//     4
//    14
//   123                    2 in
//    10                    2 out  
//   -25
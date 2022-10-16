#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, x;
    float primeiro, segundo, terceiro, real;
    cin >> n;
    for(x = 0; x < n; x++)
    {
        cin >> setprecision(1);
        cin >> primeiro >> segundo >> terceiro;
        real = (primeiro*2 + segundo*3 + terceiro*5)/(2.0+3.0+5.0);
        cout << fixed << setprecision(1);
        cout << setprecision(1) << real << endl;
    }
    return 0;
}
//Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. 
//Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. 
//Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o 
//primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.

//Entrada

//O arquivo de entrada contém um valor inteiro N na primeira linha. Cada N linha a 
//seguir contém um caso de teste com três valores com uma casa decimal cada valor.

//Saída

//Para cada caso de teste, imprima a média ponderada dos 3 valores, 
//conforme exemplo abaixo.

//Exemplo de Entrada 	Exemplo de Saída

//   3
//   6.5 4.3 6.2               5.7
//   5.1 4.2 8.1               6.3
//   8.0 9.0 10.0              9.3
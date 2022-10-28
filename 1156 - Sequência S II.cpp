#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float soma = 1;
    int x, b = 2;
    for(x = 3; x < 40; x++)
    {
        soma += (float)x/(float)b;
        x++;
        b *= 2;
    }
    cout << fixed << setprecision(2) << soma << endl;
    return 0;
}
//Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
//S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?
//Entrada

//Não há nenhuma entrada neste problema.

//Saída
//A saída contém um valor correspondente ao valor de S.
//O valor deve ser impresso com dois dígitos após o ponto decimal.
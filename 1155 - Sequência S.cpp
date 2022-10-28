#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{   
    float soma = 0, x;
    for(x = 1; x <= 100; x++)
    {
        soma += 1 / x;
    }
    cout << fixed << setprecision(2) << soma << endl;
    return 0;
}
//Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
//S = 1 + 1/2 + 1/3 + … + 1/100

//Entrada
//Não há nenhuma entrada neste problema.

//Saída
//A saída contém um valor correspondente ao valor de S.
//O valor deve ser impresso com dois dígitos após o ponto decimal.

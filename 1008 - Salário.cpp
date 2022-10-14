#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    double func, horas, valor_h, calculo;

    cin >> func >> horas >> valor_h;
    
    calculo = (horas*valor_h);

    cout<<"NUMBER = "<<func<<endl;
    cout << fixed << setprecision(2);
    cout<<"SALARY U$ = "<< setprecision(2)<<calculo<<endl;

    return 0;
}
//Escreva um programa que leia o número de um funcionário, 
//seu número de horas trabalhadas, o valor que recebe por hora
//e calcula o salário desse funcionário. A seguir, 
//mostre o número e o salário do funcionário, 
//com duas casas decimais.
//Entrada
//O arquivo de entrada contém 2 números inteiros e 
//1 número com duas casas decimais, representando o número,
//quantidade de horas trabalhadas e o valor que o funcionário
//recebe por hora trabalhada, respectivamente.
//Saída
//Imprima o número e o salário do funcionário.

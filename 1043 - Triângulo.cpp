#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double a, b, c, calculo;
    cin >> a >> b >> c;

    if(a<(b+c)&&b<(a+c)&&c<(a+b))
    {
        cout << fixed;
        cout << setprecision(1) << "Perimetro = "<< a+b+c << endl;
    }
    else
    {
        calculo = 0.5*(a+b)*c;
        cout << fixed;
        cout << setprecision(1) << "Area = " << calculo << endl;
    }
    return 0;
}
//Leia 3 valores reais (A, B e C) e verifique se eles formam
//ou não um triângulo. Em caso positivo, calcule o perímetro 
//do triângulo e apresente a mensagem:

//Perimetro = XX.X

//Em caso negativo, calcule a área do trapézio que tem A e B 
//como base e C como altura, mostrando a mensagem

//Area = XX.X

//Entrada
//A entrada contém três valores reais.
//Saída
//O resultado deve ser apresentado com uma casa decimal.

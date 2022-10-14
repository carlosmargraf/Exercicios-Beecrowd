#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double A, B, C, T, R1, R2;
    cin >> A >> B >> C;
    
    if(((B*B)-4*A*C)<0 || A==0)
    {
        cout << "Impossivel calcular"<< endl;
    }
    else
    {
        T = sqrt((B*B)-4*A*C);
        R1 = ((-B+T) / (2*A));
        R2 = ((-B-T) / (2*A));
        cout << fixed;
        cout << setprecision(5) << "R1 = "<< R1 << endl;
        cout << setprecision(5) << "R2 = "<< R2 << endl;
    }
    return 0;
}
//Leia 3 valores de ponto flutuante e efetue o cálculo das raízes
//da equação de Bhaskara. Se não for possível calcular as raízes, 
//mostre a mensagem correspondente “Impossivel calcular”, 
//caso haja uma divisão por 0 ou raiz de numero negativo.
//Entrada
//Leia três valores de ponto flutuante (double) A, B e C.
//Saída
//Se não houver possibilidade de calcular as raízes, 
//apresente a mensagem "Impossivel calcular". 
//Caso contrário, imprima o resultado das raízes com 
//5 dígitos após o ponto.
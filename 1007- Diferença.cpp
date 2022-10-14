#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C, D, diferenca;

    cin>>A >>B >>C >>D;
    diferenca = (A*B)-(C*D);

    cout<<"DIFERENCA = "<<diferenca<< endl;
     
    return 0;
}
//Leia quatro valores inteiros A, B, C e D. A seguir,
//calcule e mostre a diferença do produto de A e B
//pelo produto de C e D segundo a fórmula: 
//DIFERENCA = (A * B - C * D).
//Entrada
//O arquivo de entrada contém 4 valores inteiros.
//Saída
//Imprima a mensagem DIFERENCA
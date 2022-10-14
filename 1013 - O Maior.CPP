#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C, MaioAB;
    cin >> A >> B >> C;
    MaioAB = (A+B+abs(A-B))/2;
    MaioAB = (C+MaioAB+abs(MaioAB-C))/2;
    cout<< MaioAB << " eh o maior"<<endl;
    return 0;
}
//Faça um programa que leia três valores e apresente
//o maior dos três valores lidos seguido da mensagem 
//“eh o maior”. Utilize a fórmula:

//Obs.: a fórmula apenas calcula o maior entre os dois primeiros
//(a e b). Um segundo passo, portanto é necessário para chegar
//no resultado esperado.
//Entrada
//O arquivo de entrada contém três valores inteiros.
//Saída
//Imprima o maior dos três valores seguido por um espaço
//e a mensagem "eh o maior".
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i; 
    int j = 7;
    for(i = 1; i <= 9; i++)
    {
        cout << "I=" << i << " " << "J=" << j << endl;
        cout << "I=" << i << " " << "J=" << j-1 << endl;
        cout << "I=" << i << " " << "J=" << j-2 << endl;
        i++;
        j+=2;
    }
   
    return 0;
}
//Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.
//Entrada

//Não há nenhuma entrada neste problema.
//Saída

//Imprima a sequencia conforme exemplo abaixo.
//Exemplo de Entrada 	Exemplo de Saída
	

//                           I=1 J=7
//                           I=1 J=6
//                           I=1 J=5
//                           I=3 J=9
//                           I=3 J=8
//                           I=3 J=7

//                             ...
//                           I=9 J=15
//                           I=9 J=14
//                           I=9 J=13
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float i = 0;
    float j = 1;

    while (i <= 2.1)
    {
        cout << "I=" << i << " " << "J=" << j+i << endl;
        cout << "I=" << i << " " << "J=" << j+1+i << endl;
        cout << "I=" << i << " " << "J=" << j+2+i << endl;
        i+= 0.2;
    }
    
    return 0;
}
//Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.
//Entrada

//Não há nenhuma entrada neste problema.
//Saída

//Imprima a sequencia conforme exemplo abaixo.
//Exemplo de Entrada 	Exemplo de Saída
	

//                          I=0 J=1
//                          I=0 J=2
//                          I=0 J=3
//                          I=0.2 J=1.2
//                          I=0.2 J=2.2
//                          I=0.2 J=3.2
//                               .....
//                          I=2 J=?
//                          I=2 J=?
//                          I=2 J=?
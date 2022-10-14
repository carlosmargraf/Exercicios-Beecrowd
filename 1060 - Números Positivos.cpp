#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float numero;
    int x, sum=0;

    for(x = 1; x <= 6; x++ )
    {
        cin >> numero;
        if(numero > 0)
        {
            sum++;
        }
    }
    cout << sum << " valores positivos" << endl;
    return 0;
}
//Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos 
//(desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

//Entrada
//Seis valores, negativos e/ou positivos.

//Saída
//Imprima uma mensagem dizendo quantos valores positivos foram lidos.


//Exemplo de Entrada 	Exemplo de Saída

// 7
// -5
// 6
// -3.4                 4 valores positivos
// 4.6
// 12
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double numero, positivos = 0, media = 0;
    int x;    

    for(x = 0; x < 6; x++ ) // percorre 6 entradas de valores 
    {
        cin >> numero;
        if(numero > 0) // se numero ser maior > que 0 nao e negativo e positivo 
        {
            positivos++;
            media += numero;
        }
    }
    cout << positivos << " valores positivos" << endl;
    cout << fixed << setprecision(1);
    cout << media/positivos << endl;
    return 0;
}
//Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos.
//Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, 
//com um dígito após o ponto decimal.

//Entrada
//A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. 
//Pelo menos um destes números será positivo.

//Saída
//O primeiro valor de saída é a quantidade de valores positivos. A próxima linha 
//deve mostrar a média dos valores positivos digitados.

//Exemplo de Entrada 	Exemplo de Saída

//      7
//     -5
//      6
//    -3.4                    4 valores positivos
//     4.6                    7.4
//     12
	


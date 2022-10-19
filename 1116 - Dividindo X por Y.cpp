#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    int n, x;
    cin >> n;

    for(x = 0; x < n; x++)
    {
        cin >> a >> b;
        
        if(b == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            cout << fixed << setprecision(1) << ((float)a/(float)b) << endl;
        }
    }
    return 0;
}
//Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. 
//Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.

//Entrada

//A entrada contém um número inteiro N. Este N será a quantidade de pares de valores inteiros 
//(X e Y) que serão lidos em seguida.

//Saída

//Para cada caso mostre o resultado da divisão com um dígito após o ponto decimal, 
//ou “divisao impossivel” caso não seja possível efetuar o cálculo.

//Obs.: Cuide que a divisão entre dois inteiros em algumas linguagens como o C e C++ gera outro inteiro. 
//Utilize cast :)

//Exemplo de Entrada 	Exemplo de Saída

//         3                
//       3-2                 -1.5       
//      -8 0           divisao impossivel          
//       0 8                  0.0
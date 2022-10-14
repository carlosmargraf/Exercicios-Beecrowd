#include <iostream>

using namespace std;

int main(){
    double N;
    int inteiro, aux, aux1;

    while(cin >> N)
    {
        inteiro = N;
        N = 100*N;
        aux1 = N;


        cout << "NOTAS:"<<endl;
        cout << inteiro/100 << " nota(s) de R$ 100.00"<< endl;
        aux = (inteiro%100);
        cout << aux/50 << " nota(s) de R$ 50.00"<< endl;
        aux = (aux%50);
        cout << aux/20 << " nota(s) de R$ 20.00"<< endl;
        aux = (aux%20);
        cout << aux/10 << " nota(s) de R$ 10.00"<< endl;
        aux = (aux%10);
        cout << aux/5 << " nota(s) de R$ 5.00"<< endl;
        aux = (aux%5);
        cout << aux/2 << " nota(s) de R$ 2.00"<< endl;
        aux = (aux%2);

        cout << "MOEDAS:"<< endl;
        cout << aux/1 << " moeda(s) de R$ 1.00"<< endl;
        aux1 = aux1%100;
        cout <<  aux1/50 << " moeda(s) de R$ 0.50"<< endl;
        aux1 = aux1%50;
        cout <<  aux1/25 << " moeda(s) de R$ 0.25"<< endl;
        aux1 = aux1%25;
        cout <<  aux1/10 << " moeda(s) de R$ 0.10"<< endl;
        aux1 = aux1%10;
        cout <<  aux1/5 << " moeda(s) de R$ 0.05"<< endl;
        aux1 = aux1%5;
        cout <<  aux1/1 << " moeda(s) de R$ 0.01"<< endl;
    }

    return 0;
}
//Leia um valor de ponto flutuante com duas casas decimais. 
//Este valor representa um valor monetário. 
//A seguir, calcule o menor número de notas e moedas 
//possíveis no qual o valor pode ser decomposto. 
//As notas consideradas são de 100, 50, 20, 10, 5, 2. 
//As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
//A seguir mostre a relação de notas necessárias.
//Entrada
//O arquivo de entrada contém um valor de ponto 
//flutuante N (0 ≤ N ≤ 1000000.00).
//Saída
//Imprima a quantidade mínima de notas e moedas necessárias 
//para trocar o valor inicial, conforme exemplo fornecido.
//Obs: Utilize ponto (.) para separar a parte decimal.

//Exemplo de Entrada 	Exemplo de Saída

//576.73                NOTAS: 5 nota(s) de R$ 100.00
//                             1 nota(s) de R$ 50.00
//                             1 nota(s) de R$ 20.00
//                             0 nota(s) de R$ 10.00
//                             1 nota(s) de R$ 5.00
//                             0 nota(s) de R$ 2.00
//                     MOEDAS: 1 moeda(s) de R$ 1.00
//                             1 moeda(s) de R$ 0.50
//                             0 moeda(s) de R$ 0.25
//                             2 moeda(s) de R$ 0.10
//                             0 moeda(s) de R$ 0.05
//                             3 moeda(s) de R$ 0.01
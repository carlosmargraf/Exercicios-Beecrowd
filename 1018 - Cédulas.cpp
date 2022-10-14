#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, b;
    cin >> n;
    cout << n << endl;
    cout << n/100 << " notas(s) de R$ 100,00" << endl;
    b = (n%100);
    cout << b/50 << " notas(s) de R$ 50,00" << endl;
    b = (b%50);
    cout << b/20 << " notas(s) de R$ 20,00" << endl;
    b = (b%20);
    cout << b/10 << " notas(s) de R$ 10,00" << endl;
    b = (b%10);
    cout << b/5 << " notas(s) de R$ 5,00" << endl;
    b = (b%5); 
    cout << b/2 << " notas(s) de R$ 2,00" << endl;
    b = (b%2);
    cout << b/1 << " notas(s) de R$ 1,00" << endl;

    return 0;
}
//Leia um valor inteiro. A seguir, calcule o menor número de notas
//possíveis (cédulas) no qual o valor pode ser decomposto.
//As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. 
//A seguir mostre o valor lido e a relação de notas necessárias.
//Entrada
//O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).
//Saída
//Imprima o valor lido e, em seguida, a quantidade mínima de notas
//de cada tipo necessárias, conforme o exemplo fornecido. 
//Não esqueça de imprimir o fim de linha após cada linha

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, n, i;
    int soma = 0;

    while(cin >> a)
    {
        cin >> n;
        while(n <= 0)
        {
            cin >> n;
        }
        for(i = 0; i < n; i++)
        {
            soma += (a + i);
        }
        cout << soma << endl;
        soma = 0;
    }
    return 0;
}
//Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de A + i para cada i com os valores 
//(0 <= i <= N-1). Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.

//Entrada
//A entrada contém somente valores inteiros, podendo ser positivos ou negativos. Todos os valores estão na 
//mesma linha.

//Saída
//A saída contém apenas um valor inteiro.
//Exemplo de Entrada 	Exemplo de Saída

//3 2                         7

//3 -1 0 -2 2                 7
#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int codigo_1, codigo_2, numero_1, numero_2;
    double valor_uni1, valor_uni2, calculo;

    cin>> codigo_1 >> numero_1 >> valor_uni1;
    cin>> codigo_2 >> numero_2 >> valor_uni2;

    calculo = (numero_1*valor_uni1)+(numero_2*valor_uni2);
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ "<<setprecision(2)<<calculo<<endl;

    return 0;
}
//Neste problema, deve-se ler o código de uma peça 1,
//o número de peças 1, o valor unitário de cada peça 1,
//o código de uma peça 2, o número de peças 2
//e o valor unitário de cada peça 2. Após, calcule e 
//mostre o valor a ser pago.
//Entrada
//O arquivo de entrada contém duas linhas de dados.
//Em cada linha haverá 3 valores, respectivamente dois inteiros
//e um valor com 2 casas decimais.
//Saída
//A saída deverá ser uma mensagem conforme o exemplo fornecido
//abaixo, lembrando de deixar um espaço após os dois pontos
//e um espaço após o "R$". O valor deverá ser apresentado 
//com 2 casas após o ponto.

//Exemplos de Entrada 	Exemplos de Saída

//12 1 5.30
//16 2 5.10             VALOR A PAGAR: R$ 15.50
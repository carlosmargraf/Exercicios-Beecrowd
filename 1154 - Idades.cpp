#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int idade;
    float media = 0.0, cont = 0.0;

    cin >> idade;
    
    while(idade > 0)
    {
        media += idade;
        cont++;
        cin >> idade;
    }
    cont *= 1.0;
    cout << fixed << setprecision(2);
    cout << media/cont << endl;
    return 0;
}
//Faça um algoritmo para ler um número indeterminado de dados, 
//contendo cada um, a idade de um indivíduo. O último dado, 
//que não entrará nos cálculos, contém o valor de idade negativa. 
//Calcular e imprimir a idade média deste grupo de indivíduos.

//Entrada
//A entrada contém um número indeterminado de inteiros. 
//A entrada será encerrada quando um valor negativo for lido.

//Saída
//A saída contém um valor correspondente à média de idade dos indivíduos.
//A média deve ser impressa com dois dígitos após o ponto decimal.

//Exemplo de Entrada 	Exemplo de Saída

// 34                       39.25
// 56
// 44
// 23
// -2
	


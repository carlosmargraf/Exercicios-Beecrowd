#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float n, n_1, n_2;
    n_1 = 0;
    n_2 = 0;
        
    while(true)
    {
        cin >> n;
        if(n < 0 || n > 10)
        {
            cout << "nota invalida" << endl;
        }
        else if(n_2 == 0)
        {
            n_1 = n;
            n_2 = 1;
        }
        else
        {
            cout << "media = " << (n_1+n)/2 << endl;
            break;
        }
    }
    return 0;
}
//Faça um programa que leia as notas referentes às duas avaliações de um aluno. 
//Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas 
//válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve 
//ser validada separadamente.

//Entrada
//A entrada contém vários valores reais, positivos ou negativos. 
//O programa deve ser encerrado quando forem lidas duas notas válidas.

//Saída
//Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".
//Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = " 
//seguido do valor do cálculo. O valor deve ser apresentado com duas casas após 
//o ponto decimal.

//Exemplo de Entrada 	Exemplo de Saída

//       -3.5            nota invalida
//        3.5            nota invalida
//       11.0            media = 6.75
//       10.0
	






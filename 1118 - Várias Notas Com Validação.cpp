#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    float n_1 = -1, n_2 = -1;
    int valor = 1;

    while(valor == 1)
    {
        do
        {
            cin >> n_1;
            if(n_1 < 0 || n_1 > 10)
            { 
                cout << "nota invalida" << endl;
            }
        } 
        while(n_1 < 0 || n_1 > 10);
        do
        {
            cin >> n_2;
            if(n_2 < 0 || n_2 > 10)
            {
                cout << "nota invalida" << endl;
            }
        }
        while(n_2 < 0 || n_2 > 10);
        {
            cout << "media = " << fixed << setprecision(2) << ((n_1+n_2)/2) << endl;
        }
        do
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> valor;
        } while (valor != 1 && valor != 2);              
    }
    return 0;
}
//Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. 
//Calcule e imprima a média semestral. O programa só deverá aceitar notas válidas 
//(uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada 
//separadamente.

//No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao 
//usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o 
//algoritmo novamente, (aceitar apenas os código 1 ou 2). Se for informado o 
//código 1 deve ser repetida a execução de todo o programa para permitir um novo 
//cálculo, caso contrário o programa deve ser encerrado.

//Entrada
//O arquivo de entrada contém vários valores reais, positivos ou negativos. 
//Quando forem lidas duas notas válidas, deve ser lido um valor inteiro X . 
//O programa deve parar quando o valor lido para este X for igual a 2.

//Saída
//Se uma nota inválida for lida, deve ser impressa a mensagem “nota invalida”. 
//Quando duas notas válidas forem lidas, deve ser impressa a mensagem “media = ” 
//seguido do valor do cálculo.

//Antes da leitura de X deve ser impressa a mensagem "novo calculo (1-sim 2-nao)" 
//e esta mensagem deve ser apresentada novamente se o valor da entrada padrão para 
//X for menor do que 1 ou maior do que 2, conforme o exemplo abaixo.

//A média deve ser impressa com dois dígitos após o ponto decimal.

//Exemplo de Entrada 	Exemplo de Saída

//-3.5                  nota invalida
//3.5                   
//11.0                  nota invalida
//10.0                  media = 6.75
//                      novo calculo (1-sim 2-nao)                 
//4
//1                     novo calculo (1-sim 2-nao)          
//8.0
//9.0                   media = 8.50
//                      novo calculo (1-sim 2-nao)
//2
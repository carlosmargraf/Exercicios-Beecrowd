#include<iostream>
#include<iomanip>

using namespace std;



int main(int argc, char const *argv[])
{   
    string NOME;
    double salario, vendas, total;

    cin>> NOME >> salario >> vendas;
    

    total = (vendas*0.15)+salario;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ "<<setprecision(2)<<total<<endl;
      
    return 0;
}
//Faça um programa que leia o nome de um vendedor,
//o seu salário fixo e o total de vendas efetuadas por ele no mês
//(em dinheiro). Sabendo que este vendedor ganha 15% de comissão
//sobre suas vendas efetuadas, informar o total a receber no
//final do mês, com duas casas decimais.
//Entrada
//O arquivo de entrada contém um texto (primeiro nome do vendedor)
//e 2 valores de dupla precisão (double) com duas casas decimais,
//representando o salário fixo do vendedor e montante total
//das vendas efetuadas por este vendedor, respectivamente.
//Saída
//Imprima o total que o funcionário deverá receber,
//conforme exemplo fornecido.


//Exemplos de Entrada 	Exemplos de Saída
//JOAO
//500.00
//1230.30               TOTAL = R$ 684.54

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int dias, cal;
    cin >> dias;
    cout << dias/365 << " anos(s)" << endl;
    cal = (dias%365);
    cout << cal/30 << " meses(es)" << endl;
    cout << cal%30 << " dias(s)" << endl;

    return 0;
}
//Leia um valor inteiro correspondente à idade
//de uma pessoa em dias e informe-a em anos, 
//meses e dias
//Obs.: apenas para facilitar o cálculo, considere
//todo ano com 365 dias e todo mês com 30 dias. 
//Nos casos de teste nunca haverá uma situação 
//que permite 12 meses e alguns dias, como 360, 
//363 ou 364. Este é apenas um exercício com 
//objetivo de testar raciocínio matemático simples.
//Entrada
//O arquivo de entrada contém um valor inteiro.
//Saída
//Imprima a saída.

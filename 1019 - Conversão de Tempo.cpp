#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
int N;
cin >> N;
cout << N/3600 << ":" << (N%3600)/60 << ":" << N%60 << endl;

return 0;
}
//Leia um valor inteiro, que é o tempo de duração em segundos
//de um determinado evento em uma fábrica, e informe-o expresso
//no formato horas:minutos:segundos.
//Entrada
//O arquivo de entrada contém um valor inteiro N.
//Saída
//Imprima o tempo lido no arquivo de entrada (segundos),
//convertido para horas:minutos:segundos
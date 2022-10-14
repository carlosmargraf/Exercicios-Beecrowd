#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double raio; 
    cin>>raio;
    cout << fixed << setprecision(4); //com 4 casas após o ponto decimal
    cout<<"A="<< 3.14159*raio*raio << endl;
    
    return 0;
}

//A fórmula para calcular a área de uma circunferência é:
//area = π . raio². Considerando para este problema que 
//π = 3.14159:
//Efetue o cálculo da área, elevando o valor de raio ao 
//quadrado e multiplicando por π.
//Entrada
//A entrada contém um valor de ponto flutuante (dupla precisão),
// no caso, a variável raio.
//Saída
//Apresentar a mensagem "A=" seguido pelo valor da variável
//area, conforme exemplo abaixo, com 4 casas após o ponto decimal.
//Utilize variáveis de dupla precisão (double).
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double x1, x2, y1, y2, distacia;
    
    cin >> x1 >> y1 >> x2 >> y2;
    distacia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    
    cout << fixed << setprecision(4);
    cout << setprecision(4) << distacia << endl;
    
    return 0;
}
//Leia os quatro valores correspondentes aos eixos x e y de dois
//pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a
//distância entre eles, mostrando 4 casas decimais após a vírgula,
//segundo a fórmula: 
//Distancia = dAB² = (xB – xA)² + (yB – yA)²
//Entrada
//O arquivo de entrada contém duas linhas de dados. A primeira
//linha contém dois valores de ponto flutuante: x1 y1 e a
//segunda linha contém dois valores de ponto flutuante x2 y2.
//Saída
//Calcule e imprima o valor da distância segundo a fórmula
//fornecida, com 4 casas após o ponto decimal.
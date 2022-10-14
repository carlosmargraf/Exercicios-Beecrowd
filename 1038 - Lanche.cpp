#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, B;
    double cacho=4.00 , Xsalada=4.50, Xbacon=5.00, Torrada=2.00, Refri=1.50, C=0;

    cin >> A >> B;
    if(A==1)
    {
        C=cacho*B;
    }
    else if (A==2)
    {
        C=Xsalada*B;
    }
    else if (A==3)
    {
        C=Xbacon*B;
    }
    else if (A==4)
    {
        C=Torrada*B;
    }
    else if (A==5)
    {
        C=Refri*B;
    }
    cout << fixed << setprecision(2)<< "Total: R$ " << C << endl;
    
    return 0;
}
//Com base na tabela abaixo, escreva um programa que leia o código de um item
//e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

// CODIGO       ESPECIFICAÇÃO     PREÇO
//   1         Cachorro Quente   R$ 4.00
//   2            X-Salada       R$ 4.50
//   3            X-Bacon        R$ 5.00
//   4        Torrada Simples    R$ 2.00
//   5         Refregerente      R$ 1.50

//Entrada
//O arquivo de entrada contém dois valores inteiros correspondentes ao código
//e à quantidade de um item conforme tabela acima.
//Saída
//O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a 
//ser pago, com 2 casas após o ponto decimal.
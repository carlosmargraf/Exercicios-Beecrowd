#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero;
    cin >> numero;

    if(numero==1)
    {
        cout << "January" << endl;
    }
    else if(numero==2)
    {
        cout << "February" << endl;
    }
    else if(numero==3)
    {
        cout << "March" << endl;
    }
    else if(numero==4)
    {
        cout << "April" << endl;
    }
    else if(numero==5)
    {
        cout << "May" << endl;
    }
    else if(numero==6)
    {
        cout << "June" << endl;
    }
    else if(numero==7)
    {
        cout << "July" << endl;
    }
    else if(numero==8)
    {
        cout << "August" << endl;
    }
    else if(numero==9)
    {
        cout << "September" << endl;
    }
    else if(numero==10)
    {
        cout << "October" << endl;
    }
    else if(numero==11)
    {
        cout << "November" << endl;
    }
    else if(numero==12)
    {
        cout << "December" << endl;
    }
    return 0;
}
//Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, 
//deve ser apresentado como resposta o mês do ano por extenso, em inglês, 
//com a primeira letra maiúscula.

//Entrada
//A entrada contém um único valor inteiro.

//Saída
//Imprima por extenso o nome do mês correspondente ao número existente 
//na entrada, com a primeira letra em maiúscula.


//Exemplo de Entrada 	Exemplo de Saída
//        4                  April
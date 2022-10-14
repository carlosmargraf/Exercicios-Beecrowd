#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double salario, porcentagen, novo_salario;
    int percentual;    

    cin >> setprecision(2);
    cin >> salario;

    if(salario <= 400.00)
    {
        percentual = 15;
        porcentagen = (salario*percentual)/100;
        novo_salario = salario + porcentagen;                
    }
    else if(salario >= 400.01 && salario <= 800.00)
    {
        percentual = 12;
        porcentagen = (salario*percentual)/100;
        novo_salario = salario + porcentagen;        
    }
    else if(salario >= 800.01 && salario <= 1200.00)
    {
        percentual = 10;
        porcentagen = (salario*percentual)/100;
        novo_salario = salario + porcentagen;        
    }
    else if(salario >= 1200.01 && salario <= 2000.00)
    {
        percentual = 7;
        porcentagen = (salario*percentual)/100;
        novo_salario = salario + porcentagen;        
    }
    if(salario >= 2000.01)
    {
        percentual = 4;
        porcentagen = (salario*percentual)/100;
        novo_salario = salario + porcentagen;        
    }
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << setprecision(2) << novo_salario << endl;
    cout << "Reajuste ganho: " << setprecision(2) << porcentagen << endl;
    cout << "Em percentual: " << percentual << " %" << endl;

    return 0;
}
//A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a 
//tabela abaixo:

//    Salário 	        Percentual de Reajuste

//0 - 400.00                     15%
//400.01 - 800.00                12%
//800.01 - 1200.00               10%
//1200.01 - 2000.00               7%
//Acima de 2000.00                4%


//Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de 
//reajuste ganho e o índice reajustado, em percentual.

//Entrada
//A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

//Saída
//Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste 
//(ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho.

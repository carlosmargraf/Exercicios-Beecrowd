#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int menu;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    while(true)
    {
        cin >> menu;
        if(menu == 1) alcool++;
        else if(menu == 2) gasolina++;
        else if(menu == 3) diesel++;
        else if(menu == 4) break;
        else continue;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}
//Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. 
//Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 
//1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) 
//deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o código informado 
//for o número 4.

//Entrada
//A entrada contém apenas valores inteiros e positivos.

//Saída
//Deve ser escrito a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que 
//abasteceram cada tipo de combustível, conforme exemplo.

//Exemplo de Entrada 	Exemplo de Saída

//8                     MUITO OBRIGADO
//1                     Alcool: 1
//7                     Gasolina: 2
//2                     Diesel: 0
//2
//4
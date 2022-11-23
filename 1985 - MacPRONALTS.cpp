#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int qnts_produtos, codg_produto, quantidade, i;
    float soma = 0.0;

    cin >> qnts_produtos;

    for(i = 0; i < qnts_produtos; i++)
    {
        cin >> codg_produto >> quantidade;
        if (codg_produto == 1001)
        {
            soma += 1.5 * quantidade; 
        }
        if (codg_produto == 1002)
        {
            soma += 2.50 * quantidade;
        }
        if (codg_produto == 1003)
        {
            soma += 3.50 * quantidade;
        }
        if (codg_produto == 1004)
        {
            soma += 4.50 * quantidade;
        }
        if (codg_produto == 1005)
        {
            soma += 5.50 * quantidade;
        }
    }    
    cout << fixed << setprecision(2) << soma << endl;
    
    return 0;
}
//O MacPRONALTS está com uma super promoção, exclusivo para os competidores da primeira 
//Seletiva do MaratonaTEC. Só que teve um problema, todos os maratonistas foram tentar 
//comprar ao mesmo tempo, com isso gerou uma fila muito grande. O pior é que a moça do 
//caixa estava sem calculadora ou um programa para ajudá-la a calcular com maior agilidade, 
//eis que surge você para fazer um programa para ajudar a coitada e aumentar a renda do MacPRONALTS. 
//Segue o cardápio do dia contendo o número do produto e seu respectivo valor.

//                             1001 | R$ 1.50

//                             1002 | R$ 2.50

//                             1003 | R$ 3.50

//                             1004 | R$ 4.50

//                             1005 | Rcodg_produto
//Entrada
//A primeira entrada informada é a quantidade de produtos comprados (1 <= p <= 5). 
//Para cada produto segue a quantidade (1 <= q <= 500) que o consumidor comprou.

//Obs.: não poderão ser informados números de produtos repetidos.

//Saída
//Você deve imprimir o valor da compra com duas casas decimais.

//Input Sample 	Output Sample

//    2
// 1001 2
// 1005 3            19.50

//    1
// 1003 500        1750.00

//    5
// 1001 500
// 1005 300
// 1003 23
// 1002 52
// 1004 44         2808.50
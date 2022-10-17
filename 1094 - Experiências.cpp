#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, q, x;
    char t;
    double sapo = 0, rato = 0, coelho = 0, total = 0;
    double percentual_c, percentual_r, percentual_s;
    
    cin >> n;
    for(x = 0; x < n; x++)
    {
        cin >> q >> t;
        total += q;

        if(t == 'C')
        {
            coelho += q;
        }
        if(t == 'S')
        {
            sapo += q;
        }
        if(t == 'R')
        {
            rato += q;
        }                       
    }

    percentual_c = ((coelho/total)*100.00);
    percentual_r = ((rato/total)*100.00);
    percentual_s = ((sapo/total)*100.00);    

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << setprecision(2) << percentual_c << " %" << endl;
    cout << "Percentual de ratos: " << setprecision(2) << percentual_r << " %" << endl;
    cout << "Percentual de sapos: "<< setprecision(2) << percentual_s << " %" << endl;     
    return 0;
}
//Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa 
//de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. 
//Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o 
//percentual de cada tipo de cobaia utilizada.

//Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. 
//Para obter estas informações, ela sabe exatamente o número de experimentos que foram 
//realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada 
//experimento.

//Entrada
//A primeira linha de entrada contém um valor inteiro N que indica os vários casos de 
//teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) 
//que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), 
//indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

//Saída
//Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o 
//percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual 
//deve ser apresentado com dois dígitos após o ponto.

//Exemplo de Entrada 	Exemplo de Saída

//       10             Total: 92 cobaias
//       10 C           Total de coelhos: 29
//        6 R           Total de ratos: 40
//       15 S           Total de sapos: 23
//        5 C           Percentual de coelhos: 31.52 %
//       14 R           Percentual de ratos: 43.48 %
//        9 C           Percentual de sapos: 25.00 %
//        6 R
//        8 S
//        5 C
//       14 R
	








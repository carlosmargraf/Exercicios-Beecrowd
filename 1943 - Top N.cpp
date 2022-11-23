#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int k;
    cin >> k;

    if (k == 1)
    {
        cout << "Top 1" << endl;
    }
    if (k == 2 || k == 3)
    {
        cout << "Top 3" << endl;
    }
    if (k == 4 || k == 5)
    {
        cout << "Top 5" << endl;
    }
    if(k > 5 && k <= 10)
    {
        cout << "Top 10" << endl;
    }
    if (k > 10 && k <= 25)
    {
        cout << "Top 25" << endl;
    }
    if (k > 25 && k <= 50) 
    {
        cout << "Top 50" << endl;
    }
    if (k > 50 && k <= 100)
    {
        cout << "Top 100" << endl;
    }    
    return 0;
}
//Recentemente aconteceu a fase regional da Maratona de Programação da SBC, 
//onde mais de 600 times participaram em mais de 40 sedes diferentes pelo Brasil. 
//Seu amigo participou da competição, e quando questionado sobre sua 
//colocação lhe disse: “Ficamos no top 10”.

//Você ficou feliz pelo seu amigo, mas não pode deixar de ficar curioso sobre qual 
//foi sua real colocação. “Top 10” poderia indicar qualquer posição entre primeiro e 
//décimo colocado, porém se ele estivesse em primeiro provavelmente teria dito “Top 1”, 
//se estivesse em segundo ou terceiro provavelmente teria dito “Top 3”, e se estivesse 
//em quarto ou quinto provavelmente teria dito “Top 5”. Logo, sua real colocação foi 
//entre sexto e décimo, pois as pessoas geralmente se colocam na menor categoria 
//a qual pertencem.

//Você reuniu então todas as categorias de colocações que as pessoas mais usam: 
//1, 3, 5, 10, 25, 50 e 100. Dada uma colocação K, diga o número da menor categoria 
//que esta colocação pertence.

//Entrada
//Cada caso de teste contém um inteiro K, representando uma colocação (1 ≤ K ≤ 100).

//Saída
//Para cada caso de teste imprima uma linha contendo a frase “Top N”, e substitua a 
//letra N pelo número da menor categoria que a colocação K pertence.

//Exemplos de Entrada 	Exemplos de Saída

//         7                 Top 10

//        25                 Top 25

//        26                 Top 50
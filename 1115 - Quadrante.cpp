#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;

    while(cin >> x >> y)
    {
        if(x > 0 && y > 0)
        {
            cout << "primeiro" << endl;
        }
        if(x < 0 && y > 0)
        {
            cout << "segundo" << endl;
        }
        if(x < 0 && y < 0)
        {
            cout << "terceiro" << endl;
        }
        if(x > 0 && y < 0)
        {
            cout << "quarto" << endl;
        }
        if(x == 0 && y > 0)
        {
            cout << " " << endl;
        }
    }
    return 0;
}
//Escreva um programa para ler as coordenadas (X,Y) de uma quantidade 
//indeterminada de pontos no sistema cartesiano. Para cada ponto 
//escrever o quadrante a que ele pertence. O algoritmo será encerrado 
//quando pelo menos uma de duas coordenadas for NULA 
//(nesta situação sem escrever mensagem alguma).

//Entrada
//A entrada contém vários casos de teste. Cada caso de teste contém 
//2 valores inteiros.

//Saída
//Para cada caso de teste mostre em qual quadrante do sistema cartesiano 
//se encontra a coordenada lida, conforme o exemplo.

//Exemplo de Entrada 	Exemplo de Saída

//2 2                   primeiro
//3 -2                  quarto
//-8 -1                 terceiro
//-7 1                  segundo
//0 2
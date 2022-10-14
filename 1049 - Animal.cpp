#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char entrada1[25];
    char entrada2[25];
    char entrada3[25];

    cin >> entrada1 >> entrada2 >> entrada3;

    if(!strcmp(entrada1, "vertebrado"))
    {
        if(!strcmp(entrada2, "ave"))
        {
            if(!strcmp(entrada3, "carnivoro"))
            {
                cout << "aguia" << endl;
            }
             if(!strcmp(entrada3, "onivoro"))
             {
                cout << "pomba" << endl;
             }
        }
    }   
    if(!strcmp(entrada2, "mamifero"))
    {
        if(!strcmp(entrada3, "onivoro"))
        {
            cout << "homem" << endl;
        }
        if(!strcmp(entrada3, "herbivoro"))
        {
            cout << "vaca" << endl;
        }
    }
    if(!strcmp(entrada1, "invertebrado"))
    {
        if(!strcmp(entrada2, "inseto"))
        {
            if(!strcmp(entrada3, "hematofago"))
            {
                cout << "pulga" << endl;
            }
            if(!strcmp(entrada3, "herbivoro"))
            {
                cout << "lagarta" << endl;
            }
        }
    }
    if(!strcmp(entrada2, "anelideo"))
    {
        if(!strcmp(entrada3, "hematofago"))
        {
            cout << "sanguessuga" << endl;
        }
        if(!strcmp(entrada3, "onivoro"))
        {
            cout << "minhoca" << endl;
        }
    }
    return 0;
}
//Neste problema, você deverá ler 3 palavras que definem o tipo de animal 
//possível segundo o esquema abaixo, da esquerda para a direita.  
//Em seguida conclua qual dos animais seguintes foi escolhido, 
//através das três palavras fornecidas.

//Entrada
//A entrada contém 3 palavras, uma em cada linha, necessárias para 
//identificar o animal segundo a figura acima, com todas 
//as letras minúsculas.

//Saída
//Imprima o nome do animal correspondente à entrada fornecida.

//Exemplos de Entrada 	Exemplos de Saída

//vertebrado
//mamifero                  homem
//onivoro
	
//vertebrado
//ave                       aguia
//carnivoro
	
//invertebrado
//anelideo                  minhoca
//onivoro
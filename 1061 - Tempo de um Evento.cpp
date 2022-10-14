#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
    int d = 0, h = 0, m = 0, s = 0;
    int df = 0, hf = 0, mf = 0, sf = 0;
    char dia[4];
    char pontos[3];
    char diaf[4];
    char pontosf[3];
    
    cin.get(dia, 4);
    cin >> d;
    cin >> h;
    cin.get(pontos, 3);
    cin >> m;
    cin.get(pontos, 3);
    cin >> s;
    cin.getline(dia, 0);
    cin.get(dia, 4);
    cin >> df;
    cin >> hf;
    cin.get(pontosf, 3);
    cin >> mf;
    cin.get(pontosf, 3);
    cin >> sf;
    
    long dur = (df*86400+hf*3600+mf*60+sf)-(d*86400+h*3600+m*60+s);
    cout << dur/86400 <<  " dia(s)" << endl;
    cout << (dur%86400)/3600 << " hora(s)" << endl;
    cout << ((dur%86400)%3600)/60 << " minuto(s)" << endl;
    cout << ((dur%86400)%3600)%60 << " segundo(s)" << endl;
 
    return 0;
}
//Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, 
//iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que 
//o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

//Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar 
//Pedrinho a calcular a duração deste evento.

//Entrada
//Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o 
//dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no 
//qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada 
//haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do 
//evento.

//Saída
//Na saída, deve ser apresentada a duração do evento, no seguinte formato:

//W dia(s)
//X hora(s)
//Y minuto(s)
//Z segundo(s)

//Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.
//Exemplo de Entrada 	Exemplo de Saída

//Dia 5                 3 dia(s)
//08 : 12 : 23          22 hora(s)
//Dia 9                 1 minuto(s)
//06 : 13 : 23          0 segundo(s)
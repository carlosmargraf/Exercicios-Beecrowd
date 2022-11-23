#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, M, resultado, total;

    cin >> A >> M;

    resultado = M*2;
    total = resultado - A;

    cout << total << endl;
    return 0;
}
//João aprendeu na escola que a média de dois números é o valor da soma desses dois números dividido 
//por dois. Ou seja, a média de dois números A e B é M = (A+B)/2 .

//A professora contou para João as notas que ele tirou nas duas provas de Geografia. 
//As duas notas são números inteiros entre 0 e 100. João prontamente calculou a média das duas provas, 
//que também resultou em um número inteiro.

//Mas João é muito esquecido, e agora não consegue lembrar-se das duas notas que tirou na prova. 
//Ele consegue se lembrar de apenas uma das notas das provas. Por sorte, ele consegue se lembrar 
//também da média entre as duas notas. Você pode ajudar

//João a determinar a nota da outra prova?

//Entrada
//A primeira linha contém um número inteiro A, indicando a nota de uma prova. A segunda linha contém 
//um número inteiro M, indicando a média entre as duas notas das provas.

//Saída
//Seu programa deve produzir uma única linha, com apenas um número inteiro, a nota da outra prova, 
//que João não consegue recordar.

//Restrições

//• 0 ≤ A ≤ 100

//• 0 ≤ M ≤ 100

//Informações sobre a pontuação

//• Para um conjunto de casos de testes valendo 10 pontos, as duas notas das provas são iguais.
//Exemplos de Entrada 	Exemplos de Saída

//       100

//       70                    40

//       80

//       75                    70

//        1

//       50                    99
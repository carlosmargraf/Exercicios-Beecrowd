#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int gols_inter, gols_gremio;
    int opcao;
    int inter = 0, gremio = 0, grenal = 0, empate = 0;
    
    while (true)
    {
        cin >> gols_inter >> gols_gremio;

        if(gols_inter > gols_gremio)
        inter ++;
        if(gols_inter < gols_gremio)
        gremio ++;
        if(gols_inter == gols_gremio)
        empate ++;
        grenal ++;
        
        cout <<"Novo grenal (1-sim 2-nao)" << endl;
        cin >> opcao;
        if(opcao == 2)
        break;
    }
    cout << grenal << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empate << endl;

    if(inter > gremio)
    {
        cout << "Inter venceu mais" << endl; 
    }
    if(inter < gremio)
    {
        cout << "Gremio venceu mais" << endl;
    }
    if(inter == gremio)
    {
        cout << "Nao houve vencedor" << endl;
    }
    return 0;
}
//A Federação Gaúcha de Futebol contratou você para escrever um programa 
//para fazer uma estatística do resultado de vários GRENAIS. Escreva um programa
//para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. 
//Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. 
//Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número 
//de gols marcados pelos times em uma nova partida, caso contrário deve ser 
//encerrado imprimindo:

//- Quantos GRENAIS fizeram parte da estatística.
//- O número de vitórias do Inter.
//- O número de vitórias do Grêmio.
//- O número de Empates.
//- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS 
// (ou "Nao houve vencedor", caso termine empatado).

//Entrada
//O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols 
//marcados pelo Inter e pelo Grêmio respectivamente. Em seguida háverá um 
//inteiro (1 ou 2), correspondente à repetição do programa.

//Saída
//Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)".
//Quando o algoritmo for encerrado devem ser mostradas as estatísticas conforme a 
//descrição apresentada acima. Obs: a palavra "Gremio" deve ser impressa sem acento, 
//conforme o exemplo abaixo.

//Exemplo de Entrada 	Exemplo de Saída

//3 2                   Novo grenal (1-sim 2-nao)
//1                     Novo grenal (1-sim 2-nao)
//2 3                   Novo grenal (1-sim 2-nao)
//1                     3 grenais
//3 1                   Inter:2
//2                     Gremio:1
//                      Empates:0
//                      Inter venceu mais
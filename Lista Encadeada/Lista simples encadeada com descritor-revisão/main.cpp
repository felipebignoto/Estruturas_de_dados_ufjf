#include <iostream>
#include "LSEDescritor.h"
#include <cstdlib> ///rand()
#include <ctime>   ///time()
using namespace std;


int numAleatorio(int a, int b)
{
    return a + rand()%(b - a + 1) ; /// retorna um numero inteiro aleat�rio entre a e b
}

int main()
{
    ListaEncad l; /// cria lista vazia
    ListaEncad l2;
    int NumNos = 5;

    srand(time(NULL));
    /// ATENCAO: os valores inseridos na lista sao gerados
    /// aleatoriamente e mudam em cada execucao do programa!!!
    cout << "Inserindo valores: ";
    for(int i = 1; i <= NumNos; i++)
    {
        int val =  numAleatorio(0, 50); /// cria um valor aleat�rio entre 0 e 50
        cout << val << ", ";
        l.insereInicio(val);
    }
    cout << endl;

    bool existe = l.busca(20);
    cout << "O valor 20 esta na lista? ";
    if(existe)
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;
    l.imprime();
    cout<<"quantidade de nos: "<<l.numNos()<<endl;
    cout<<"busca maior do que 30: "<<l.buscaMaior(30)<<endl;
    cout<<"Media : "<<l.calculaMedia()<<endl;

    for(int i = 0 ;i < NumNos; i++){
        l2.insereFinal(i);
    }
    cout<<endl;
    cout<<"imprimindo a lista 2: ";
    l2.imprime();
    cout<<endl;
    l.concatena(&l2);
    cout<<"imprime a lista 1 concatenado com a lista 2"<<endl;
    l.imprime();

    cout<<"partir a lista 1: "<<endl;
    l.partir(2);
    cout<<"imprimindo a lista 1 partida: "<<endl;
    l.imprime();
    return 0;
};

#include <iostream>
#include "PilhaCont.h"
using namespace std;

PilhaCont::PilhaCont(int tam)//construtor: pilha vazia, com um tamanho definido e aloca dinamicamente essa pilha
{
    max = tam;
    topo = -1;
    vet = new int[max];
}

PilhaCont::~PilhaCont()//destrutor: desaloca a pilha
{
    delete [] vet;
}

int PilhaCont::getTopo()
{
    if(topo != -1)//pilha não vazia
        return vet[topo];

    else
    {
        cout << "ERRO: Pilha vazia!" << endl;
        exit(1);
    }
}

bool PilhaCont::vazia()//retorna 1 se a pilha for vazia
{
    return (topo == -1);
}

void PilhaCont::empilha(int val)
{
    if(topo == (max - 1))
    {
        cout << "ERRO: Vetor Cheio!" << endl;
        exit(2);
    }
    topo = topo + 1;
    vet[topo] = val;

}

int PilhaCont::desempilha()
{
    if(topo == -1)
    {
        cout << "ERRO: Pilha vazia!" << endl;
        exit(1);
    }
    topo = topo - 1;
    return vet[topo + 1];
}

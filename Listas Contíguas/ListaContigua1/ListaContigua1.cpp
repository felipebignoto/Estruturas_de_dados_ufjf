#include <iostream>
#include "ListaContigua1.h"
using namespace std;

ListaCont::ListaCont(int tam)
{
    max = tam; //defino o tamanho maximo da matriz
    n = 0; //quantidade de preenchimento da matriz
    vet = new int[max]; //aloco o tamanho da matriz
}

ListaCont::~ListaCont()
{
    delete [] vet;//desaloco o vetor
}

int ListaCont::get(int k)
{
    if(k >= 0 && k < n) //verifico se o indice é valido, tem q ter valor na posição
        return vet[k];

    else{
        cout << "Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::set(int k, int val)
{
    if(k >= 0 && k < n) //verifico se o indice é valido, tem q ter valor na posição
        vet[k] = val;

    else{
        cout << "Indice invalido: set! " <<k << endl;
        exit(2);
        }
}

void ListaCont::insereFinal(int val)
{
    if(n == max){
        cout << "Vetor Cheio!" << endl;
        exit(3);
    }

    vet[n] = val;
    n = n + 1;
}

void ListaCont::removeFinal()
{
    if(n == 0){
        cout << "Lista Vazia!" << endl;
        exit(6);
    }

    n = n - 1;
}

void ListaCont::insereK(int k, int val)
{
    if(n == max)
    {
        cout << "Vetor Cheio!" << endl;
        exit(3);
    }

    if(k >= 0 && k < n)
    {
        for(int i = n-1; i >= k; i--)
            vet[i+1] = vet[i];

        vet[k] = val;
        n = n + 1;
    }

    else
    {
        cout << "Indice invalido!" << endl;
        exit(4);
    }
}

void ListaCont::removeK(int k)
{
    if(k >= 0 && k < n)
    {
// copia da dir. para esq.
        for(int i = k; i < n-1; i++)
            vet[i] = vet[i+1];

        n = n - 1;
    }
    else
    {
        cout << "Indice invalido!" << endl;
        exit(5);
    }
}


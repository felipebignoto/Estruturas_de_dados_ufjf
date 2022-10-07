#include <iostream>
#include "vetorflex.h"
using namespace std;

// construtor
VetorFlex::VetorFlex(int cc, int ff)
{
    c = cc;
    f = ff;
    n = f - c + 1;
    vet = new float[n];
}

// destrutor
VetorFlex::~VetorFlex()
{
    delete [] vet;
}

int VetorFlex::detInd(int indice)
{
    if(c <= indice && indice <= f)
        return (indice - c);
    else
        return -1;
};

float VetorFlex::get(int indice)
{
    int i = detInd(indice);
    if(i != -1)
        return vet[i];
    else
    {
        cout << "Indice invalido: get\n";
        exit(1);
    }
}


void VetorFlex:: set(int indice, float val)
{
    int i = detInd(indice);
    if(detInd(indice) != -1)
        vet[i] = val;
    else
    {
        cout << "Indice invalido: set\n";
        exit(1);
    }
}

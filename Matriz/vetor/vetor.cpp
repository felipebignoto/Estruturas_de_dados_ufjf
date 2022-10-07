#include <iostream>
#include "vetor.h"

using namespace std;

Vetor::Vetor(int tam){
    //inicializa a variavel "n" e aloca a memoria para o vetor
    n=0;
    if(tam>0)
        n=tam;
    vet = new float[n];

    //opcional - inicializar vet com zeros
    for(int i=0;i<n;i++){
        vet[i]=0.0;
    }
}

Vetor::~Vetor(){

    //desaloca a memoria alocada
    delete []vet;
}

float Vetor::get(int indice){

    if(verifica(indice) )
        return vet[indice];
    else{
        cout<<"indice invalida: get"<<endl;
        exit(1);
    }
}

bool Vetor::verifica(int indice){

    //verifica se o indice é valida
    if(indice>=0 && indice<n)
        return true;
    else
        return false;
}

void Vetor::set(int indice, float valor){

    if(verifica(indice) )
        vet[indice] = valor;
    else
        cout<<"indice invalido: set"<<endl;

}

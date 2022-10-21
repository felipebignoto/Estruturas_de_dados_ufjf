#include <iostream>
#include "MatrizSimetrica.h"
using namespace std;


MS::MS(int nn){
    n = nn;
    vet = new int[(n*n + n)/2];
}

MS::~MS(){
delete []vet;
}

int MS::get(int i,int j){

    int t = detind(i,j);
    if(t!=-2){
            return vet[t] ;

    }

    // Para ser anti-simetrica
    /*
    int t = detind(i,j);
    if(t!=-2){
        if(i>j)
            return vet[t] ;
            */
}

void MS::set(int i,int j,int valor){

    int t = detind(i,j);
    if(t!=-2){
        vet[t] = valor;
    }

}

int MS::detind(int i, int j){

    int w = verifica(i,j);

    if(w == 1){//indice valido
            if(i>j){//indice fora da triangular superior
                return ((i+1)*i)/2 + j;
            }

            else{//indice na triangular superior
                return ((j+1)*j)/2 + i;
            }

    }
    else return -2;


}


int MS::verifica( int i,int j){
    if(i>=0 && i<n && j>=0 && j<n)
        return 1;
    else return 0;
}

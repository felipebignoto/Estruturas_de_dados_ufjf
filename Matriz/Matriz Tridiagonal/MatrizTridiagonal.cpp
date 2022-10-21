#include <iostream>
#include "MatrizTridiagonal.h"
using namespace std;

MatrizTridiagonal::MatrizTridiagonal(int nn){

    n = nn;
    int tam = (3*n) -2;
    vet = new int [tam];
}

MatrizTridiagonal::~MatrizTridiagonal(){
    delete []vet;
}

void MatrizTridiagonal:: set(int i,int j, int valor){

    int k = detInd(i,j);
    if(k!=-1 && k!=-2){
         vet[k] = valor;
         cout << "k - " << k << " Valor - " << valor << "vet k - " << vet[k] << endl;
    }

}

int MatrizTridiagonal::get(int i,int j){

    int k = detInd(i,j);

    if(k!=-1 && k!=-2){
        return vet[k];
    }
    if(k==-1)
        return 0;

}

int MatrizTridiagonal::detInd(int i, int j){

    int g = verifica(i,j);
    if(g==1){
        if(i==j){//diagonal primaria, primeira parte do vetor
            return i;
        }
        if(i-j==-1){
            return n+i;
        }
        if(i-j==1){
            return (2*n)+i-2;
        }
        else return -1;
    }


    else{
        cout<<"indice invalido"<<endl;
        return -2;
    }
}

bool MatrizTridiagonal::verifica(int i,int j){

    if(i<n && i>=0 && j>=0 && j<n){
        return 1; //indice valido
    }

    else return 0;//indice invalido
}

void MatrizTridiagonal:: imprime(){

    for(int i =0; i<(3*n) -2; i++){
        cout<<vet[i]<<" ";
    }
}

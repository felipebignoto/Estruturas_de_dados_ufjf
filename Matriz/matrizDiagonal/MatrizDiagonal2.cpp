#include <iostream>
#include "MatrizDiagonal2.h"
using namespace std;

MatrizDiagonal2::MatrizDiagonal2(int nn){
    n = nn;
    vet=new int [n];

}
MatrizDiagonal2::~MatrizDiagonal2(){
    delete []vet;
}
int MatrizDiagonal2::get(int i,int j){

    int k = detind(i,j);

    if(k!=-1 && k!=-2){
        return vet[k] ;
    }
    if(k==-1){
        return 0;
    }
}
void MatrizDiagonal2::set( int i, int j, int valor){

    int k = detind(i,j);
    if(k!=-1 && k!=-2){
        vet[k] = valor;

    }


}

int MatrizDiagonal2::detind(int i, int j){

    if(verifica(i,j) == 1){
        if(i==j){
            return i;//diagonal
        }
        else{
            return -1;//indice fora da diagonal
        }
    }

    else{
        cout<<"indice invalido"<<endl;//indice fora da matriz
        return -2;
    }


}
int MatrizDiagonal2::verifica( int i,int j){
    if(i>=0 && i<n && j>=0 && j<n)
        return 1;
    else return 0;
}

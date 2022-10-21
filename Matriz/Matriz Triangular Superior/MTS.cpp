#include <iostream>
#include "MTS.h"
using namespace std;

MTS::MTS(int nn){

    n = nn;
    vet = new int [(nn*nn + nn)/2];
}


MTS::~MTS(){
    delete []vet;
}

void MTS::set(int i, int j,int valor){

    int k = detInd(i,j);

    if(k!=-1 && k!=-2){
        vet[k] =  valor;

    }

}

int MTS::get(int i, int j){

    int k = detInd(i,j);
    if(k==-1)
        return 0;
    if(k==-2){
        cout<<"indice invalido"<<endl;
    }
    else
         return vet[k];
}


int MTS::detInd(int i, int j){

    int w = verifica(i,j);

    if(w == 1){//indice valido
            if(i>j){//indice fora da triangular superior
                return -1;
            }

            else{//indice na triangular superior
                return ((j+1)*j)/2 + i;
            }

    }
    else return -2;


}

bool MTS::verifica(int i, int j){

    if(i>= 0 && j >= 0 && i<n && j<n){
        return 1;
    }

    else{
        return 0;
    }
}

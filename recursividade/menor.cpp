#include <iostream>
using namespace std;

float menor(int n, float vet[]){

    if(n==1)
        return vet[0];

    int m = menor(n-1,vet);

    if(vet[n-1]<=m){
        m = vet[n-1];
    }

    return m;


}

int main(){

    int x;
    cin>>x;
    float *vet = new float[x];

    for(int i=0;i<x;i++){
        cin>>vet[i];

    }

    cout<<menor(x,vet);

    delete []vet;
    return 0;
}

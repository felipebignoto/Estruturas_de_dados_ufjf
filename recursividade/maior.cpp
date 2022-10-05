#include <iostream>
using namespace std;

int maior(int n, int vet[]){

        if(n==1)
            return vet[n-1];

        int x  = maior(n-1, vet);

        if(vet[n-1] > x)
            return vet[n-1];

        else
            return x;
}

int main(){

    int x;
    cin>>x;

    int *vet;
    vet=new int[x];

    for(int i=0;i<x;i++){
        cin>>vet[i];
    }

    cout<<maior(x,vet)<<endl;

}

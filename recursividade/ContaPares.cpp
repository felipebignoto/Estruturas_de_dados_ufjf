#include <iostream>
using namespace std;

int contaPares(int n, int vet[]){

    if(n==1){
        if(vet[0]%2==0)
            return 1;

        return 0;
    }

    int q = contaPares(n-1,vet);


    if(vet[n-1]%2==0)
        return q +1;

    else
        return q;

}

int main(){

    int n;
    cin>>n;

    int *vet = new int[n];

    for(int i=0;i<n;i++){
        cin>>vet[i];
    }

    cout<<contaPares(n,vet);
    delete []vet;
    return 0;

}

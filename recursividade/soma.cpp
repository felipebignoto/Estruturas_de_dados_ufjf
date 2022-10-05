#include <iostream>
using namespace std;

float soma(int n, float vet[]){

    if(n==1)
        return vet[0];

    else
        return vet[n-1] + soma(n-1,vet);
}

int main(){

    int n;
    cin>>n;

    float *vet = new float[n];

    for(int i=0;i<n;i++){
        cin>>vet[i];
    }

    cout<<soma(n,vet)<<endl;

    delete []vet;
    return  0;

}

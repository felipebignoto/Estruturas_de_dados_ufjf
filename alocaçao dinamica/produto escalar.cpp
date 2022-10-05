#include <iostream>
using namespace std;

float prodEscalar(int n, float x[], float y[]){

    float g = 0;
    for(int i = 0; i<n;i++){
        g += x[i]*y[i];
    }

    cout<<g<<endl;
}

int main(){

    int tam;
    cin>>tam;
    float *vet1;
    vet1 = new float[tam];
    float *vet2;
    vet2 = new float[tam];

    for(int i = 0; i<tam; i++){

        cin>>vet1[i];
    }
    for(int i = 0; i<tam; i++){

        cin>>vet2[i];
    }

     prodEscalar( tam, vet1, vet2);

}

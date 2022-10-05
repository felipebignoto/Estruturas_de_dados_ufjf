#include <iostream>
using namespace std;

bool func(int tam, int vet[], int *par,int *impar, int *negativos){

    int i=0;

    for(i=0;i<tam;i++){
        if(vet[i]<0)
            *negativos=*negativos+1;
        if(vet[i]%2 != 0)
            *impar=*impar+1;
        else
            *par=*par+1;


    }

    if(*negativos > 0)
        return 1;
    else
        return 0;

}

int main(){

    int tam,par=0,impar=0,negativos=0;
    cout<<"tamango do vetor: "<<endl;
    cin>>tam;

    int *vet;
    vet = new int[tam];

    for(int i = 0; i<tam;i++){
        cout<<"digite o valor: "<<endl;
        cin>>vet[i];
    }

    cout<<func( tam,  vet, &par, &impar, &negativos)<<endl;
    cout<<"tamanho: "<<tam<<" | pares: "<<par<<" | impares:  "<<impar<<" | negativos:  "<<negativos<<endl;


}

#include <iostream>
using namespace std;


int main(){

    int tam,i=0;
    float soma = 0, media = 0;
    cin>>tam;

    int *vet;
    vet = new int[tam];
    // essas duas linhas de cima pode ser substituido por "int *vet =  new int[tam]"

    for(i=0; i<tam;i++){

        cout<<"valor: "<<endl;
        cin>>vet[i];
        soma+=vet[i];

    }
    media=soma/i;
    cout<<media<<endl;

    delete []vet;
    return 0;
}

#include <iostream>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont l(10);

    l.insereFinal(24);
    l.insereFinal(3);
    l.insereFinal(2);
    l.insereFinal(-1);
    l.insereFinal(99);
    l.imprime();

    cout<<l.buscaMaior(1)<<endl;
    cout<<l.numNos()<<endl;

    //l.limpar();
    //l.imprime();

    int vet2[5];
    for(int i =0; i<5;i++){
        vet2[i]=50+i;
    }
    l.insereValores(1,vet2);
    cout<<"Lista L + vet: "<<endl;
    l.imprime();
    cout<<endl;

    //Dividir uma lista L1 em duas e guardar em L2 e L3
    ListaCont L1(50);
    ListaCont L2(25);
    ListaCont L3 (25);
    cout<<endl;
    for(int i = 0; i< 50; i++){
        L1.insereFinal(i);
    }
    cout<<"Lista 1: "<<endl;
    L1.imprime();
    cout<<endl;

    //Pegando a primeira parte de L1 e jogando em L2
    for(int i =0; i<25;i++){
        L2.insereFinal(L1.get(0));
        L1.removeInicio();

    }

    for(int i =25; i<50;i++){
        L3.insereFinal(L1.get(0));
        L1.removeInicio();

    }
    cout<<"Lista 1: "<<endl;
    L1.imprime();
    cout<<"Lista dois: "<<endl;
    L2.imprime();
    cout<<"Lista tres: "<<endl;
    L3.imprime();

    cout<<endl;

    //Pontos - usando o tad Ponto.h
    Ponto p2(1,2);
    Ponto p3(2,3);
    Ponto p4(3,4);
    Ponto p1(0,1);

    return 0;
}

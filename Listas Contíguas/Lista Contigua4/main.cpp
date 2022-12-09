#include <iostream>
#include "ListaCont4.h"
using namespace std;


int main()
{

    int n;
    cout<<"digite o tamanho da lista: ";
    cin>>n;
    ListaCont L(10);

    for(int i = 0; i<n;i++){
        L.insereFinal(i);
    }

    L.imprime();
    //L.insereInicio(1);
    L.insereK(2,15);
    L.imprime();
    L.removeFinal();
    L.removeK(2);
    L.imprime();
    L.insereInicio(-1);
    L.imprime();
    L.removeInicio();
    L.imprime();
    cout<<L.numNos()<<endl;

    return 0;
}

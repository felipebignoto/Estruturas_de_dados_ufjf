#include <iostream>
#include "ListaDupla_revisao.h"
using namespace std;

int main()
{
    ListaDupla l;
    ListaDupla l2;
    int n;
    cout<<"digite o tamanho da lista: ";
    cin>>n;

    for(int i =0; i<n;i++){
        l.insereInicio(n-i);
    }
    l.imprime();

    cout<<"removendo no inicio: "<<endl;
    l.removeInicio();
    l.imprime();

    cout<<"busca um valor: "<<l.busca(n-3)<<endl;
    l.imprimeReverso();

    cout<<"inserindo no final: "<<endl;
    l.insereFinal(n+1);
    l.imprime();

    cout<<"removendo no final: "<<endl;
    l.removeFinal();
    l.imprime();

    for(int i =0; i<n;i++){
        l2.insereInicio(10*n-i);
    }
    l2.imprime();
    cout<<"-------------------------------------------------------"<<endl;
    l.concatena(&l2);
    cout<<"impressao da lista 1:  ";
    l.imprime();
    cout<<"impressao da lista 2:  ";
    l2.imprime();
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"partindo a lista: ";
    l.partir(6);
    l.imprime();
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"remove ocorrencias"<<endl;
    l.removeOcorrencias(20);
    l.imprime();

    cout<<endl;
    return 0;
}

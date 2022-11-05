#include <iostream>
#include "ListaEncad.h"
#include "No.h"

using namespace std;

int main()
{
    ListaEncad l;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        l.insereInicio(n-i);
    }
    l.imprime();
    cout<<"inserindo no final: "<<endl;
    l.insereFinal(n+1);
    l.insereFinal(n+2);
    l.imprime();

    cout<<"busca: "<<l.busca(n)<<endl;
    cout<<"removendo no inicio: "<<endl;
    l.removeInicio();
    l.imprime();;
    cout<<"removendo no final"<<endl;
    l.removeFinal();
    l.imprime();

    return 0;
};

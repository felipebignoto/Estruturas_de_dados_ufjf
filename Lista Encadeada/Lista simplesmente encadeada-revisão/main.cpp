#include <iostream>
#include "LSE.h"
using namespace std;

int main()
{
    ListaEncad l;
    int n;
    cin >> n;
    l.imprime();
    for(int i = 0; i < n; i++)
    {
        l.insereInicio(n-i);
    }
    l.imprime();
    l.insereFinal(n+1);
    l.imprime();
    cout<<"busca: "<<l.busca(82)<<endl;
    cout<<"removendo no inicio: "<<endl;
    l.removeInicio();
    l.imprime();;
    cout<<"removendo no final"<<endl;
    l.removeFinal();
    l.imprime();
    cout<<l.Quantidade();

    return 0;
}

#include <iostream>
#include "PilhaCont_revisao.h"
using namespace std;

int main()
{
    int x;
    cin>>x;
    PilhaCont p(x);
    p.empilha(1);
    p.empilha(2);
    p.empilha(3);
    cout<<p.getTopo()<<endl;
    p.desempilha();
    cout<<p.getTopo();
    return 0;
}

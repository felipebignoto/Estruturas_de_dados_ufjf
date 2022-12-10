#include <iostream>
#include "PilhaCont.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int x;
    cin>>x;
    PilhaCont p(x);
    p.empilha(4);
    cout<<p.getTopo();
    return 0;
}

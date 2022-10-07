#include <iostream>
#include "vetor.h"

using namespace std;

int main()
{
    int tam=60;
    Vetor v(tam);

    for(int i=0;i<tam;i++){
        v.set(i,i+1);
    }

    for(int i=0;i<tam;i++){
        float val = v.get(i);
        cout<<val<<endl;
    }
    return 0;
}

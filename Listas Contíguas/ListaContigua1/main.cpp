#include <iostream>
#include "ListaContigua1.h"
using namespace std;

int main()
{
    int tam = 4;
    ListaCont L(tam);

    for(int i =0; i<tam;i++){
        L.insereFinal(i);
    }

    for(int i=0;i<tam;i++){
        cout<<L.get(i)<<" ";
    }



    return 0;
}

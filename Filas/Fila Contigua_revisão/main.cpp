#include <iostream>
#include "FilaCont_revisao.h"
using namespace std;

int main()
{

    FilaCont f(10);
    for(int i =0; i<6; i++){
        f.enfileira(i);
    }
    f.imprime();
    f.desenfileira();
    f.desenfileira();
    f.imprime();
    cout<<f.getInicio();



    return 0;
}

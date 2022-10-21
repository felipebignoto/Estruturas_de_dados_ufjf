#include <iostream>
#include "MatrizTridiagonal.h"
using namespace std;

int main()
{
    int h = 4;
    MatrizTridiagonal m(h);

    for(int i= 0; i<h; i++){
        for(int j=0;j<h;j++){
            m.set(i,j,2*i+3*j);
        }
    }

    for(int i= 0; i<h; i++){
        for(int j=0;j<h;j++){
            cout<<m.get(i,j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    m.imprime();
    return 0;
}

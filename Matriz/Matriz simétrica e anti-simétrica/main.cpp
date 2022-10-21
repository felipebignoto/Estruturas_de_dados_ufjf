#include <iostream>
#include "MatrizSimetrica.h"
using namespace std;

int main()
{
    int h = 4;
    MS m(h);

    for(int i= 0; i<h; i++){
        for(int j=0;j<h;j++){
            m.set(i,j,i+j);
        }
    }

    for(int i= 0; i<h; i++){
        for(int j=0;j<h;j++){
            cout<<m.get(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

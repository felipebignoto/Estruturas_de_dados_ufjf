#include <iostream>
#include "MTS.h"
using namespace std;

int main()
{
    int h = 4;
    MTS m(h);
    for(int i= 0; i<h; i++){
        for(int j=0;j<h;j++){
            m.set(i,j,6);
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

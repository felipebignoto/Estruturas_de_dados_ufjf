#include <iostream>
#include "MatrizDiagonal2.h"
using namespace std;

int main()
{
    int n = 2;
    MatrizDiagonal2 m(n);

    for(int i= 0;i<n;i++){
        for(int j=0;j<n;j++){
            m.set(i,j,i+j);
        }
    }

    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m.get(i,j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}

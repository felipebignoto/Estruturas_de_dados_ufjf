#include <iostream>
using namespace std;

int mdc (int m,int n){

    if(n>m)
        return mdc( n, m );
    else{
        if(m%n == 0)
            return n;
        else
            return mdc(n,m%n);
    }




}

int main(){//maximo divisosr comum entre dois valores

    int x,y;
    cin>>x;
    cin>>y;

    cout<<mdc(x,y)<<endl;

}

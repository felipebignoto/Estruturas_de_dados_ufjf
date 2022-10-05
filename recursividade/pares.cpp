#include <iostream>
using namespace std;

int par(int v[],int n){

    if(n==1){
        if(v[0]%2 == 0)
            return 1;
        else
            return 0;
    }

    int x = par(v,n-1);

    if(v[n-1]%2 == 0)
        return x +1;

    else
        return x;
}

int main(){

    int x;
    cin>>x;
    int *v;
    v = new int[x];
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<par(v,x)<<endl;

}

#include <iostream>
using namespace std;

int ordem(int n){

    if(n==0)
        return 0;
    else{
        cout<<n<<" ";
        ordem(n-1);
    }

}

int main(){

    int x;
    cin>>x;

    cout<<ordem(x)<<endl;

    return 0;

}

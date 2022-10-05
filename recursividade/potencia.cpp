#include <iostream>
using namespace std;

int potencia(int n,int y){

    if(y==0 ) //se o expoente for zero, a resposata é 1
        return 1;
    else
        return n * potencia(n,y-1); // base * base elevado ao expoente com 1 a menos


}

int main(){

    int x;
    cin>>x;
    int y;
    cin>>y;
    // x elevado a y
    cout<<potencia(x,y)<<endl;

}

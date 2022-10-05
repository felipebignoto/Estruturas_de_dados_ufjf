#include <iostream>
using namespace std;

int fib(int atual, int anterior, int n)
{
    if(n == 1)
        return atual;
    else
        return fib(atual + anterior, atual, n-1);
}

int fibonacci(int n){

    return fib(1, 0, n);
}

int main(){

    int x;
    cin>>x;
    cout<< fib(1, 0, x)<<endl;
}

#include <iostream>
using namespace std;


bool auxPrimo(int p, int i)
{
    if (i==p)
        return true;

    if (p%i == 0)
        return false;

    return auxPrimo(p, i+1);
}

bool ehPrimo(int p)
{
    return auxPrimo(p, 2);
}

int main(){

    int x;
    cin>>x;
    cout<<ehPrimo(x)<<endl;

}

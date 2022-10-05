#include <iostream>
using namespace std;

int main(){

    int *pt;
    int x;
    cout<<"valor: "<<endl;
    cin>>x;
    pt=&x;
    cout<<*pt<<endl;
    cout<<pt<<endl;
    *pt*=10;
    cout<<*pt<<endl;
    pt=pt+70;
    cout<<*pt<<endl;
}

#include <iostream>
using namespace std;

void divisao(int num, int div, int *q, int *r){

    *q = num/div;
    *r = num%div;

}

int main(){


    int num = 10;
    int div = 3;
    int q,r;

    divisao( num,  div,  &q,  &r);
    cout<<num<<" "<<div<<" "<<q<<" "<<r<<endl;

}

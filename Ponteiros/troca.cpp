#include <iostream>
using namespace std;

void troca(int *a, int *b){

    int aux = *a;
    *a = *b;
    *b = aux;


}

int main(){

    int x = 10, y = 20;
    cout << x << y << endl;

    troca( &x,  &y);
    cout << x << y << endl;

}

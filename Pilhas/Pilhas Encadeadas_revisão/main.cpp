#include <iostream>
#include "PilhaEncad_revisao.h"
using namespace std;

int main()
{
    /// TESTE COM PILHA
    PilhaEncad p;

    for(int i = 0; i < 5; i++) p.empilha(i);
    cout << "Pilha apos inserir 5 valores" << endl;
    p.imprime();

    for(int i = 20; i < 25; i++) p.empilha(i);
    cout << "Pilha apos inserir mais 5 valores" << endl;
    p.imprime();
    cout<<p.getTopo()<<endl;
    cout<<p.tamanho()<<endl;
    return 0;
}


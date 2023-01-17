#include <iostream>
#include "ArvBin.h"
using namespace std;

int main()
{
    ArvBin arv;
    arv.montaArvore();
    //arv.insere(15);
    //arv.insere(25);
    //arv.insere(10);
    arv.preOrdem();
    arv.contaNos();
    arv.contaNosFolhas();
    arv.altura();
    arv.contaImpar();
    arv.contaFolhaImpar();
    arv.imprimeNivel(2);
    cout<<"mediaa no nivel 2: "<<arv.mediaNivel(1);
    return 0;
}

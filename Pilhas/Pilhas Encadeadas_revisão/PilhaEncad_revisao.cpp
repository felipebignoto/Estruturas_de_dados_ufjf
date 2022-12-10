#include <iostream>
#include "PilhaEncad_revisao.h"
using namespace std;

PilhaEncad::PilhaEncad(){///ok

    topo = NULL;
}

PilhaEncad::~PilhaEncad(){///ok

    No* p;
    for(p=topo; topo!= NULL; ){
        topo = p->getProx();
        delete p;
        p = topo;
    }
}

void PilhaEncad::empilha(int val){///ok

    No* p = new No();
    p->setInfo(val);
    p->setProx(topo);
    topo =p;
}

int PilhaEncad::desempilha(){///ok
    No* p;
    if(topo != NULL)
    {
        p = topo;
        topo = p->getProx();
        int val = p->getInfo();
        delete p;
        return val;
    }
    else
    {
        cout << "ERRO: Pilha vazia!" << endl;
        exit(1);
    }
}

int PilhaEncad::getTopo(){///ok

    if(topo != NULL){
        return topo->getInfo();
    }
    else{
        cout<<"lista vazia"<<endl;
    }
}

bool PilhaEncad::vazia(){///ok

    if(topo == NULL)
        return(true);
    else
        return(false);
}

void PilhaEncad::imprime(){///ok

    No* p;
    cout<<"imprimindo a pilha: ";
    for(p=topo; p!= NULL; p=p->getProx()){
        cout<<p->getInfo()<<" ";
    }
    cout<<endl;
}

int PilhaEncad::tamanho(){///ok

    int c =0;
    No* p;
    for(p=topo; p!= NULL; p=p->getProx()){
        c++;
    }
    return c;
}





#include <iostream>
#include "LSEDescritor.h"
using namespace std;

ListaEncad::ListaEncad(){///OK
    n=0;
    ultimo = NULL;
    primeiro = NULL;
}

ListaEncad::~ListaEncad(){///ok

    No* p;
    No* t;
    for(p=primeiro; p!= NULL; ){
        t = p->getProx();
        delete p;
        p = t;
    }
}

bool ListaEncad::busca(int val){

    No* p;

    for(p=primeiro; p!=NULL; p=p->getProx()){
        if(p->getInfo()==val)
            return true;
    }

    return false;
}

void ListaEncad::insereInicio(int val){///OK
    No *p = new No();
    p->setInfo(val);
    p->setProx(primeiro);

    primeiro = p;
    n++;

    if(n==1)
        ultimo = p;
}

void ListaEncad::insereFinal(int val){///OK

    No* p = new No();
    p->setInfo(val);
    p->setProx(NULL);

    if(ultimo!=NULL)
        ultimo->setProx(p);

    ultimo =p;

    n++;
    if(n==1)
        primeiro = p;

}

void ListaEncad::removeInicio(){///OK

    No* p;

    if(primeiro != NULL)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;

        n--;
        if(n == 0) ultimo = NULL;
    }
    else
        cout << "ERRO: lista vazia!" << endl;
}

void ListaEncad::removeFinal(){

    No* p;
    if(ultimo != NULL)//Lista não vazia
    {
        if(primeiro == ultimo)//lista com um valor
        {
            primeiro = NULL;
            p = NULL;
        }
        else
        {
            p = primeiro;
            while(p->getProx() != ultimo)
                p = p->getProx();
            p->setProx(NULL);
        }
        delete ultimo;
        ultimo = p;
        n--;
    }
    else
        cout << "ERRO: lista vazia!" << endl;

}

void ListaEncad::imprime(){///OK

    No* p;
    cout<<"imprimindo a lista: ";

    if(n==0)
        cout<<"lista vazia"<<endl;

    else{

        for(p = primeiro; p!=NULL; p = p->getProx()){
            cout<<p->getInfo()<<" ";
        }
    }

    cout<<endl;

}

int ListaEncad::numNos(){///Ok

    return n;

}

int ListaEncad::buscaMaior(int val){///OK

    No* p;
    int i =0;

    for(p=primeiro; p!= NULL; p = p->getProx()){
        if(p->getInfo() > val)
            return i;
        i++;
    }

    return -1;
}

void ListaEncad::limpar(){///OK

    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;

    }

    n =0;
    primeiro = ultimo = NULL;
}

float ListaEncad::calculaMedia(){///OK

    No* p;
    float soma;

    for(p=primeiro; p!= NULL; p=p->getProx()){
        soma += p->getInfo();
    }

    return (soma/n);
}

void ListaEncad::concatena(ListaEncad *l2){///OK

    No *p;

    for(p = l2->primeiro; p !=NULL; p= p->getProx()){
        this->insereFinal(p->getInfo());

    }

}

ListaEncad* ListaEncad::partir(int x){

    ListaEncad* nova = new ListaEncad();
    No* p;
    No* r;
    int i = 0;

    for(p = this->primeiro; p!= NULL ; p = p->getProx()){
        if(i == x){
            break;
        }

        if(i==x-1){
            r = p;
        }

        i++;
    }

    for(;p!= NULL;){
        nova->insereFinal(p->getInfo());
        No *t = p->getProx();
        delete p;
        p = t;
        n--;

    }

    r->setProx(NULL);
    this->ultimo = r;

    cout<<"Imprimindo a nova lisa: "<<endl;
    nova->imprime();

    return nova;

}







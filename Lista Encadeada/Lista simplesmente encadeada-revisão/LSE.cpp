#include <iostream>
#include "LSE.h"

using namespace std;

ListaEncad::ListaEncad(){

    primeiro = NULL;
}

ListaEncad::~ListaEncad(){

    No* t;

    for(No* p = primeiro; p != NULL; ){
        t = p->getProx();
        delete p;
        p = t;

    }
}

void ListaEncad::insereInicio(int val){

    No *p = new No();
    p->setInfo(val);
    p->setProx(primeiro);
    primeiro = p;
}

void ListaEncad::insereFinal(int val){

    No* p = new No();
    p->setInfo(val);
    p->setProx(NULL);

    No* q;

    if(primeiro == NULL){
         primeiro = p;
    }

    else{
        for( q = primeiro; q->getProx()!= NULL; q=q->getProx() ){
            ;
        }
        q->setProx(p);
    }



}

void ListaEncad::removeInicio(){

    No* p = primeiro;

    if(p!=NULL){
        primeiro = p->getProx();
        delete p;
    }

}

void ListaEncad::removeFinal(){

    No* p;

    if(primeiro != NULL){

        for(p=primeiro; p->getProx()->getProx() != NULL; p=p->getProx()){
        ;
        }

        p->setProx(NULL);
    }
    else{
        cout<<"lista vazia"<<endl;
    }
}

bool ListaEncad::busca(int val){

    No* p = primeiro;

    for( ; p != NULL;p= p->getProx()){

        if(p->getInfo() > val){
            return true;
        }


    }
    return false;

}

int ListaEncad::Quantidade(){

    No* p;
    int c =1;

    for(p = primeiro; p->getProx() != NULL; p=p->getProx()){
        c++;
    }

    return c;

}

void ListaEncad::insereK(int k, int val){

}

void ListaEncad::imprime(){

    No* p= primeiro;
    if(primeiro == NULL){

        cout<< "lista vazia"<<endl;
    }
    else{
        while(p->getProx() != NULL){
            cout<<p->getInfo()<<" ";
            p=p->getProx();
        }
        cout<<p->getInfo()<<endl;

    }
}

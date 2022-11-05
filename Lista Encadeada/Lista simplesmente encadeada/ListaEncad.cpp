#include <iostream>
#include "ListaEncad.h"
#include "No.h"

using namespace std;

ListaEncad::ListaEncad(){

    primeiro = NULL; // cria a lista vazia

}

ListaEncad::~ListaEncad(){

    No *p = primeiro; // crio um no apontando para o primeiro

    while( p != NULL){//ando pela lista, até chegar no ultimo

        No *t = p->getProx();//t aponta para o proximo da lista
        delete p;//deleto p
        p=t;//atualizo p com o proximo
    }
}

void ListaEncad::insereInicio(int val){

    No *p = new No(); //cria No apontado por p

    p->setInfo(val);//preencho com a informação
    p->setProx(primeiro);//preencho com o proximo

    primeiro = p;//No apontado por p passa a ser o primeiro

}

bool ListaEncad::busca(int val){

    No* p = primeiro;//crio o no

    while(p!= NULL){

        if(p->getInfo() == val)//comparo os valores
            return true;

        p = p->getProx();//atualizo o p
    }

    return false;

/*Poderia usar o for

    No* p;

    for(p = primeiro; p != NULL; p = p->getProx())
    {
        if(p->getInfo() == val)
            return true;
    }

    return false;
*/

}

void ListaEncad::insereFinal(int val){

    No* p= new No();
    p->setInfo(val);
    p->setProx(NULL);
    No* q;

    if(primeiro == NULL){//Lista vazia
        primeiro = p;
    }

    else{
        for( q = primeiro; q->getProx() != NULL; q = q->getProx()){//Lista não vazia, tenho q fazer o ultimo no apontar para o no p
        ;}
        q->setProx(p);
    }
}

void ListaEncad::removeInicio(){

    No* p;

    if(primeiro != NULL){

        p = primeiro;
        primeiro = p->getProx();
        delete p;

    }

    else{
        cout<<"lista vazia"<<endl;
    }


}

void ListaEncad::removeFinal(){

    No* p;
    if(primeiro != NULL){

        p= primeiro;
        while(p->getProx()->getProx() != NULL){//chego no antepenultimo

            p = p->getProx();
        }
        p->setProx(NULL);
    }

    else{
        cout<<"lista vazia"<<endl;
    }

}

int ListaEncad::Quantidade(){  ///Nao fiz


}

void ListaEncad::insereK(int k, int val){ ///Nao fiz


}

void  ListaEncad::imprime(){

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

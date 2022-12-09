#include <iostream>
#include "ListaDupla_revisao.h"
using namespace std;

ListaDupla::ListaDupla(){///OK

    n =0;
    primeiro= NULL;
    ultimo = NULL;
}

ListaDupla::~ListaDupla(){///OK

    NoDuplo* p;
    for(p = primeiro; p != NULL; ){

        NoDuplo* t = p->getProx();
        delete p;
        p = t;
    }

}

bool  ListaDupla::busca(int val){///OK

    NoDuplo* p = primeiro;
    while(p!= NULL){

        if(p->getInfo() == val)
            return true;

        p=p->getProx();
    }

    return false;
}

int ListaDupla::get(int k){///

    NoDuplo* p;
    int i =0;
    if(n==0){
        cout<<"lista vazia"<<endl;
        exit(1);
    }

    else{
        if(k>=0 && k<n){
            //indice válido
            for(p=primeiro; p!=NULL && i<k ;p=p->getProx()){
                i++;
            }
            return p->getInfo();
        }

        else{
            cout<<"indice invalido"<<endl;
        }
    }
}

void ListaDupla::set(int k, int val){///

    NoDuplo *p = primeiro;
    for(int i = 0; i < k; i++)
    {
        if(p == NULL)
            break;
        p = p->getProx();
    }

    if(p == NULL)
        cout << "ERRO: Indice invalido!" << endl;

    else
        p->setInfo(val);
}

void ListaDupla::insereInicio(int val){///ok

    NoDuplo* p = new NoDuplo();
    p->setInfo(val);
    p->setAnt(NULL);
    p->setProx(primeiro);

    if(n==0){
        ultimo = p;
    }
    else{
        primeiro->setAnt(p);
    }

    primeiro = p;
    n++;
}

void ListaDupla::removeInicio(){///ok

    NoDuplo* p = primeiro;

    if(n==0){
        cout<<"lista vazia"<<endl;
        exit(1);
    }

    else{

        if(p!= NULL){

            primeiro = p->getProx();
            delete p;
            n--;

            if(n==0){
                ultimo = NULL;
            }

            else{
                primeiro->setAnt(NULL);
            }

        }

        else{
            cout<<"lista vazia"<<endl;
        }
    }
}

void ListaDupla::imprime(){///ok

    NoDuplo* p;

    cout<<"Imprimindo a lista: ";

    if(n==0){
        cout<<"lista vazia"<<endl;
    }

    for(p=primeiro; p!= NULL; p=p->getProx()){
        cout<<p->getInfo()<<" ";
    }
    cout<<endl;
}

void ListaDupla::insereFinal(int val){///ok

    NoDuplo* p = new NoDuplo();
    p->setInfo(val);
    p->setAnt(ultimo);
    p->setProx(NULL);

    if(n!=0){
        ultimo->setProx(p);
    }
    else{
        primeiro =p;
    }
    ultimo =p;
    n++;
}

void ListaDupla::removeFinal(){///ok
    if(primeiro != NULL){

        NoDuplo *p = ultimo;
        ultimo = ultimo ->getAnt();

        if(primeiro==p){//s� um n�
            primeiro = NULL;
        }

        else{//mais de um n�
            ultimo->setProx(NULL);
        }

        delete p;
        n++;
    }
}

void ListaDupla::insere(int val, NoDuplo *p){//ok

    NoDuplo*q = new NoDuplo();
    q->setInfo(val);

    if(p!=NULL){//p eh o ultimo da lista
        q->setProx(NULL);
        p->setProx(q);
        ultimo = q;
        q->setAnt(p);
    }

    else{//p aponta para qualquer um no que n�o seja o ultimo

        NoDuplo *r = new NoDuplo();

        q->setProx(r);
        q->setAnt(p);

        p->setProx(q);
        r->setAnt(q);

    }
}

void ListaDupla::imprimeReverso(){///ok

    NoDuplo* p;

    cout<<"Imprimindo a lista reversa: ";

    if(n==0){
        cout<<"lista vazia"<<endl;
    }

    for(p=ultimo; p!= NULL; p=p->getAnt()){
        cout<<p->getInfo()<<" ";
    }
    cout<<endl;
}

ListaDupla* ListaDupla::concatena(ListaDupla *l2){///ok

    /*ultimo->setProx(l2->primeiro);
    l2->primeiro->setAnt(ultimo);
    n = n + l2->n;

    return this;*/

    NoDuplo *p = primeiro;
    ListaDupla *l3 = new ListaDupla();

    for(; p != NULL ; p = p->getProx() ) {
        l3->insereFinal(p->getInfo());
    }

    NoDuplo *q  = l2->primeiro;
    for(;q!=NULL;q=q->getProx()){
        l3->insereFinal(q->getInfo());
    }

    cout<<"impressao da lista 3";
    l3->imprime();

    return l3;

}

ListaDupla* ListaDupla::partir(int x){///ok

    NoDuplo *p;
    NoDuplo *q;
    ListaDupla *l3 = new ListaDupla();

    for(p = ultimo ;p->getInfo() != x && p !=NULL; ){
        l3->insereInicio(p->getInfo());
        q = p->getAnt();
        this->removeFinal();
        p = q;

    }


    cout<<"impressao da lista 3  ";
    l3->imprime();

    return l3;
}

void ListaDupla::removeOcorrencias(int val){///ok

    NoDuplo *p = primeiro;
    NoDuplo *a; //no antes de p
    NoDuplo *d; //no depois de p
    NoDuplo *aux;//no auxiliar
    int c = 0;

    for(; p!= NULL; ){

        if(p->getInfo() == val){
            a = p->getAnt();
            d = p->getProx();
            a->setProx(d);
            d->setAnt(a);
            delete p;
            p = d;
            c++;

        }

        else{
            p = p->getProx();
        }
    }

    if(c==0){
        cout<<"N�o existe esse valor na lista"<<endl;
    }

}

void ListaDupla:: InsereEntre(int val, NoDuplo *p, NoDuplo* q){

    if(n==0)//lista vazia
        insereInicio(val);

    else if(p == NULL && q == primeiro)//q � o primeiro
        insereInicio(val);

    else if(p == ultimo && q == NULL)//p � o ultimo
        insereFinal(val);

    else if(p != NULL && q != NULL)//lista n�o esta vazia
    {
        if(p->getProx() == q){//p e q s�o adjacentes, nessa ordem
            NoDuplo *r = new NoDuplo();
            r->setInfo(val);
            r->setProx(q);
            r->setAnt(p);
            p->setProx(r);
            q->setAnt(r);
            n++;
        }

        if(q->getProx() == p){//q e p s�o adjacentes, nessa ordem
            NoDuplo *r = new NoDuplo();
            r->setInfo(val);
            r->setProx(p);
            r->setAnt(q);
            q->setProx(r);
            p->setAnt(r);
            n++;
        }
    }
}

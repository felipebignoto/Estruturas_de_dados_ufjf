#include <iostream>
#include <cstdlib>
#include "ListaEncad.h"

using namespace std;

ListaEncad::ListaEncad()//construtor cria lista vazia
{
    cout << "Criando objeto ListaEncad" << endl;
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaEncad::~ListaEncad()
{
    cout << "Destruindo objeto ListaEncad" << endl;
    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}

bool ListaEncad::busca(int val)
{
    No *p;
    for(p = primeiro; p != NULL; p = p->getProx())
        if(p->getInfo() == val)
            return true;

    return false;
}

int ListaEncad::get(int k)
{
    No *p = primeiro;
    int i = 0;

    while(i < k && p != NULL)
    {
        i++;
        p = p->getProx();
    }

    if(p == NULL)
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
    else
        return p->getInfo();
}

void ListaEncad::set(int k, int val)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL)
    {
        i++;
        p = p->getProx();
    }
    if(p == NULL)
        cout << "ERRO: Indice invalido!" << endl;
    else
        p->setInfo(val);
}

void ListaEncad::insereInicio(int val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(primeiro);

    primeiro = p;

    n++;
    if(n == 1) ultimo = p;
}

void ListaEncad::insereFinal(int val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(NULL);

    if(ultimo != NULL) ultimo->setProx(p);
    ultimo = p;

    n++;
    if(n == 1) primeiro = p;
}

void ListaEncad::removeInicio()
{
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

void ListaEncad::removeFinal()
{
    No* p;
    if(ultimo != NULL)
    {
        if(primeiro == ultimo)
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

void ListaEncad::imprime()//Fiz
{

    No *p;
    if(n==0){
        cout<<"Lista vazia"<<endl;
    }

    else{
        for(p = primeiro; p!= NULL;p=p->getProx()){
            cout<<p->getInfo()<<" "<<endl;
        }
        cout<<endl;
    }


}

int ListaEncad::numNos()//fiz
{
    return n;
}

int ListaEncad::buscaMaior(int val)//fiz
{
    No* p;
    int i = 0;

    for(p = primeiro; p != NULL; p=p->getProx()){
        if(p->getInfo() > val){
            return i;
        }
        i++;
    }

    return -1;
}

void ListaEncad::limpar()//Fiz
{

    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;

    }

    n =0;
    primeiro = ultimo = NULL;

/*posso chamar o remove inicio dentro do while

    while(n>0){
     removeInicio();
    }

*/
}

float ListaEncad::calculaMedia()//fiz
{
    No* p;
    int i = 0;
    float media,soma=0;

    for(p = primeiro; p != NULL; p=p->getProx()){
        soma += p->getInfo();
        i++;
    }

    media =soma/i;

    return media;


}

void ListaEncad::concatena(ListaEncad *l2)//Fiz
{
    No* p;//lista 1
    No* t = l2->primeiro; //lista 2

    for(p = this->ultimo;t != NULL; t = t->getProx()){

        this->insereFinal(t->getInfo());


    }

}

ListaEncad* ListaEncad::partir(int x)
{

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

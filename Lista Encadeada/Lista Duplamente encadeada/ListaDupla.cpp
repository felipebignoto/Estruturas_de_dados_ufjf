#include <iostream>
#include "ListaDupla.h"

using namespace std;

ListaDupla::ListaDupla()
{
    cout << "Criando uma ListaDupla" << endl;
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaDupla::~ListaDupla()
{
    cout << "Destruindo ListaDupla" << endl;
    NoDuplo *p = primeiro;
    while(p != NULL)
    {
        NoDuplo *t = p->getProx();
        delete p;
        p = t;
    }
}

bool ListaDupla::busca(int val)
{
    NoDuplo *p;
    for(p = primeiro; p != NULL; p = p->getProx())
        if(p->getInfo() == val)
            return true;
    return false;
}

int ListaDupla::get(int k)
{
    NoDuplo *p = primeiro;
    for(int i = 0; i < k; i++)
    {
        if(p == NULL)
            break;
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

void ListaDupla::set(int k, int val)
{
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

void ListaDupla::insereInicio(int val)
{
	NoDuplo *p = new NoDuplo();
	p->setInfo(val);
	p->setProx(primeiro);
	p->setAnt(NULL);

	if(n == 0) ultimo = p;
	else primeiro->setAnt(p);

	primeiro = p;
	n = n + 1;
}

void ListaDupla::removeInicio()
{
	NoDuplo *p;
	if(primeiro != NULL)
	{
		p = primeiro;
		primeiro = p->getProx();
		delete p;
		n = n - 1;

		if(n == 0) 	ultimo = NULL;
		else primeiro->setAnt(NULL);
	}
	else
        cout << "ERRO: lista vazia" << endl;
}

void ListaDupla::imprime()                                             //Exercicio
{
    NoDuplo *p;
    cout<<"Imprimindo a lista: "<<endl;
    for(p=primeiro; p!=NULL;p=p->getProx()){
        cout<<p->getInfo()<<" ";
    }
    cout<<endl;

}

void ListaDupla::insereFinal(int val){                               //Exercicio

    NoDuplo *p = new NoDuplo();
    p->setInfo(val);
    p->setProx(NULL);
    p->setAnt(ultimo);

    if(n!=0){
        ultimo->setProx(p);
    }

    else{
        primeiro =p;
    }

    ultimo = p;
    n++;
}

void ListaDupla::removeFinal(){                                     //Exercicio

    if(primeiro != NULL){

        NoDuplo *p = ultimo;
        ultimo = ultimo ->getAnt();

        if(primeiro==p){//só um nó
            primeiro = NULL;
        }

        else{//mais de um nó
            ultimo->setProx(NULL);
        }

        delete p;
        n++;
    }
}

void ListaDupla::insere(int val, NoDuplo *p){//insiro após um nó dado p

    NoDuplo*q = new NoDuplo();
    q->setInfo(val);

    if(p!=NULL){//p é o ultimo da lista
        q->setProx(NULL);
        p->setProx(q);
        ultimo = q;
        q->setAnt(p);
    }

    else{//p aponta para qualquer um no que não seja o ultimo

        NoDuplo *r = new NoDuplo();

        q->setProx(r);
        q->setAnt(p);

        p->setProx(q);
        r->setAnt(q);

    }
}

void ListaDupla::imprimeReverso(){                                   //Exerciico
    NoDuplo *p;
    cout<<"imprimindo inverso: "<<endl;
    for(p=ultimo; p!= NULL; p=p->getAnt()){
        cout<<p->getInfo()<<" ";
    }
    cout<<endl;

}

ListaDupla* ListaDupla::concatena(ListaDupla *l2){                     //Exerciico

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

ListaDupla* ListaDupla::partir(int x){                                 //Exerciico

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

void ListaDupla::removeOcorrencias(int val){                            //Exerciico

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
        cout<<"Não existe esse valor na lista"<<endl;
    }



}

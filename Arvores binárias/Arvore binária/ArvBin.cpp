#include <iostream>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include "ArvBin.h"

using namespace std;

ArvBin::ArvBin()//construtor
{
    raiz = NULL;
}

int ArvBin::getRaiz()//retorna a raiz
{
    if (raiz != NULL)
        return raiz->getInfo();
    else
    {
        cout << "Árvore vazia!" << endl;
        exit(1);
    }
}

void ArvBin::cria(int x, ArvBin *sae, ArvBin *sad)
{
    NoArv *p = new NoArv();

    p->setInfo(x);
    p->setEsq(sae->raiz);
    p->setDir(sad->raiz);
    raiz = p;
}

void ArvBin::anulaRaiz()
{
    raiz = NULL;
}

void ArvBin::montaArvore()
{
    if(!vazia())
        cout << "Arvore jah montada. So eh possivel a insercao de nos." << endl;
    else
    {
        cout << "Montagem da arvore em pre-ordem:" << endl;
        raiz = auxMontaArvore();
    }
}

NoArv* ArvBin::auxMontaArvore()
{
    string linha;
    cout << "Valor: ";
    cin >> linha;
    if(linha != "NULL" && linha != "null")
    {
        istringstream ent(linha);
        int valor;
        ent >> valor;
        NoArv *p = new NoArv();
        p->setInfo(valor);
        cout << "Esquerda" << endl;
        p->setEsq(auxMontaArvore());
        cout << "Volta no noh " << p->getInfo() << endl;
        cout << "Direita" << endl;
        p->setDir(auxMontaArvore());
        cout << "Volta no noh " << p->getInfo() << endl;
        return p;
    }
    else
        return NULL;
}

void ArvBin::insere(int x)
{
    raiz = auxInsere(raiz, x);
}

NoArv* ArvBin::auxInsere(NoArv *p, int x)
{
    if(p == NULL)
    {
        p = new NoArv();
        p->setInfo(x);
        p->setEsq(NULL);
        p->setDir(NULL);
    }
    else
    {
        char direcao;
        cout << x << " a esquerda (e) ou direita (d) de " << p->getInfo() << ": ";
        cin >> direcao;
        if(direcao == 'e' || direcao == 'E')
            p->setEsq(auxInsere(p->getEsq(), x));
        else
            p->setDir(auxInsere(p->getDir(), x));
    }
    return p;
}

bool ArvBin::vazia()
{
    return (raiz == NULL);
}

bool ArvBin::busca(int x)
{
    return auxBusca(raiz, x);
}

bool ArvBin::auxBusca(NoArv *p, int x)
{
    if (p == NULL)
        return false;
    else if (p->getInfo() == x)
        return true;
    else if (auxBusca(p->getEsq(), x))
        return true;
    else
        return auxBusca(p->getDir(), x);
}

ArvBin::~ArvBin()
{
    raiz = libera(raiz);
}

NoArv* ArvBin::libera(NoArv *p)
{
    if (p != NULL)
    {
        p->setEsq(libera(p->getEsq()));
        p->setDir(libera(p->getDir()));
        delete p;
        p = NULL;
    }
    return NULL;
}

void ArvBin::preOrdem()
{
    cout << "Arvore Binaria em Pre-Ordem: ";
    auxPreOrdem(raiz);
}

void ArvBin::auxPreOrdem(NoArv *p)
{
    if (p != NULL)
    {
        cout << p->getInfo() << " ";
        auxPreOrdem(p->getEsq());
        auxPreOrdem(p->getDir());
    }
}

///EXERCÍCIO 1
int ArvBin::contaNos(){

    cout<<endl<<"numero de nos: "<<auxContaNos(raiz)<<endl;

}

int ArvBin::auxContaNos(NoArv* p){

   if(p!=NULL){

        int d = auxContaNos(p->getDir());
        int e = auxContaNos(p->getEsq());
        return (1 + d + e);
   }

   else{
    return 0;
   }
}

///EXERCÍCIO 2
int ArvBin::contaNosFolhas(){
    cout<<"numero de nos folhas: "<<auxContaNosFolhas(raiz)<<endl;
}

int ArvBin::auxContaNosFolhas(NoArv *p){

     if(p == NULL)
        return 0;

    int total = auxContaNosFolhas(p->getEsq()) + auxContaNosFolhas(p->getDir());

    if(p->getEsq() == NULL && p->getDir() == NULL)
        total++;

    return total;

}

///EXERCÍCIO 3
int ArvBin::altura(){
    cout<<"Altura: "<<auxAltura(raiz)<<endl;
}

int ArvBin::auxAltura(NoArv* p){

    if(p==NULL){
        return 0;
    }

    else{

    int he = auxAltura(p->getEsq());
    int hd = auxAltura(p->getDir());

    if(he > hd)
        return he+1;
    else
        return hd+1;

    }
}

///EXERCÍCIO 4
int ArvBin::contaImpar(){

    cout<<"Conta impar: "<<auxContaImpar(raiz)<<endl;
}

int ArvBin::auxContaImpar(NoArv* p){

    if(p==NULL)
        return 0;

    else{
        int total = auxContaImpar(p->getDir()) + auxContaImpar(p->getEsq());

        if(p->getInfo() %2 != 0)
            total++;

        return total;
    }

}

///Exercício 5
int ArvBin::contaFolhaImpar(){
    cout<<"Conta folha impar: "<<auxContaFolhaImpar(raiz)<<endl;
}

int ArvBin::auxContaFolhaImpar(NoArv* p){

    if(p==NULL)
        return 0;

    else{

        int total = auxContaFolhaImpar(p->getDir()) + auxContaFolhaImpar(p->getEsq());

        if(p->getInfo()%2 != 0 && p->getDir() == NULL && p->getEsq()== NULL)
            total++;

        return total;
    }
}

///EXERCICIO 6
void ArvBin::imprimeNivel(int k){
    cout<<"folhas no nivel 'k': "<<endl;
    auxImpNivel(raiz,0,k);
}

void ArvBin::auxImpNivel(NoArv *p, int atual, int k){

    if(p!=NULL){

        if(k==atual){
            cout<<p->getInfo()<<" ";
        }

        else{
            auxImpNivel(p->getEsq(), atual+1,k);
            auxImpNivel(p->getDir(), atual+1,k);

        }
    }
}

///EXERCICIO 7
float ArvBin::mediaNivel(int k){

    float soma =0;
    float contador = 0;
    auxMediaNivel(raiz,0,k,&soma,&contador);
    return soma/contador;
}

float ArvBin::auxMediaNivel(NoArv* p,int atual,int k,float* soma,float* contador){

    if(p!=NULL){

        if(atual == k){
            *contador=*contador + 1;
            return p->getInfo();
        }

        else{
            *soma+=auxMediaNivel(p->getDir(),atual +1,k,soma,contador);
            *soma+=auxMediaNivel(p->getEsq(),atual +1,k,soma,contador);
        }
    }

    return 0;
}


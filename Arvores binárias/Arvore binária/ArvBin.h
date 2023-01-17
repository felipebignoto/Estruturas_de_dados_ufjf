#ifndef ARVBIN_H_INCLUDED
#define ARVBIN_H_INCLUDED
#include "NoArv.h"

class ArvBin
{
  public:

    ArvBin();
    ~ArvBin();
    int getRaiz();
    void cria(int x, ArvBin *sae, ArvBin *sad);
    void anulaRaiz();
    bool vazia(); // verifica se a árvore está vazia
    bool busca(int x);
    void preOrdem();
    void montaArvore();
    void insere(int x);

    ///EXERCICIOS
    int contaNos(); ///exercicio 1
    int contaNosFolhas();///exercicio 2
    int altura();///exercicio 3
    int contaImpar();///Exercicio 4
    int contaFolhaImpar();///Exercicio 5
    void imprimeNivel(int k);///Exercicio 6
    float mediaNivel(int k);///Exercicio 7
    /*
    int min();
    int max();
    void inverte();
    void auxInverte(NoArv *p);
    int noMaisEsquerda();
    int noMaisDireita();
    int minSubArvore(NoArv *p);
    int maxSubArvore(NoArv *p);
    bool ehABB();
    */

  private:

    NoArv *raiz; // ponteiro para o No raiz da árvore

    NoArv* libera(NoArv *p);
    bool auxBusca(NoArv *p, int x);
    void auxPreOrdem(NoArv *p);
    NoArv* auxMontaArvore();

    void auxInverte(NoArv* p);
    NoArv* auxInsere(NoArv *p, int x);

    ///EXERCÍCIOS
    int auxContaNos(NoArv* p); ///exercicio 1
    int auxContaNosFolhas(NoArv* p);///exercicio 2
    int auxAltura(NoArv* p);///exercicio 3
    int auxContaImpar(NoArv* p);///Exercicio 4
    int auxContaFolhaImpar(NoArv* p);///Exercicio 5
    void auxImpNivel(NoArv *p, int atual, int k);///exercicio 6
    float auxMediaNivel(NoArv* p, int atual , int k,float* soma, float* contador);///Exercicio 7

};

#endif // ARVBIN_H_INCLUDED

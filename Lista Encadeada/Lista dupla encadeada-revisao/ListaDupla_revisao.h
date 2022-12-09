#ifndef LISTADUPLA_REVISAO_H_INCLUDED
#define LISTADUPLA_REVISAO_H_INCLUDED
#include "Noduplo.h"


class ListaDupla
{
    public:

        ListaDupla();
        ~ListaDupla();

        bool busca(int val);

        int get(int k);
        void set(int k, int val);

        void insereInicio(int val);
        void removeInicio();

        void insereFinal(int val);//exercicio
        void removeFinal();//exercicio

        void imprime();//exercicio

        void insere(int val, NoDuplo *p);
        void imprimeReverso();//exercicio

        ListaDupla* concatena(ListaDupla *l2);//exercicio
        ListaDupla* partir(int x);//

        void removeOcorrencias(int val);//exercicio
        void InsereEntre(int val, NoDuplo *p, NoDuplo* q);


    private:

        NoDuplo *primeiro;
        int n;
        NoDuplo *ultimo;

};


#endif // LISTADUPLA_REVISAO_H_INCLUDED

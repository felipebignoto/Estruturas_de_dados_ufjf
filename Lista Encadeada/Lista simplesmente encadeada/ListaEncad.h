#ifndef LISTAENCAD_H_INCLUDED
#define LISTAENCAD_H_INCLUDED
#include "No.h"
class ListaEncad
{
    public:

        ListaEncad();              //Construtor
        ~ListaEncad();             //destrutor

        void insereInicio(int val);//insere no inicio
        void insereFinal(int val); //insere no final

        void removeInicio();       //remove no inicio
        void removeFinal();        //remove no final

        bool busca(int val);       //procura um valor

        int Quantidade();
        void insereK(int k, int val);

        void imprime();           //Imprime a lista

    private:

        No* primeiro; // ponteiro para o primeiro

};

#endif // LISTAENCAD_H_INCLUDED

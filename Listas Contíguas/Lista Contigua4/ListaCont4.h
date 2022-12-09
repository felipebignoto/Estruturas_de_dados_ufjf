#ifndef LISTACONT4_H_INCLUDED
#define LISTACONT4_H_INCLUDED

class ListaCont
{
public:

    ListaCont(int tam);
    ~ListaCont();

    int get(int k);
    void set(int k, int val);

    void insereFinal(int val); // insere no final
    void removeFinal(); // remove ultimo

    void insereK(int k, int val); // antes de xk
    void removeK(int k); // remove xk

    void insereInicio(int val);
    void removeInicio();

    void imprime();
    int numNos();
    int buscaMaior(int val);
    void limpar();

    void insereValores(int tam,int vet[]);

private:

    int max; // capacidade maxima de elementos
    int n; // quantidade de nos da lista
    int *vet; // vetor que armazena a lista
};

#endif // LISTACONT4_H_INCLUDED

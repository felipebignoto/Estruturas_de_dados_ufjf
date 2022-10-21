#ifndef MATRIZSIMETRICA_H_INCLUDED
#define MATRIZSIMETRICA_H_INCLUDED

class MS{

public:
    MS(int nn);
    ~MS();
    int get(int i,int j);
    void set(int i,int j,int valor);

private:
    int n;//tamanho do vetor
    int *vet; //vetor
    int detind(int i,int j);
    int verifica(int i,int j);

};


#endif // MATRIZSIMETRICA_H_INCLUDED

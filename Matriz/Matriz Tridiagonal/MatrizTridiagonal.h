#ifndef MATRIZTRIDIAGONAL_H_INCLUDED
#define MATRIZTRIDIAGONAL_H_INCLUDED

class MatrizTridiagonal{

public:

    MatrizTridiagonal(int nn);
    ~MatrizTridiagonal();
    void set(int i,int j, int valor);
    int get(int i,int j);
    void imprime();


private:
    int n;
    int *vet;
    int detInd(int i, int j);
    bool verifica(int i,int j);


};

#endif // MATRIZTRIDIAGONAL_H_INCLUDED

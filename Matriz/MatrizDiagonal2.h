#ifndef MATRIZDIAGONAL2_H_INCLUDED
#define MATRIZDIAGONAL2_H_INCLUDED

class MatrizDiagonal2{
    public:
        MatrizDiagonal2(int nn);
        ~MatrizDiagonal2();
        int get(int i,int j);
        void set(int i,int j,int valor);

    private:
        int n;//tamanho do vetor
        int *vet; //vetor
        int detind(int i,int j);
        int verifica(int i,int j);
};

#endif // MATRIZDIAGONAL2_H_INCLUDED

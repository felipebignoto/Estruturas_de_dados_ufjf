#ifndef VETORFLEX_H_INCLUDED
#define VETORFLEX_H_INCLUDED

class VetorFlex
{
private:
    int n; // tamanho do vetor
    float *vet; // array que armazena n floats
    int c, f ;// c: limite inferior do indice e f: limite superior do indice
    int detInd(int indice); // operador privado

public:
    VetorFlex(int a, int b);
    ~VetorFlex();
    float get(int indice);
    void set(int indice, float valor);
};

#endif // VETORFLEX_H_INCLUDED

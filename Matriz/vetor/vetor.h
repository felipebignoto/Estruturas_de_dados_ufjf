#ifndef VETOR_H_INCLUDED
#define VETOR_H_INCLUDED

class Vetor
{
public:
    Vetor(int tam);
    ~Vetor();
    float get(int indice);
    void set(int indice, float valor);

private:
    int n; // tamanho do vetor
    float *vet; // array que armazena n floats
    bool verifica(int indice);
};

#endif // VETOR_H_INCLUDED

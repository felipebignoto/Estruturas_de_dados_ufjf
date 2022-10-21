#ifndef MTS_H_INCLUDED
#define MTS_H_INCLUDED
class MTS{

public:
    MTS(int nn);
    ~MTS();
    void set(int i, int j,int valor);
    int get(int i, int j);

private:
    int n;
    int *vet;
    int detInd(int i, int j);
    bool verifica(int i, int j);


};


#endif // MTS_H_INCLUDED

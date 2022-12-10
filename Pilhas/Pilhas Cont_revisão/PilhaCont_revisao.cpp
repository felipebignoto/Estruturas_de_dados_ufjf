#include <iostream>
#include "PilhaCont_revisao.h"
using namespace std;

PilhaCont::PilhaCont(int tam){///OK

    max = tam;
    vet = new int[tam];
    topo = -1;

}

PilhaCont::~PilhaCont(){///ok

    delete [] vet;

}

int PilhaCont::getTopo(){///ok

    if(topo == -1){
        cout<<"Lista vazia"<<endl;
        exit(1);
    }

    else{
        return vet[topo];
    }


}

bool PilhaCont::vazia(){///ok

    if(topo == -1){
        return true;
    }
    else{
        return false;
    }
}

void PilhaCont::empilha(int val){///ok

    if(topo == max -1){
        cout<<"lista cheia"<<endl;
        exit(2);
    }

    topo++;
    vet[topo] = val;

}

int PilhaCont::desempilha(){///ok

    if(topo == -1){
        cout<<"lista vazia"<<endl;
    }

    else{
        topo--;
        return vet[topo+1];

    }
}



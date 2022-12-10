#include <iostream>
#include "FilaCont_revisao.h"
using namespace std;

FilaCont::FilaCont(int tam){///ok

    max = tam;
    inicio = 0;
    fim = 0;
    vet = new int[tam];
}

FilaCont::~FilaCont(){///ok

    delete [] vet;
}

int FilaCont::getInicio(){///ok

    if(inicio == fim){
        cout<<"lista vazia"<<endl;
    }

    else{
        return vet[inicio];
    }
}

void FilaCont::enfileira(int val){///ok

    if(fim != max){
        vet[fim] = val;
        fim++;
    }

    else{
        cout<<"lista cheia"<<endl;
    }


}

int FilaCont::desenfileira(){///ok

    if(inicio == fim){
        cout<<"lista vazia"<<endl;
        exit(1);
    }

    else{
        inicio++;
        return vet[inicio -1];
    }
}

bool FilaCont::vazia(){///ok

    if(inicio == fim){
        return 1;
    }
    else{
        return 0;
    }
}

 void FilaCont::imprime(){

    if(max==inicio){
        cout<<"lista vazia"<<endl;
    }

    else{
        cout<<"imprimindo a pilha: ";
        for(int i = inicio; i < fim; i++){
            cout<<vet[i]<<" ";
        }
    }
    cout<<endl;

 }

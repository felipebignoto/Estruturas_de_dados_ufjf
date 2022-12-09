#include <iostream>
#include "ListaCont4.h"
using namespace std;

ListaCont::ListaCont(int tam){///construtor - -----------------------------OK

    max = tam;
    n =0;
    vet = new int[tam];

}

ListaCont::~ListaCont(){///destrutor - -----------------------------------OK

    delete []vet;
}

int ListaCont::get(int k){///renorta o valor no indice K

    if(k>=0 && k<n)
        return vet[k];

    else{
        cout<<"indice invalido"<<endl;
        exit(1);
    }


}

void ListaCont::set(int k, int val){///Insiro um valor Val no indice K

    if(k>=0 && k<n)
        vet[k] = val;
    else{
        cout<<"indice invalido"<<endl;
        exit(1);
    }
}

void ListaCont::insereFinal(int val){///Insiro no final da lsita - -------OK

    if(n==max){
        cout<<"lista cheia"<<endl;
        exit(1);
    }

    else{
        vet[n] = val;
        n++;
    }
}

void ListaCont::removeFinal(){///Remove o ultimo valor da lista - --------OK

    if(n==0){
        cout<<"lista vazia"<<endl;
    }

    else{
        n--;
    }
}

void ListaCont::insereK(int k, int val){///Inserindo no indice K----------OK

    if(n==max){
        cout<<"lista cheia"<<endl;
        exit(1);
    }

    else{
        if(k>=0 && k<n){
            for(int i = n-1;i>=k; i--){
                vet[i+1] = vet[i];
            }
            vet[k] = val;
            n++;
        }

        else{
            cout<<"indice invalido"<<endl;
        }
    }
}

void ListaCont::removeK(int k){///remove na posição K----------------------OK

    if(n==0){
        cout<<"lista vazia"<<endl;
        exit(1);
    }

    else{
        if(k>=0 && k<n){
            for(int i = k; i<n-1;i++){
                vet[i] = vet[i+1];
            }

            n--;
        }

        else{
            cout<<"indice invalido"<<endl;
            exit(1);
        }
    }
}

void ListaCont::imprime(){///Imprime a lista------------------------------OK

    cout<<"Imprimindo a lista: ";
    for(int i = 0; i<n ; i++){
        cout<<vet[i]<<" ";
    }
    cout<<endl;
}

void ListaCont::insereInicio(int val){///Insere no inicio-----------------OK

    if(n==0){
        vet[0] = val;
        n++;
    }

    else{

        insereK(0,val);
    }
}

void ListaCont::removeInicio(){///Remove no inicio------------------------OK

    if(n==0){
        cout<<"lista vazia"<<endl;
    }

    else{
        for(int i = 0; i<n-1; i++){
            vet[i] = vet[i+1];
        }

        n--;
    }

}

int ListaCont::numNos(){///retorna a quantidade da lista------------------OK

    return n;
}

int ListaCont::buscaMaior(int val){///Retoena o indice do primeiro valor maior que Val

    for(int i =0; i<n;i++){
        if(vet[i]>val)
            return i;
    }

    return -1;
}

void ListaCont::limpar(){///Limpo a lsita,
    for(int i = 0; i<n;i++){
        vet[i] = NULL;
    }
    n = 0;

}

void ListaCont::insereValores(int tam,int vet1[]){
int j = 0;
    if(tam <= max - n){

        for(int i = n; i<max && j<tam; i++){
            vet[i] = vet1[j];
            j++;
            n++;
        }

    }
}





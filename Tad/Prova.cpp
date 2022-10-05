#include "Prova.h"

Prova::Prova(int nq)
{
    // implemente o construtor aqui
    n=nq;
    cout << "Criando uma prova" << endl;
    notasQuestoes = new double[nq];
}

// exercicio 7
// implemente aqui

Prova::~Prova(){
    cout<<"destrutor"<<endl;
    delete []notasQuestoes;
}

void Prova::leNotas(){

    cout<<"digite as notas"<<endl;
    for(int i=0; i<n;i++){
        cin>>notasQuestoes[i];
    }

}

void Prova::calculaNotaFinal(){

    cout<<"calculanotafinal"<<endl;
    double soma = 0,menor=notasQuestoes[n-1];

    for(int i =0; i<n;i++){
        if(notasQuestoes[i] < menor){
            menor = notasQuestoes[i];
        }
    }

    for(int i= 0; i<n;i++){
        soma += notasQuestoes[i];
    }

    notaFinal = soma - menor;
}

double Prova::obtemNotaFinal(){

    return notaFinal;
}

#include "Aluno.h"

Aluno::Aluno(string n, string m)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
}

Aluno::~Aluno()
{
    cout << "Destruindo objeto aluno" << endl;
}

// ----------------------------------------------------------------------------
// Exercicio 1
// ----------------------------------------------------------------------------

void Aluno::leNotas()
{
    // Implemente sua solucao aqui

    cout<<"Digite as sete notas"<<endl;
    for(int i =0; i<7; i++){
        cin>>notas[i];
    }
}

double Aluno::calculaMedia()
{
    // Implemente sua solucao aqui
    double soma =0, media;
    for(int i=0; i<7;i++){
        soma += notas[i];
    }
    media=soma/7;
    return media;
}

// ----------------------------------------------------------------------------

void Aluno::setNome(string novo)
{
    nome = novo;
}

string Aluno::getNome()
{
    return nome;
}

// ----------------------------------------------------------------------------
// Exercicio 2
void Aluno::setMatricula(string m){
    cout<<"alterando matricula"<<endl;
    matricula = m;

}

void Aluno::setIdade(int i){
    cout<<"alterando idade"<<endl;
    idade = i;
}

int Aluno::getIdade(){

    return idade;

}

string Aluno::getMatricula(){

    return matricula;

}

void Aluno::Lerfrequencia(){

    cout<<"digite as frequencias:"<<endl;
    int x;
    for(int i=0;i<7;i++){
        cin>>x;
        if(x>0)
            x=1;
        else
            x=0;
        frequencia[i] = x;
    }
}

void Aluno:: relatorio(){
    cout<<"Relatório"<<endl;
    cout<<"Nome: "<<getNome()<<endl;
    cout<<"idade: "<<getIdade()<<endl;
    cout<<"matricula: "<<getMatricula()<<endl;
    for(int i=0;i<7;i++){
        //cout<<"frequencia: "<<frequencia[i] << "  e  ";
        if(frequencia[i]==1)
            cout<<"Frequente e ";
        else
            cout<<"Infrequente e ";
        if(notas[i]>=60)
            cout<<"Aprovado"<<endl;
        else
            cout<<"Reprovado"<<endl;
    }
}


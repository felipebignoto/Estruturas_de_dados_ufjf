#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
    public:
        Aluno(string n, string m);
        ~Aluno();

        // operacoes
        void setNome(string n);
        string getNome();

        // exercicio 1
        void leNotas();
        double calculaMedia();

        // exercicio 2
        void setMatricula(string m);
        void setIdade(int i);

        int getIdade();
        string getMatricula();

        // exercicio 5
        // implemente aqui
        void Lerfrequencia();

        void relatorio();

    private:
        int idade;
        string nome, matricula;
        double notas[7];

        // exercicio 4
        // implemente aqui
        bool frequencia[7];
};

#endif // ALUNO_H

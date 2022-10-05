#include <iostream>
#include "Aluno.h"
#include "Prova.h"

using namespace std;

int main()
{
    cout << "LABORATORIO DE PROGRAMACAO II - AULA 04\n" << endl;

    //exercicio 7
    Prova p(3);
    p.leNotas();
    p.calculaNotaFinal();
    p.obtemNotaFinal();


    // ------------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------------
    Aluno a("Carlos", "201566123AB");

    // leitura das notas do aluno
    a.leNotas();
    double m = a.calculaMedia();

    cout << "Media do aluno: " << m << endl<<endl;
    // ------------------------------------------------------------------------

    // ------------------------------------------------------------------------
    // EXERCICIO 3
    a.setIdade(18);
    a.setMatricula("123456789abc");
    int i = a.getIdade();
    string s = a.getMatricula();
    cout<<i<<" "<<s<<endl<<endl;

    a.Lerfrequencia();
    // ------------------------------------------------------------------------
    a.relatorio();
    // ------------------------------------------------------------------------

    // Implemente aqui

    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------




    return 0;
}

#include <iostream>
#include <fstream>
#include "lista.h"

int main()
{
    std::ifstream in("estruturadedadosalunos.txt");
    std::string nomedoaluno;
    tAluno novoAluno;
    tLista listaED;
    IniciaLista(&listaED);
    while(std::getline(in, nomedoaluno)){
        CriaAluno(&novoAluno, nomedoaluno);
        if(BuscaElemento(&listaED,novoAluno) == -1){
            AcrescentaElemento(&listaED,novoAluno);
        }
        else {
            listaED.alunos[BuscaElemento(&listaED,novoAluno)].numocc++;
        }
    }

    OrdenaLista(&listaED);
    ExibeLista(&listaED);

    return 0;
}

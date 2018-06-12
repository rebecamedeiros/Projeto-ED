#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "lista.h"
#include "arvore.h"

#define limpa_tela()  system("clear")
//#define limpa_tela() system("cls")

using namespace std;

int menu();

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
    //ExibeLista(&listaED);

    Arvore arvore;
    IniciaArvore(&arvore);

    CopiaListaArvore(&listaED, &arvore);

    int opcao;
    string nome;

    do{
        opcao = menu();
        cout << "\n\n\n";
        getchar();
        if(opcao == 1)
            ExibeArvore(arvore);

        if(opcao == 2)
            ExibeLista(&listaED);

        if(opcao == 3){
            cout << "Digite o nome a ser pesquisado: ";
             cin >> nome;
            if(!Busca(arvore, nome))
                cout << "Nome nao encontrado!";
        }

    cout << "\n\n\n";

    }while(opcao != 0);

    limpa_tela();
    cout << "GoodBye!" << endl << endl;

    return 0;
}


int menu(){
    int opcao;
    do{
        cout << "******MENU******" << endl;
        cout << "1..Listar Arvore" << endl;
        cout << "2...Listar Lista" << endl;
        cout << "3.........Buscar" << endl;
        cout << "0...........Sair" << endl;
        cout << "Opcao: ";
         cin >> opcao;
    }while(opcao < 0 || opcao > 3);
    return opcao;
}

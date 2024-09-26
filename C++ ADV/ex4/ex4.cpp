#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class Turma{
    public:
        string nome;

    private:
        float notaMedia;
        string listaAlunos [26][2]; // -Numeros 1-Nome
        string listaModulos [50];

    public:
        void colocaNotaMedia(float notaX){
        this -> notaMedia = notaX;
        }

        bool inserirAluno (string numeroAluno, string nomeAluno){
            //em que posição colo o aluno
            for (int x = 0; x < 26; x++){
                if (this ->listaAlunos[x][0] == ""){
                    //em que campo colo o aluno
                    this -> listaAlunos [x] [0] = numeroAluno;
                    this -> listaAlunos [x] [1] = nomeAluno;
                return true;
                }
            }
            //em que campo colo o aluno
            return false;
        }

        string listagemNumAlunos(){
            string aux = "";
            for (int i = 0; i < 26; i++){
                if (this -> listaAlunos [i] [0] != "") {
                    aux += this ->listaAlunos[i][0];
                    aux += "\n";
                }
            }
            return aux;
        }

        string listagemNomeAlunos(){
            string aux = "";
            for (int i = 0; i < 26; i++){
                if (this -> listaAlunos [i] [1] != "") {
                    aux += this ->listaAlunos[i][1];
                    aux += "\n";
                }
            }
            return aux;
        }

        void imprimeNumeroAlunos () {
            cout << this -> numeroAlunos();
        }

    public:
        int numeroAlunos(){
            int contador = 0;
            for (int x = 0; x < 26; x++){
                if (listaAlunos[x][0] != ""){
                    contador++;
                }
            }
            return contador;
        }



};


int main (){

    int op;
    string varAuxNome;
    string varAuxNumero;

    Turma turma1P;

    turma1P.nome = "Turma 1P 2023/2024";
    turma1P.colocaNotaMedia (0.0);
    turma1P.inserirAluno ("14466", "Leonardo Fernandes");
    turma1P.inserirAluno ("14467", "Hilario Ferreira");
    turma1P.inserirAluno ("14468", "Daniel Mota");
    turma1P.inserirAluno ("14469", "Filipe Soblirov");
    turma1P.inserirAluno ("14470", "Ines Campos");

    /*
    4 - inserir aluno
        A - pedir numero
        B - pedir nome
        C - criar metodo
    */
    do {
    cout << "Oque quer ver?";
    cout << "\n0 - Sair";
    cout << "\n1 - ver numero de alunos";
    cout << "\n2 - ver numero dos alunos";
    cout << "\n3 - ver nome dos alunos";
    cout << "\n4 - inserir alunon\n";
    cout << "\n5 - retirar alunon\n";
    cin >> op;

    switch (op) {
        case 0:
            break;
        case 1:
            turma1P.imprimeNumeroAlunos();
            break;
        case 2:
            cout << turma1P.listagemNumAlunos();
            break;
        case 3:
            cout <<turma1P.listagemNomeAlunos();
            break;
        case 4:
            fflush(stdin);
            cout << "qual o numero do aluno?";
            cin >> varAuxNumero;
            getline(cin, varAuxNumero);
            cout << "Qual o nome do aluno? ";
            getline(cin, varAuxNome);
            turma1P.inserirAluno (varAuxNumero, varAuxNome);
            break;
    } while (op != 0);
        case 5:

    }


    cout << "numero de alunos: ";
    turma1P.imprimeNumeroAlunos();
    cout << endl;
    cout << turma1P.listagemNumAlunos();
    cout << endl;
    cout << turma1P.listagemNomeAlunos();
    return 0;

}

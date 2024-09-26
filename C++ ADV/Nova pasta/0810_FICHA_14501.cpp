//nº14501 João Moreira
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Veiculo {
    string tipoVeiculo;
    string marca;
    string modelo;
    string matricula;
    int ano;
};

void colocarDadosMeu(Veiculo x1){
    x1.tipoVeiculo = "Carro de Passageiros";
    x1.marca = "Opel";
    x1.modelo = "Astra GTC";
    x1.matricula =  "01-XA-21";
    x1.ano = 2019;
}

void colocarDadosProf(Veiculo x2) {
    x2.tipoVeiculo = "Carrinha de Mercadorias";
    x2.marca = "Volkswagen";
    x2.modelo = "Polo 1.2 TDI";
    x2.matricula =  "00-OX-11";
    x2.ano = 2014;
}

void veiculoMaisNovo(Veiculo meuVeiculo, Veiculo profVeiculo) {
    if (meuVeiculo.ano > profVeiculo.ano){
        cout << "O carro mais novo seria o meu";
        cout << meuVeiculo.tipoVeiculo << endl;
        cout << meuVeiculo.marca << endl;
        cout << meuVeiculo.modelo << endl;
        cout << meuVeiculo.matricula << endl;
        cout << meuVeiculo.ano << endl;
    } else if (meuVeiculo.ano < profVeiculo.ano) {
        cout << "O carro mais novo seria o do stor";
        cout << profVeiculo.tipoVeiculo << endl;
        cout << profVeiculo.marca << endl;
        cout << profVeiculo.modelo << endl;
        cout << profVeiculo.matricula << endl;
        cout << profVeiculo.ano << endl;
    } else if (meuVeiculo.ano = profVeiculo.ano) {
        cout << "O carro mais novo seria o do stor";
        cout << profVeiculo.tipoVeiculo << endl;
        cout << profVeiculo.marca << endl;
        cout << profVeiculo.modelo << endl;
        cout << profVeiculo.matricula << endl;
        cout << profVeiculo.ano << endl;
    }

}

void mostraDados(Veiculo dados) {

}

int main () {
    Veiculo meuVeiculo;
    Veiculo profVeiculo;

    veiculoMaisNovo(meuVeiculo, profVeiculo);

    cout << "\n\nA minha AutoAvaliacao deste modulo e: 10" << endl;

    return 0;

}

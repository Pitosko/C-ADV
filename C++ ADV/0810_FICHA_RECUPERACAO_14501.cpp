//João Moreira nº14501
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Struct
struct Restaurante {
    string tipoRestaurante;
    string nomeRestaurante;
    string moradaRestaurante;
    int numMesasRestaurante;
    int numTlfRestaurante;
};

//Dados do meu restaurante
void colocarDadosMeu(Restaurante meuRestaurante){
    meuRestaurante.tipoRestaurante = "Rodizio";
    meuRestaurante.nomeRestaurante = "EnfartaBrutos";
    meuRestaurante.moradaRestaurante = "Rua Xpto n.33, Sto Tirso";
    meuRestaurante.numMesasRestaurante = 22;
    meuRestaurante.numTlfRestaurante = 222542245;
}

//Dados do restaurante do stor
void colocarDadosProf(Restaurante profRestaurante) {
    profRestaurante.tipoRestaurante = "Vegan";
    profRestaurante.nomeRestaurante = "O Xicó";
    profRestaurante.moradaRestaurante = "Praça d.Maria 2, 4770 V.N.Famalicão";
    profRestaurante.numMesasRestaurante = 22;
    profRestaurante.numTlfRestaurante = 935202544;
}

//Função do restaurante com mais mesas
void restauranteComMaisMesas(Restaurante meuRestaurante, Restaurante profRestaurante){
    if (meuRestaurante.numMesasRestaurante > profRestaurante.numMesasRestaurante){
        cout << "O restaurante com mais mesas seria o meu";
        cout << meuRestaurante.tipoRestaurante << endl;
        cout << meuRestaurante.nomeRestaurante << endl;
        cout << meuRestaurante.moradaRestaurante << endl;
        cout << meuRestaurante.numMesasRestaurante << endl;
        cout << meuRestaurante.numTlfRestaurante << endl;
    } else if (meuRestaurante.numMesasRestaurante < profRestaurante.numMesasRestaurante) {
        cout << "O restaurante com mais mesas seria o do stor";
        cout << profRestaurante.tipoRestaurante << endl;
        cout << profRestaurante.nomeRestaurante << endl;
        cout << profRestaurante.moradaRestaurante << endl;
        cout << profRestaurante.numMesasRestaurante << endl;
        cout << profRestaurante.numTlfRestaurante << endl;
    } else if (meuRestaurante.numMesasRestaurante == profRestaurante.numMesasRestaurante) {
        cout << "Por defeito seria o meu";
        cout << meuRestaurante.tipoRestaurante << endl;
        cout << meuRestaurante.nomeRestaurante << endl;
        cout << meuRestaurante.moradaRestaurante << endl;
        cout << meuRestaurante.numMesasRestaurante << endl;
        cout << meuRestaurante.numTlfRestaurante << endl;
    }

}

//Mostrar Dados na main
void mostraDados(Restaurante &restaurante){
    cout << "\n\nDados do Restaurante:\n";
    cout << "Tipo do restaurante: " << restaurante.tipoRestaurante << endl;
    cout << "Nome do Restaurante: " << restaurante.nomeRestaurante << endl;
    cout << "Morada do Restaurante: " << restaurante.moradaRestaurante << endl;
    cout << "Numero de mesas do Restaurante: " << restaurante.numMesasRestaurante << endl;
    cout << "Numero de telefone do Restaurante: " << restaurante.numTlfRestaurante << endl;

}

//Media de 2 numeros de mesas
float media2NumMesas(){

}

//Media de geral do numero de mesas
float mediaGeralNumMesas() {

}

int main (){

    //variaveis
    Restaurante meuRestaurante;
    Restaurante profRestaurante;
    Restaurante restaurante;

    restauranteComMaisMesas(meuRestaurante, profRestaurante);//chamar a função do restaurante com mais mesas

    colocarDadosMeu(meuRestaurante); //chamar a função dos meus dados
    colocarDadosProf(profRestaurante); //chamar a função dos dados do prof

    mostraDados(meuRestaurante); //chamar a função de mostrar os meus dados
    mostraDados(profRestaurante); //chamar a função de mostrar os dados do prof

    media2NumMesas();//chamar a função da media de dois numeros

    mediaGeralNumMesas(); // chamar a função da media

    return 0;

}


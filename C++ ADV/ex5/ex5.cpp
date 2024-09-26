#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <ctime>

using namespace std;

const int numEuropa = 5;
const int numAfrica = 5;

void populareuropa (string continente [numEuropa]) {
    continente [0] = "Portugal";
    continente [1] = "ESPANHA";
    continente [2] = "FRANCA";
    continente [3] = "INGLATERRA";
    continente [4] = "ITALIA";
}

void popularafrica (string continente [numAfrica]) {
    continente [0] = "ARGELIA";
    continente [1] = "MARROCOS";
    continente [2] = "ANGOLA";
    continente [3] = "MOCAMBIQUE";
    continente [4] = "EGIPTO";
}


void mostraTabelaPais(string nomePaisSorteado, string aglomeraLetras){
    bool temLetra;
    cout << endl << endl;
    for (int i=0; i <nomePaisSorteado.length(); i++) {
        temLetra = false;
        for (int j=0; j<aglomeraLetras.length(); j++){
            if (nomePaisSorteado[i] == aglomeraLetras[j]){
                temLetra = true;
            }
        }
        if (temLetra) {
            cout << nomePaisSorteado [i] << " ";
        } else {
            cout << "_" << " ";
        }
    }
    cout << endl;
}

void mostraLetrasEscolhidas (string letrasEscolhidas) {
    cout << "\n*** LETRAS ESCOLHIDAS: ";
    for (int i=0; i<letrasEscolhidas.length(); i++) {
        cout << letrasEscolhidas[i];
        cout << " ";
    }
}

bool verificaSejaEscolheu(string aglomeraLetras, char letraAverificar){
    for (int i=0; i<aglomeraLetras.length(); i++) {
        if (aglomeraLetras[i] == letraAverificar) {
            return true;
        }
    }
    return false;
}

bool verificaSeLetraExiste(string nomePais, char letraAverificar) {
    for (int i=0; i<nomePais.length(); i++) {
        if (nomePais[i] == letraAverificar){
            return true;
        }
    }
    return false;
}

bool verificaAdvinhou (string nomePaisSorteado, string aglomeraLetras) {
    bool temLetrasTodas = true;
    bool temLetra;
    for (int i=0; i<nomePaisSorteado.length(); i++) {
        temLetra = false ;
        for (int j=0; j<aglomeraLetras.length(); j++){
            if (nomePaisSorteado[i] == aglomeraLetras[j]){
                temLetra = true;
            }
        }
        if (!temLetra) temLetrasTodas = temLetra;
    }
    return temLetrasTodas;
}

int main () {
    int tentativas = 5;
    bool jogoterminou = false;
    string escolhaContinente;
    string europa[numEuropa];
    string africa[numAfrica];

    populareuropa(europa);
    popularafrica(africa);
     do {
    cout << "jogo da forca\n\n";
    cout << "qual continente quer jogar?\n";
    cout << "1- europa\n";
    cout << "2- africa\n";
    cout << "R: ";
    cin >> escolhaContinente;
    cout << endl << endl;
     } while (escolhaContinente != "0"
                && escolhaContinente != "1"
                && escolhaContinente != "2");

    if (escolhaContinente == "1" || escolhaContinente == "2"){
        int numPaisSorteado;
        string nomePaisSorteado;
        string aglomeraLetras = "AH";
        char letraEscolhida;

        srand(time(NULL));

        //Sorteia os países
        if (escolhaContinente == "1" ) {
        numPaisSorteado = rand() % numEuropa;
        nomePaisSorteado = europa[numPaisSorteado];
        } else if (escolhaContinente == "2") {
            numPaisSorteado = rand() % numAfrica;
            nomePaisSorteado = africa[numPaisSorteado];
        }
        do {
            cout << "Tem " << tentativas << " Tentativas para advinhar\n\n";
            mostraTabelaPais(nomePaisSorteado, aglomeraLetras);
            mostraLetrasEscolhidas(aglomeraLetras);

            cout << endl << "Diga uma letra para verificar: ";
            cin >> letraEscolhida;
            letraEscolhida = (char) toupper (letraEscolhida);

            bool existe, escolhida;
            escolhida = verificaSejaEscolheu(aglomeraLetras, letraEscolhida);
            if (escolhida){
                cout << endl << "A sua letra " << letraEscolhida;
                cout << " ja tinha sido escolhida!!" << endl;
            } else {
                aglomeraLetras = aglomeraLetras + letraEscolhida;
                existe = verificaSeLetraExiste(nomePaisSorteado, letraEscolhida);
                if (existe) {
                    //verificar se o jogo terminou!!
                    jogoterminou = verificaAdvinhou (nomePaisSorteado, aglomeraLetras);
                } else {
                    tentativas--;
                }
            }
        } while(tentativas > 0 && !jogoterminou);

        if (jogoterminou && tentativas > 0) {
            cout << "\nPARABENS ... ACERTOU O PAIS \n\n";
            cout << nomePaisSorteado << "\n\n";
            mostraTabelaPais (nomePaisSorteado, aglomeraLetras);
        }

    } else {
    }


    return 0;
}

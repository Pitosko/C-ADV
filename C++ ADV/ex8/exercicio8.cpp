#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int numregistos = 26;
int numRegistosExistente = 0;
bool leuFicheiro = false;

void readFile(string localficheiro,
              string col1[numregistos],
              int col2[numregistos],
              string col3[numregistos]) {

    string myText;
    string txtFinal = "";
    bool comeca = false;
    int comecarVar=1, posicaoArray=0;
    string idadeaux = "";
    //string col1[26], col2[26], col3[26];

    ifstream MyReadFile(localficheiro);

    while (getline(MyReadFile, myText)) {
        comecarVar= 1;
        idadeaux = "";
        if (myText == "<READ>") comeca = true;
        if (myText == "</READ>") comeca = false;

        if (comeca && myText != "<READ>") {
                col1 [posicaoArray] = "";
                col3 [posicaoArray] = "";
            for (int i=0; i< myText.length(); i++) {
                if (myText[i] == ';') {
                    comecarVar++;
                } else {
                    if (comecarVar == 1) {
                        col1[posicaoArray] = col1[posicaoArray] + myText [i];
                    } else if (comecarVar == 2) {
                        idadeaux = idadeaux + myText[i];
                        //col2[posicaoArray] = col2[posicaoArray] + myText [i];
                    } else if (comecarVar == 3) {
                        col3[posicaoArray] = col3[posicaoArray] + myText [i];
                    }
                }
            }
            col2[posicaoArray] = stoi(idadeaux);
            //cout << "O " << col1[posicaoArray];
            //cout << " tem " << col2[posicaoArray] << " anos e mora em " << col3[posicaoArray] << endl;
            posicaoArray ++;
            txtFinal = txtFinal + myText + "\n";
        }
    }

    //cout << txtFinal;
    MyReadFile.close();
    numRegistosExistente = posicaoArray;
    leuFicheiro = true;
}

void writefile(char * localficheiro,
                string col1[numregistos],
                int col2[numregistos],
                string col3[numregistos]) {

    string txtTotal = "";

    ofstream MyFile(localficheiro);

    MyFile << "<READ>\n";

    for (int i=0; i<numRegistosExistente; i++) {
        txtTotal += col1[i];//nome
        txtTotal += ";";
        txtTotal += to_string(col2[i]);//idade
        txtTotal += ";";
        txtTotal += col3[i];//localidade
        txtTotal += "\n";
    }

    txtTotal = txtTotal + "</READ>\n";

    MyFile << txtTotal;

    MyFile.close();
}

void mostraDados(string col[numregistos]) {
    for (int i=0; i<numRegistosExistente; i++) {
        cout << "#" << i << " - " << col[i] << "\n";
    }
}

void mostraDadosInteiros(int col[numregistos]) {
    for (int i=0; i<numRegistosExistente; i++) {
        cout << "#" << i << " - " << col[i] << "\n";
    }
}

void popularDadosInteiros (int col [numregistos]) {
    for (int i=0 ; i<numregistos; i++) {
        col [i]=0;
    }
}

void mostraRegistos (string nomes [numregistos],
                     int idades [numregistos],
                     string localidades[numregistos]) {
    for (int i=0 ; i<numRegistosExistente; i++) {
        cout << "#" << i << " - ";
        cout << nomes[i];
        cout << " | ";
        cout << to_string(idades[i]) << " anos ";
        cout << " | ";
        cout << localidades[i];
        cout << "\n";
    }
}

int mostraMenuPrincipal () {
    int opx= 0;
    system("cls");
    cout << "**** oque pretende fazer **** \n\n\n";
    cout << "1 - Ler Dados do ficheiro\n\n";
    if (leuFicheiro) {
        cout << "2 - Gravar dados  do ficheiro\n";
        cout << "3 - Mostra Nomes Lidos\n";
        cout << "4 - Mostra localidades Lidas\n";
        cout << "5 - Mostra Idades Lidas\n";
        cout << "6 - Mostra Registos\n\n";
        cout << "11 - Inserir Registro\n";
        cout << "12 - Alterar Registro\n";
        cout << "13 - Apagar Registo\n";
    }
    cout << "0 - Sair do Programa\n\n";
    cout << "O que pretende fazer? ";
    cin >> opx;

    return opx;
}

void inserirRegisto (string nomes [numregistos],
                     int idades [numregistos],
                     string localidades[numregistos]) {

    string aux1,aux3;
    int aux2;

    cout << "Vais inserir um Registo\n\n";
    cout << "\nDiga o nome do novo registo: ";
    cin >> aux1;
    cout << "\nDiga a idade: ";
    cin >> aux2;
    cout << "\nDiga a localidade: ";
    cin >> aux3;
    nomes[numRegistosExistente]= aux1;
    idades[numRegistosExistente]= aux2;
    localidades[numRegistosExistente]= aux3;
    numRegistosExistente = numRegistosExistente + 1;
}

void alterarRegisto (string nomes [numregistos],
                     int idades [numregistos],
                     string localidades[numregistos]) {
    cout << "Vais alterar um Registo\n\n";
    cout << "\ngdfg";
}

void apagarRegisto (string nomes [numregistos],
                     int idades [numregistos],
                     string localidades[numregistos]) {
    int numero;
    int op;
    cout << "Vais alterar um Registo\n\n";
    cout << "\nDiga o numero do registo que deseja eliminar: ";
    cin >> numero;
    if (numero >= 0 && numero < numRegistosExistente){

    cout << "tem a certeza que quer eliminar o seguinte registo???:\n";
    cout << nomes[numero] << ";" << idades[numero] << ";" << localidades[numero];
    cout << "\nResposta (1-Sim / 0 - Nao): ";
    cin >> op ;
    if (op ==1) {


            for (int i = numero; i < (numRegistosExistente - 1);i++){
                nomes[i] = nomes[i + 1];
                idades[i] = idades[i + 1];
                localidades[i] = localidades[i + 1];
            }
            numRegistosExistente = numRegistosExistente -1;

        }
    } else {
    cout << "Não temos nenhum registro desse numero\nContinuar(1-Sim):";
    cin >> op;
    }

}


int main () {

    string nomes[numregistos], localidades[numregistos];
    int idades [numregistos];
    int op = 0;
    int aux;

    //cout << idades[0] << endl;

    //cout << "idade #1 - " <<  stoi(idades[0]) << endl;
    //cout << "idade #1 + 1 = " <<  (stoi(idades[0])+ 1) << endl;

    //mostraDados (nomes);
    //mostraDadosInteiros (idades);
    //mostraDados (localidades);

    do {
        op = mostraMenuPrincipal();

        switch (op) {
        case 1:
            numRegistosExistente=0;
            popularDadosInteiros(idades);
            readFile("aiai.txt", nomes, idades, localidades);
            break;

        case 2:
            writefile("aiai.txt",nomes,idades,localidades);
            break;

        case 3:
            mostraDados(nomes);
            cout << "Continuar? (1 - Sim)";
            cin >> aux;
            break;

        case 4:
            mostraDados(localidades);
            cout << "Continuar? (1 - Sim)";
            cin >> aux;
            break;

        case 5:
            mostraDadosInteiros(idades);
            cout << "Continuar? (1 - Sim)";
            cin >> aux;
            break;

        case 6:
            mostraRegistos(nomes,idades,localidades);
            cout << "Continuar? (1 - Sim)";
            cin >> aux;
            break;


        case 11:
            inserirRegisto(nomes,idades,localidades);
            break;

        case 12:
            alterarRegisto(nomes,idades,localidades);
            break;

        case 13:
            apagarRegisto(nomes,idades,localidades);
            break;

        default:
            break;
        }

    }while (op != 0);

    return 0;

}

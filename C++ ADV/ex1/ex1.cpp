    #include <iostream>
    #include <cmath>
    #include <string>
    #include <stdio.h> // print, scanf, puts, NULL
    #include <conio.h> // getch
    using namespace std;

    const int numAutocarros = 26;

    struct bus {
    string linha;
    string trajetos;
    string horas;
    int capacidade;
    string condutor;
    };

void mostrarCapacidadeTotal (bus autocarros[numAutocarros], int numAutocarros ) {
   cout << "\n\n\n Capacidade : \n bla bla bla";
   cout << "\n\n Press ENTER to continue: ";
   getch();
}

void mostrarLinhasTrajeto (bus autocarros[numAutocarros], int numAutocarros ) {
    cout << "\n\n\n Linhas / Stops : \n bla bla bla";
    cout << "\n\n Press ENTER to continue: ";
    getch();
}

void mostrarMotoristas (bus autocarros[numAutocarros], int numAutocarros){
    cout << "\n\n\n Nome do Motorista : \n bla bla bla";
    cout << "\n\n Press ENTER to continue: ";
    getch();
}

void pedirelemento (bus autocarro[numAutocarros], int numAutocarro) {
    system("cls");

    string aux;
    bool linhaOK = true;

    do {
        linhaOK = true;
        fflush(stdin);
        cout << "\n\n Qual é a linha do Autocarro # " << numAutocarro << " : ";
        //getline (cin, autocarros[numAutocarro].linha);
        getline(cin,aux);

        for (int i=0; i<numAutocarro; i++){
            if (aux == autocarro [i].linha) {
                linhaOK = false;
                cout << "\n\n A linha " << aux << " ja existe !\n\n\n\n";
            }
        }
    } while (!linhaOK);
    autocarro [numAutocarro].linha = aux;

    getline(cin, autocarro[numAutocarro].linha);

    fflush(stdin);
    cout << "\n\n Escreve as paragens do autocarro: ";
    getline(cin, autocarro[numAutocarro].trajetos);

    fflush(stdin);
    cout << "\n\n Quais as horas das paragens do autocarro: ";
    getline(cin, autocarro[numAutocarro].horas);

    fflush(stdin);
    cout << "\n\n Qual e a capacidade do autocarro: ";
    //cin >> (autocarro[numAutocarro].capacidade);
    scanf ("%d", &autocarro[numAutocarro].capacidade);

    fflush(stdin);
    cout << "\n\n Quem e o condutor do autocarro: ";
    getline(cin, autocarro[numAutocarro].condutor);

}



    int main() {

        bus autocarros[numAutocarros];
        int autocarroInicial = 0;
        string op = "0";

        //sector_elementos:

        do {
            cout << "Deseja colocar autocarros? " << endl;
            cout << "1- Sim; " << endl;
            cout << "0- Nao. " << endl;
            cout << "Reposta: " << endl;
            cin >> op;

            if ( op == "1" ) {
                pedirelemento(autocarros, autocarroInicial);
                autocarroInicial++;
            }
            //op = "";


        } while (autocarroInicial < numAutocarros && op!="0");

        /*
        AGORA TEMOS DE MOSTRAR O QUE FAZER?!
        0- AO ENSERIR UMA LINHA .. TEMOS DE CONTROLAR A VER SE EXISTE
           A LINHA JÁ NO SISTEMA !!

        1- PEDIR A CAPACIDADE TOTAL DE LUGARES DOS AUTOCARROS NO SISTEMA
        2- PEDIR AS LINHAS EXISTENTES E LOCAIS DAS MESAS
        3- PEDIR OS NOMES DOS MOTORISTAS
        */

        /*do {
            cout << "\n\nAGORA TEMOS DE MOSTRAR O QUE FAZER ? \n";
            cout << "\n 1- PEDIR A CAPACIDADE TOTAL DE LUGARES DOS AUTOCARROS NO SISTEMA ";
            cout << "\n 2- PEDIR AS LINHAS EXISTENTES E LOCAIS DAS MESAS ";
            cout << "\n 3- PEDIR OS NOMES DOS MOTORISTAS ";

            if ( op == "1" ) {
                mostrarCapacidadeTotal(autocarros, autocarroInicial);
                autocarroInicial++;
            if ( op == "2" ) {
                mostrarLinhasTrajeto(autocarros, autocarroInicial);
                autocarroInicial++;
            if ( op == "3" ) {
                mostrarCapacidadeTotal(autocarros, autocarroInicial);
                autocarroInicial++;
            }

        } while (autocarroInicial < numAutocarros && op!="0");*/

        //goto sector_elementos;



        return 0;

        }

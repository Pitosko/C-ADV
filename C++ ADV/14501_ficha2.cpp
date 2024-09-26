//Joao Moreira 14501
#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <ctime>

using namespace std;


int maximoQuatroInteiros (int num1, int num2, int num3, int num4) {
    if (num1>=num2) {
    } else if (num3>=num1) {
    } else if (num4>=num1) {
        return num1;
    }
}

int mediaQuatroInteiros (int num1, int num2, int num3, int num4) {
    return (num1 + num2 + num3 + num4) /4;
}

int numeroFatorial () {
    return 0;
}

int ordenarDezInteiros (int num1, int num2, int num3, int num4,int num5, int num6, int num7, int num8, int num9, int num10) {

}




int main () {

    string nome;
    int numero;
    int num1, num2, num3, num4,num5, num6, num7, num8, num9, num10, numaux;
    int op;

    cout << "Qual e o teu nome? ";
    cin >> nome;
    cout << "Qual e o reu numero? ";
    cin >> numero;
    do {
        cout << "\nBem vindo: " << nome << numero;
        cout << "\nO que pretende executar?";
        cout << "\n\n1- Maior numero de 4 inteiros fornecidos";
        cout << "\n2- Media de 4 numeros";
        cout << "\n3- Calcular um Fatorial";
        cout << "\n4- Ordenar 10 numeros inteiros";
        cout << "\n0- Sair do Programa";
        cout << "\nR: ";
        cin >> op;

        system("cls");

        if (op == 1){
        cout << "primeiro numero: ";
        cin >> num1;
        cout << "segundo numero: ";
        cin >> num2;
        cout << "terceiro numero: ";
        cin >> num3;
        cout << "quarto numero: ";
        cin >> num4;
        cout << "O seu maximo e: " << maximoQuatroInteiros (num1, num2, num3, num4);

        }

        if (op == 2){
        cout << "primeiro numero: ";
        cin >> num1;
        cout << "segundo numero: ";
        cin >> num2;
        cout << "terceiro numero: ";
        cin >> num3;
        cout << "quarto numero: ";
        cin >> num4;
        cout << "A sua media e: " << mediaQuatroInteiros (num1, num2, num3, num4);

        }

        if (op == 3) {
        cout << "Digite um numero ";
        cin >> num1;
        cout << "O seu numero e: " << numeroFatorial ();

        }

    }while (op > 0);


    return 0;
}

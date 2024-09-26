#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <ctime>

using namespace std;

const float pi = 3.1416;

string juntarDuasPalavras (string txt1, string txt2) {

    return txt1 + " " + txt2;
}

int somarTresNumeros (int num1, int num2, int num3) {

    return num1 + num2 + num3;
}

int maximo (int num1, int num2) {
    return max (num1, num2);


}

int minimo (int num1, int num2) {
    return min (num1, num2);
}

string darPrimeirasLetras (string txt1, string txt2) {

    return txt1[1] + " " + txt2[1];
}

float calculoCircunferencia (float raio) {

    return pi ;
}

int main () {

    int op;
    string nome, sobrenome, nome2, sobrenome2;
    int num1,num2,num3;

    do {
    cout << "\n\n1- Juntar nome e Sobrenome\n";
    cout << "2- Somar 3 inteiros\n";
    cout << "3- Maior e Menor de 2 numeros inteiros\n";
    cout << "4- Dar a 1ª letra do Nome e a 1ª do Sobrenome juntas\n";
    cout << "5- Calcular a circunferência dando apenas o Raio";
    cout << "R: \n";
    cin >> op;

    if (op == 1) {
        cout << "Diga o Nome: ";
        cin >> nome;
        cout << "Diga o Sobrenome: ";
        cin >> sobrenome;
        cout << "O seu resultado e: " << juntarDuasPalavras(nome,sobrenome);
    }

    if (op == 2) {
        cout << "Diga 3 numeros inteiros";
        cout << "\nDiga o primeiro numero inteiro: ";
        cin >> num1;
        cout << "Diga o segundo numero inteiro: ";
        cin >> num2;
        cout << "Diga o terceiro numero inteiro: ";
        cin >> num3;
        cout << "O resultado e: " << somarTresNumeros(num1,num2,num3);
    }

    if (op == 3) {
        cout << "Diga 2 numeros inteiros";
        cout << "\nPrimeiro numero: ";
        cin >> num1;
        cout << "\nSegundo numero: ";
        cin >> num2;
        cout << "\nO resultado maximo e: " << maximo (num1,num2);
        cout << "\nO resultado minimo e: " << minimo (num1,num2);
    }

    if (op == 4) {
        cout << "Diga o Nome: ";
        cin >> nome2;
        cout << "\nDiga o Sobrenome: ";
        cin >> sobrenome2;
        cout << "\nprimeira letra do teu nome e sobrenome e: " << darPrimeirasLetras (nome, sobrenome) ;
    }

    if (op == 5) {
        cout << "Diga o Nome: ";
        cin >> nome2;
        cout << "\nDiga o Sobrenome: ";
        cin >> sobrenome2;
        cout << "\nprimeira letra do teu nome e sobrenome e: " << darPrimeirasLetras (nome, sobrenome) ;

    }while (op > 0);

    return 0;
}

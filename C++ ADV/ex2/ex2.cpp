#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> // print, scanf, puts, NULL
#include <conio.h> // getch

using namespace std;

class MyClass { // A classe
public:             // Acesso
    int myNum;          // Atributo (Variavel int)
    string myString;    // Atributo (Variavel string)
private:
    int Year;
};


int main () {
    MyClass myObj;

    //Definir os Valores
    //myObj.Year
    myObj.myNum = 15;
    myObj.myString = "Algum Texto";

    //Atribuir Valores
    cout << myObj.myNum << "\n";
    cout << myObj.myString;


    return 0;
}

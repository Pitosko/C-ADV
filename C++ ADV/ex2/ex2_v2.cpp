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
        int Year;
    void myMethod (){
        cout << " Ola mundo !";
    }
        int mySum (int num1, int num2) {
        return num1 + num2;
    }
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

    myObj.myMethod (); //Chamar o metodo
    cout << endl << myObj.mySum(2,3);


    return 0;
}

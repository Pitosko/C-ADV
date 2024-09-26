#include <iostream>
using namespace std;

int main() {

    try {
        string age = "";
        string erro = "no age detected";
        if (age != ""){
            cout << "Idade: " << age << " years \n";
        } else {
            throw (erro);
        }
    }
    catch (string txt) {
        cout << "Erro: " << txt;
    }

    return 0;
}

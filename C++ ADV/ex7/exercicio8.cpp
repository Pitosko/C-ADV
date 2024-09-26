#include <iostream>
#include <fstream>
using namespace std;

int main () {
    string myText;
    string txtFinal = "";
    bool comeca = false;

    ifstream MyReadFile("aiai.txt");

    while (getline(MyReadFile, myText)) {
        //cout << myText << endl;
        if (comeca) {

        }
        if (myText == "BEGIN") comeca = true;
        if (myText == "END") comeca = false;

        if (comeca && myText != "BEGIN") {
            txtFinal = txtFinal + myText + "\n";
        }
    }

    cout << txtFinal;
    MyReadFile.close();
}

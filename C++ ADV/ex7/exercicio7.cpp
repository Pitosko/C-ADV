#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream MyFile ("E:\aiai.txt");

    MyFile << "Joao Moreira;";
    MyFile << "17;";
    MyFile << "Povoa de Varzim";

    MyFile.close();
}

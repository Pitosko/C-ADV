#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream MyFile ("D:\aiai.txt");

    MyFile << "Ganda Pau\n";
    MyFile << "AI JASUUUSSS";

    MyFile.close();
}

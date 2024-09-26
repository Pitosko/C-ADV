#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> // print, scanf, puts, NULL
#include <conio.h> // getch

using namespace std;

class Matematica {
    private:
        int num1, num2;
    public:

        //metodos GET(mostrar) E SET()
        void setNum1(int x) {
            this ->num1 = x;
        }
        int getNum1(int x) {
            return this ->num1 = x;
        }

        void setNum2(int y) {
            this ->num2 = y;
        }
        int getNum2(int y) {
            return this ->num2 = y;
        }

        //***********************************
        int numX, numY;
        int somar (int numX, int numY) {
            return numX + numY;
        }
        int subtrair (int numX, int numY) {
            return numX - numY;
        }
        int multiplicar (int numX, int numY) {
            return numX * numY;
        }
        int divisao (int numX, int numY){
            return((float)numX/(float)numY);
        }
};

int main () {
    Matematica myMath;

    myMath.setNum1(5);
    cout << myMath.setNum1() << endl;

    cout << endl << myMath.somar (2, 4);
    cout << endl << myMath.subtrair (2, 4);
    cout << endl << myMath.multiplicar (2, 4);
    cout << endl << myMath.divisao (2, 4);

    Matematica::divisao()

    return 0;
}

#include <iostream>

using namespace std;

class B {
private:
    int B1;
    float B2;

public:
    // Gets e Sets para B1 e B2
    int getB1() { return B1; }
    void setB1(int b1) { B1 = b1; }

    float getB2() { return B2; }
    void setB2(float b2) { B2 = b2; }

    // Metodos MB1 e MB2 com instrucao para imprimir o nome do metodo
    void MB1() {
        cout << "Metodo MB1" << endl;
    }

    void MB2() {
        cout << "Metodo MB2" << endl;
    }

    void MB3() { 
        cout << "Metodo MB3" << endl; 
    }
};
#include <iostream>

using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    // Gets e Sets para A1 e A2
    int getA1() { return A1; }
    void setA1(int a1) { A1 = a1; }

    float getA2() { return A2; }
    void setA2(float a2) { A2 = a2; }

    // Metodos MA1 e MA2 com instrucao para imprimir o nome do metodo
    void MA1() {
        cout << "Metodo MA1" << endl;
    }

    void MA2() {
        cout << "Metodo MA2" << endl;
    }

    void MA3() {
        std::cout << "Alteração a classe A partir do clone" << std::endl;
    }

    int getSoma(int a, int b){
        return (a+b);
    }
};
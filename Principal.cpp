#include <iostream>

using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    // Construtor
    A(int A1, float A2) : A1(A1), A2(A2) {}

    // Getters e Setters
    int getA1() {
        return A1;
    }

    void setA1(int A1) {
        this->A1 = A1;
    }

    float getA2() {
        return A2;
    }

    void setA2(float A2) {
        this->A2 = A2;
    }

    // Métodos MA1 e MA2
    void MA1() {
        cout << "Método MA1" << endl;
    }

    void MA2() {
        cout << "Método MA2" << endl;
    }
};

class B {
private:
    int B1;
    float B2;

public:
    // Construtor
    B(int B1, float B2) : B1(B1), B2(B2) {}

    // Getters e Setters
    int getB1() {
        return B1;
    }

    void setB1(int B1) {
        this->B1 = B1;
    }

    float getB2() {
        return B2;
    }
cd 
    void setB2(float B2) {
        this->B2 = B2;
    }

    // Métodos MB1 e MB2
    void MB1() {
        cout << "Método MB1" << endl;
    }

    void MB2() {
        cout << "Método MB2" << endl;
    }
};

int main() {
    // Exemplo de uso das classes A e B
    A objetoA(10, 3.14);
    B objetoB(20, 6.28);

    // Chamada dos métodos
    objetoA.MA1();
    objetoA.MA2();
    objetoB.MB1();
    objetoB.MB2();

    return 0;
}

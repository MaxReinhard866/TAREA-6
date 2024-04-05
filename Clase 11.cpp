#include <iostream>
using namespace std;

struct Punto {
    float x;
    float y;
};

int main() {
    Punto punto1;
    punto1.x = 3.5;
    punto1.y = 2.7;

    cout << "Coordenadas del punto 1:" << endl;
    cout << "x = " << punto1.x << ", y = " << punto1.y << endl;

    Punto punto2;
    punto2.x = -1.8;
    punto2.y = 5.9;

    cout << "\nCoordenadas del punto 2:" << endl;
    cout << "x = " << punto2.x << ", y = " << punto2.y << endl;

    return 0;
}


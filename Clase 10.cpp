#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    float altura;
};

void imprimirPersona(Persona p) {
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Altura: " << p.altura << endl;
}

int main() {
    Persona persona1;
    persona1.nombre = "Juan";
    persona1.edad = 30;
    persona1.altura = 1.75;

    Persona persona2;
    persona2.nombre = "Maria";
    persona2.edad = 25;
    persona2.altura = 1.65;

    cout << "Datos de la persona 1:" << endl;
    imprimirPersona(persona1);

    cout << "\nDatos de la persona 2:" << endl;
    imprimirPersona(persona2);

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

void saludar() {
    cout << "Hola Mundo" << endl;
}
class Persona{
    public:
    string nombre;
    int edad;
    void mostrar(){
        cout << "Nombre: " << nombre <<", Edad: " << edad << endl;
    }
};
int ProbarPersona(){
    Persona p;
    p.nombre = "Ana";
    p.edad = 20;
    p.mostrar();
    return 0;
}

int main() {
    int a, b;

    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    cout << "La suma es: " << a + b << endl;

    saludar();
    ProbarPersona();

    return 0;
}



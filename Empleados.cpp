#include <iostream>
#include <string>

using namespace std;

class Empleado {
private:
    string nombre;
    double salario;

public:
    // Constructor
    Empleado(string nombre, double salario) {
        this->nombre = nombre;
        this->salario = salario;
    }

    // Método para obtener el nombre del empleado
    string getNombre() const {
        return nombre;
    }

    // Método para obtener el salario del empleado
    double getSalario() const {
        return salario;
    }

    // Método para establecer el salario del empleado
    void setSalario(double salario) {
        this->salario = salario;
    }

    // Método para mostrar la información del empleado
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Salario: $" << salario << endl;
    }
};

int main() {
    Empleado empleado1("Juan", 3000.0);
    Empleado empleado2("Maria", 3500.0);

    cout << "Información del empleado 1:" << endl;
    empleado1.mostrarInformacion();

    cout << "\nInformación del empleado 2:" << endl;
    empleado2.mostrarInformacion();

    return 0;
}

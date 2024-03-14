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

    // M�todo para obtener el nombre del empleado
    string getNombre() const {
        return nombre;
    }

    // M�todo para obtener el salario del empleado
    double getSalario() const {
        return salario;
    }

    // M�todo para establecer el salario del empleado
    void setSalario(double salario) {
        this->salario = salario;
    }

    // M�todo para mostrar la informaci�n del empleado
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Salario: $" << salario << endl;
    }
};

int main() {
    Empleado empleado1("Juan", 3000.0);
    Empleado empleado2("Maria", 3500.0);

    cout << "Informaci�n del empleado 1:" << endl;
    empleado1.mostrarInformacion();

    cout << "\nInformaci�n del empleado 2:" << endl;
    empleado2.mostrarInformacion();

    return 0;
}

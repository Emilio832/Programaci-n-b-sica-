#include <iostream> 
using namespace std;

int main() { // Ejercicio 1 int a, b, c; cout << "Ingresa tres valores enteros: "; cin >> a >> b >> c; int multiplicacion = a * b * c; cout << "El resultado de la multiplicación de los tres valores es: " << multiplicacion << endl;

// Ejercicio 2
double x, y;
cout << "\nIngresa dos valores reales (diferentes de 0): ";
cin >> x >> y;

// Validación para evitar división entre 0
if (y != 0) {
    double division = x / y;
    cout << "El resultado de dividir el primer valor entre el segundo es: " << division << endl;
} else {
    cout << "El segundo valor no puede ser 0." << endl;
}

// Cálculo del área de un círculo con diámetro de 10 metros
const double PI = 3.1416;
double radio = 10.0 / 2; // El radio es la mitad del diámetro
double area = PI * radio * radio;
cout << "\nEl área del círculo con diámetro de 10 metros es: " << area << " metros cuadrados." << endl;

return 0;

}


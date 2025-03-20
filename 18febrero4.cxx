#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Fecha de nacimiento
    int dia = 9, mes = 4, anio = 2006;

    // Obtener la fecha y hora actual
    time_t ahora = time(0);
    tm *fecha_actual = localtime(&ahora);

    // Crear la estructura tm para la fecha de nacimiento
    tm fecha_nacimiento = {};
    fecha_nacimiento.tm_mday = dia;
    fecha_nacimiento.tm_mon = mes - 1;  // tm_mon cuenta los meses desde 0
    fecha_nacimiento.tm_year = anio - 1900; // tm_year cuenta los años desde 1900
    fecha_nacimiento.tm_hour = 15; // 3 PM
    fecha_nacimiento.tm_min = 0;
    fecha_nacimiento.tm_sec = 0;

    // Convertir las fechas a time_t
    time_t t_nacimiento = mktime(&fecha_nacimiento);

    if (t_nacimiento == -1) {
        cerr << "Error: Fecha de nacimiento no válida." << endl;
        return 1;
    }

    // Calcular la diferencia en segundos
    double segundos_vividos = difftime(ahora, t_nacimiento);

    // Mostrar el resultado
    cout << "Has vivido aproximadamente " << segundos_vividos << " segundos." << endl;

    return 0;
}

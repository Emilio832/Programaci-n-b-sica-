#include <iostream>

int main() {
    int var = 1;  // Se inicializa var con un valor
    int con = 1;  // Se inicializa con con 1

    // Imprime var y luego lo incrementa
    std::cout << "Valor actual de var: " << var << std::endl;
    std::cout << "Valor de var después de var++: " << var++ << std::endl;
    std::cout << "Nuevo valor de var: " << var << std::endl;

    // Imprime con y luego lo decrementa
    std::cout << "Valor actual de con: " << con << std::endl;
    std::cout << "Valor de con después de con--: " << con-- << std::endl;
    std::cout << "Nuevo valor de con: " << con << std::endl;

    system("pause");
    return 0;

}
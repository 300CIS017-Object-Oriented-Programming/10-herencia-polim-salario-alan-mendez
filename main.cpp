#include "SistemaNomina.h"
#include <iostream>

int main() {
    SistemaNomina sistema;
    sistema.inicializarDatos();

    std::cout << "Procesando nómina:" << std::endl;
    sistema.procesarNomina();

    std::cout << "\nTotal a pagar: $" << sistema.calcularTotalPagos() << std::endl;

    return 0;
}// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
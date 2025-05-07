#include "SistemaNomina.h"
#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"
#include <iostream>

SistemaNomina::~SistemaNomina() {
    for (auto empleado : empleados) {
        delete empleado;
    }
}

void SistemaNomina::agregarEmpleado(Empleado* empleado) {
    empleados.push_back(empleado);
}

void SistemaNomina::procesarNomina() const {
    for (const auto empleado : empleados) {
        std::cout << empleado->getNombre() << ": $"
                  << empleado->calcularSalario() << std::endl;
    }
}

double SistemaNomina::calcularTotalPagos() const {
    double total = 0.0;
    for (const auto empleado : empleados) {
        total += empleado->calcularSalario();
    }
    return total;
}

void SistemaNomina::inicializarDatos() {
    // Limpiar empleados existentes
    for (auto empleado : empleados) {
        delete empleado;
    }
    empleados.clear();

    // Crear empleados de cada tipo (al menos 2 por tipo)
    agregarEmpleado(new DesarrolladorJunior("Juan Perez", 2000));
    agregarEmpleado(new DesarrolladorJunior("Maria Gomez", 2200));

    agregarEmpleado(new DesarrolladorSenior("Carlos Ruiz", 3500));
    agregarEmpleado(new DesarrolladorSenior("Ana Lopez", 3800));

    agregarEmpleado(new LiderTecnico("Pedro Martinez", 5000));
    agregarEmpleado(new LiderTecnico("Laura Diaz", 5200));

    agregarEmpleado(new Tester("Sofia Castro", 2500));
    agregarEmpleado(new Tester("Diego Torres", 2700));
}
    agregarEmpleado(new Tester("Diego Torres", 2700));
}
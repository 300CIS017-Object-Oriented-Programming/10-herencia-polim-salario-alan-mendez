//
// Created by alfonso vega villadiego on 6/05/25.
//

#include "Empleado.h"

Empleado::Empleado(const std::string& nombre, double salarioBase)
    : nombre(nombre), salarioBase(salarioBase) {}

std::string Empleado::getNombre() const {
    return nombre;
}

double Empleado::getSalarioBase() const {
    return salarioBase;
}

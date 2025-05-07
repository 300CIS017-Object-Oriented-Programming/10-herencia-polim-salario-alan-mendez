//
// Created by alfonso vega villadiego on 6/05/25.
//

#include "Tester.h"

Tester::Tester(const std::string& nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {}

double Tester::calcularSalario() const {
    return getSalarioBase() * 1.05; // 5% de bono
}

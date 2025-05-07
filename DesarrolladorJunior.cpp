//
// Created by alfonso vega villadiego on 6/05/25.
//

#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior(const std::string& nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {}

double DesarrolladorSenior::calcularSalario() const {
    return getSalarioBase() * 1.20; // 20% de bono
}
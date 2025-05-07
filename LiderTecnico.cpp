//
// Created by alfonso vega villadiego on 6/05/25.
//
#include "LiderTecnico.h"

LiderTecnico::LiderTecnico(const std::string& nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {}

double LiderTecnico::calcularSalario() const {
    return getSalarioBase() * 1.25; // 25% de bono
}

//
// Created by alfonso vega villadiego on 6/05/25.
//

#ifndef DESARROLLADOR_SENIOR_H
#define DESARROLLADOR_SENIOR_H

#include "Empleado.h"

class DesarrolladorSenior : public Empleado {
public:
    DesarrolladorSenior(const std::string& nombre, double salarioBase);
    double calcularSalario() const override;
};

#endif // DESARROLLADOR_SENIOR_H
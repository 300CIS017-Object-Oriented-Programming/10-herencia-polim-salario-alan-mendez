//
// Created by alfonso vega villadiego on 6/05/25.
//

#ifndef TESTER_H
#define TESTER_H

#include "Empleado.h"

class Tester : public Empleado {
public:
    Tester(const std::string& nombre, double salarioBase);
    double calcularSalario() const override;
};

#endif // TESTER_H

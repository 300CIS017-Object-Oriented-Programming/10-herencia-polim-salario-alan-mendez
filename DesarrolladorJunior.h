//
// Created by alfonso vega villadiego on 6/05/25.
//

#ifndef DESARROLLADOR_JUNIOR_H
#define DESARROLLADOR_JUNIOR_H

#include "Empleado.h"

class DesarrolladorJunior : public Empleado {
public:
    DesarrolladorJunior(const std::string& nombre, double salarioBase);
    double calcularSalario() const override;
};

#endif // DESARROLLADOR_JUNIOR_H
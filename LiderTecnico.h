//
// Created by alfonso vega villadiego on 6/05/25.
//

#ifndef LIDER_TECNICO_H
#define LIDER_TECNICO_H

#include "Empleado.h"

class LiderTecnico : public Empleado {
public:
    LiderTecnico(const std::string& nombre, double salarioBase);
    double calcularSalario() const override;
};

#endif // LIDER_TECNICO_H
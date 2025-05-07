//
// Created by alfonso vega villadiego on 6/05/25.
//

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
protected:
    std::string nombre;
    double salarioBase;

public:
    Empleado(const std::string& nombre, double salarioBase);
    virtual ~Empleado() = default;

    virtual double calcularSalario() const = 0; // Método abstracto

    std::string getNombre() const;
    double getSalarioBase() const;
};

#endif // EMPLEADO_H
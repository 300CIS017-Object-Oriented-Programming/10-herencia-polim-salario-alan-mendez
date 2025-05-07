//
// Created by alfonso vega villadiego on 6/05/25.
//

#ifndef SISTEMA_NOMINA_H
#define SISTEMA_NOMINA_H

#include <vector>
#include "Empleado.h"

class SistemaNomina {
private:
    std::vector<Empleado*> empleados;

public:
    ~SistemaNomina();
    void agregarEmpleado(Empleado* empleado);
    void procesarNomina() const;
    double calcularTotalPagos() const;
    void inicializarDatos();
};

#endif // SISTEMA_NOMINA_H
#include "pacientes.h"

Paciente::Paciente(string dni, string nombre, string apellidos, string fechanacimiento, string direccionpostal, 
int telefono, string seguromutua){

    dni_ = dni;
    nombre_ = nombre;
    apellidos_ = apellidos;
    fechanacimiento_ = fechanacimiento;
    direccionpostal_ = direccionpostal;
    telefono_ = telefono;
    seguromutua_ = seguromutua;
}
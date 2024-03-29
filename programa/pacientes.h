#ifndef PACIENTES_H
#define PACIENTES_H

#include <string>
#include <list>
#include "tratamientos.h"
#include "citas.h"
#include <locale.h>
#include "historial.h"

/*
Recoge la clase paciente con todas sus funciones propias como el 
constructor y las bulgarmente llamadas funciones get y set.
*/

using namespace std;

class Paciente{

    private:

        string dni_;
        string nombre_;
        string apellidos_;
        string fechanacimiento_;
        string direccionpostal_;
        unsigned long int telefono_;
        string seguromutua_;

        list <Tratamiento> tratamientos_;
        list <Cita> citas_;
        list <Historial> historial_;

    public:

    //CONSTRUCTOR
    Paciente(string dni, string nombre, string apellidos, string fechanacimiento = "XX/XX/XXXX", string direccionpostal = "",
    unsigned long int telefono = 0, string seguromutua = "");   

    //OBSERVADORES
    inline string getDNI(){return dni_;};
    inline string getNombre(){return nombre_;};
    inline string getApellidos(){return apellidos_;};
    inline string getFechaNacimiento(){return fechanacimiento_;};
    inline string getDireccionPostal(){return direccionpostal_;};
    inline unsigned long int getTelefono(){return telefono_;};
    inline string getSeguroMutua(){return seguromutua_;};
    inline list <Tratamiento> & getTratamientos(){return tratamientos_;};
    inline list <Cita> & getCitas(){return citas_;};
    inline list <Historial> & getHistorial(){return historial_;}

    //MODIFICADORES
    inline void setDNI(string dni){dni_ = dni;}; 
    inline void setNombre(string nombre){nombre_ = nombre;};
    inline void setApellidos(string apellidos){apellidos_ = apellidos;};
    inline void setFechaNacimiento(string day, string month, string year){fechanacimiento_ = day+"/"+month+"/"+year;};
    inline void setFechaNacimiento(string fechanacimiento){fechanacimiento_ = fechanacimiento;};
    inline void setDireccionPostal(string direccionpostal){direccionpostal_ = direccionpostal;};
    inline void setTelefono(unsigned long int telefono){telefono_ = telefono;};
    inline void setSeguroMutua(string seguromutua){seguromutua_ = seguromutua;};    
    inline void setTratamientos(Tratamiento tratamiento){tratamientos_.push_front(tratamiento);};
    inline void setTratamientosAtras(Tratamiento tratamiento){tratamientos_.push_back(tratamiento);};
    inline void setCitas(Cita cita){citas_.push_back(cita);};
    inline void setHistorial(Historial historial){historial_.push_front(historial);};
};

#endif
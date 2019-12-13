#include "menus.h"
#include <iostream>

using namespace std;

//constructor clase menu
Menu::Menu(){}

Menu::~Menu(){}

//menu principal
int Menu::menuPrincipal(){

    int opcion;

    cout << "\nIntroduzca una de las siguientes opciones para que sea ejecutada en el programa:\n";
    cout << "················································································\n";
    cout << "[1] -> Agregar un paciente a la base de datos.\n";
    cout << "[2] -> Buscar paciente por nombre y apellidos.\n";
    cout << "[3] -> Modificar paciente por dni.\n";
    cout << "[4] -> Mostrar todos los pacientes de la base de datos.\n";
    cout << "[5] -> Borrar paciente por dni.\n";
    cout << "\n";

    cout << "[-1] -> SALIR.\n";
    cout << "\n";
    cout << "Su opcion: ";
    cin >> opcion;
    cout << endl;
    getchar();

    return opcion;
}

int Menu::submenuModificar(){

    int opcion;

    cout << "\nIntroduzca la variable a modificar:\n";
    cout << "···································\n";
    cout << "[1] -> Modificar nombre.\n";
    cout << "[2] -> Modificar apellidos.\n";
    cout << "[3] -> Modificar fecha de nacimiento.\n";
    cout << "[4] -> Modificar direccion postal.\n";
    cout << "[5] -> Modificar numero de telefono.\n";
    cout << "[6] -> Modificar seguro.\n";
    cout << "\n";

    cout << "[-1] -> SALIR.\n";
    cout << "\n";
    cout << "Su opcion: ";
    cin >> opcion;
    cout << endl;
    getchar();

    return opcion;
}
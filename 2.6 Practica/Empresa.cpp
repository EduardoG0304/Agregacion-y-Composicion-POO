#include "Empresa.h"
#include <iostream>


Empresa::Empresa(string n,int ne) {
    nombre = n;
    numEmp = ne;
   
    
    for (int i = 0;i < 2;i++) {

        this->cliente[i] =Cliente();
    }

    for (int i = 0;i < 2;i++) {
        this->empleados[i] = Empleado();
    }

}

Empresa::~Empresa() {
    
}

void Empresa::setNombre(string n) {
    nombre = n;
}

string Empresa::getNombre() {
    return nombre;
}

void Empresa::setCliente(Cliente c[]) {
    
    for (int i = 0;i < 2;i++) {

        this->cliente[i] = c[i];
    }
}

void Empresa::setEmpleado(Empleado e[]) {
    
    for (int i = 0;i < 2;i++) {
        this->empleados[i] = e[i];
    }
}

Cliente* Empresa:: getCliente() {

    return this->cliente;
}

Empleado* Empresa::getEmpleado() {

    return this->empleados;
}
void Empresa::setNumEmp(int ne) {
    
    numEmp = ne;

}
int Empresa::getNumEmp() {
    return numEmp;
}

void Empresa::agrEmpleado(Empleado e) {

    Empleado* aux = getEmpleado();
    for (int i = 0; i < 2; i++)
    {
        if (aux->getNumero() == 0)
        {
            *aux = e;
            break;
        }
        aux++;

    }
}

void Empresa::agrCliente(Cliente c) {

    Cliente* aux = getCliente();
    for (int i = 0; i < 2; i++)
    {
        if (aux->getNum() == 0)
        {
            *aux = c;
            break;
        }
        aux++;

    }

}

int Empresa::totalClient() {
    int c = 0;
    Cliente* a = getCliente();
    for (int i = 0; i < 2; i++)
    {
        if (a->getNum() != 0)
        {
            c++;
        }
        a++;
    }
    return c;
}

int Empresa::totalEmple() {
    int c = 0;
    Empleado* a = getEmpleado();
    for (int i = 0; i < 2; i++)
    {
        if (a->getSueldo() != 0)
        {
            c++;
        }
        a++;
    }
    return c;
}

double Empresa::sumaSueldos() {
    double suma = 0.0;
    for (int i = 0; i < 2; i++) {
        suma += empleados[i].getSueldo();
    }
    return suma;
}

void Empresa::mostrarDatos() {

    cout << "Nombre Empresa: " << nombre << endl
        << "Numero de Empresa: " << numEmp << endl
        <<endl
        << "Total de Empleados: " << totalEmple() << endl
        << "Total de Clientes: " << totalClient() << endl;

    cout << endl;
    
    for (int i = 0;i < 2;i++) {

        cout << "Cliente " << i + 1 << ":" << cliente[i].getNombre() << endl;
}

    cout << endl;

    for (int i = 0;i < 2;i++) {

        cout << "Empleado " << i + 1 << ":" << empleados[i].getNombre() << endl
            << "Sueldo: " << empleados[i].getSueldo() << endl;

        cout << endl;


    }

    cout << endl;

    cout << "Total Sueldos: " << sumaSueldos();

    cout << endl;
    
    
}
#include "Empleado.h"

Empleado::Empleado() {

	setNombre("");
	setNumero(0);
	setSueldo(0.00);

}

Empleado::Empleado(int nu, string n, double s) {

	numEmpl = nu;
	nombreEmpl = n;
	sueldo = s;

}

void Empleado::setNombre(string n) {

	this->nombreEmpl = n;

}

string Empleado::getNombre() {

	return this->nombreEmpl;
}

void Empleado::setNumero(int nu) {

	this->numEmpl = nu;

}

int Empleado::getNumero() {

	return this->numEmpl;

}

void Empleado::setSueldo(double s) {

	this->sueldo = s;

}

double Empleado::getSueldo() {

	return this->sueldo;

}

void Empleado::mostrarDatosE() {

	cout << "Numero de Empleado:  " << numEmpl << endl
		<< "Nombre Empleado:  " << nombreEmpl << endl
		<< "Sueldo:  " << sueldo << endl;

}

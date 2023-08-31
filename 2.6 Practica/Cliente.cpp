#include "Cliente.h"

Cliente::Cliente() {

	setNombre("");
	setNum(0);

}

Cliente::Cliente(int nc, string n) {

	numCliente = nc;
	nombreC = n;
}

void Cliente::setNum(int nc) {

	numCliente = nc;

}

int Cliente::getNum() {

	return numCliente;
}

void Cliente::setNombre(string n) {

	nombreC = n;
}

string Cliente::getNombre() {

	return nombreC;
}

void Cliente::mostrarDatosC() {

	cout << "Numero Cliente: " << numCliente << endl
		<< "Nombre Cliente: " << nombreC << endl;

}
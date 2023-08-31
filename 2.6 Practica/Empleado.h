#include<iostream>
using namespace std;

class Empleado
{
public:

	Empleado(void);
	Empleado(int, string, double);
	void setNombre(string n);
	string getNombre();
	void setNumero(int nu);
	int getNumero();
	void setSueldo(double s);
	double getSueldo();
	void mostrarDatosE();

private:

	int numEmpl;
	string nombreEmpl;
	double sueldo;
};


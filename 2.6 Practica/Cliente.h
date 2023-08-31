#include<iostream>
using namespace std;

class Cliente {
private:
	int numCliente;
	string nombreC;

public:

	Cliente(void);
	Cliente(int, string);
	void setNum(int);
	int getNum();
	void setNombre(string);
	string getNombre();
	void mostrarDatosC();

};
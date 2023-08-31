#include"Empresa.h"


int main() {

	Empleado em(1, "Roberto", 2550.45);
	Empleado em2(2, "Juan", 2332.40);
	Cliente cl(1, "Ana");
	Cliente cl2(2, "Armando");

	Empresa empre("Intel",1);
	empre.agrEmpleado(em);
	empre.agrEmpleado(em2);
	empre.agrCliente(cl);
	empre.agrCliente(cl2);
	empre.totalEmple();
	empre.totalClient();
	empre.sumaSueldos();
	empre.mostrarDatos();
	







}
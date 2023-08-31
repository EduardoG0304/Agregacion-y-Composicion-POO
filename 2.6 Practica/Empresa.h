#include "Cliente.h"
#include "Empleado.h"

class Empresa {
private:
    string nombre;
    int numEmp;
    Cliente cliente[2];
    Empleado empleados[2];
    
public:
 
    Empresa(string n, int ne);
    ~Empresa();
    void setNombre(string n);
    string getNombre();
    void setCliente(Cliente[]);
    void setEmpleado(Empleado[]);
    Cliente* getCliente(void);
    Empleado* getEmpleado(void);
    void setNumEmp(int);
    int getNumEmp();
    void agrEmpleado(Empleado);
    void agrCliente(Cliente);
    int totalClient();
    int totalEmple();

    double sumaSueldos(void);
    void mostrarDatos();
};



#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <sstream>

using namespace std;

class Cliente {
public:
	Cliente();
	Cliente(string nombre_Cliente, //Nombre del cliente
	string id_Cliente,                //Identificación del cliente
	string metodoPago_Cliente,     //Método de pago del cliente D debito C credito
	string telefono_Cliente,          //Teléfono de contacto del cliente
	string numCuenta_Cliente,         //Número de cuenta del cliente
	int cantAdultos_Cliente,       //Cantidad de adultos a ingresar
	int cantNinios_Cliente,        //Cantidad de ninios a ingresar
	string estadoSocio_Cliente,       //Estado de socio al hotel del cliente//1 si es socio y 2 si no es, también podríá ser bool
	string tarjeta_Cliente,        //Si el cliente cuenta o no con beneficios de tarjeta
	string convenio_Cliente);      ///?? suena igual que la anterior
	~Cliente();
	
	//sets
	void setNombre_Cliente(string nombre_Cliente);
	void setID_Cliente(string id_Cliente);
	void setMetodoPago_Cliente(string metodoPago_Cliente);
	void setTelefono_Cliente(string telefono_Cliente);
	void setNumCuenta_Cliente(string numCuenta_Cliente);
	void setCantAdultos_Cliente(int cantAdultos_Cliente);
	void setCantNinios_Cliente(int cantNinios_Cliente);
	void setEstadoSocio_Cliente(string estadoSocio_Cliente);
	void setTarjeta_Cliente(string tarjeta_Cliente);
	void setConvenio_Cliente(string convenio_Cliente);
	//gets
	string getNombre_Cliente();
	string getID_Cliente();
	string getMetodoPago_Cliente();
	string getTelefono_Cliente();
	string getNumCuenta_Cliente();
	int getCantAdultos_Cliente();
	int getCantNinios_Cliente();
	string getEstadoSocio_Cliente();
	string getTarjeta_Cliente();
	string getConvenio_Cliente();
	
	string toString_Cliente();
	
private:
	string nombre_Cliente;
	string id_Cliente;
	string metodoPago_Cliente;
	string telefono_Cliente;
	string numCuenta_Cliente;
	int cantAdultos_Cliente;
	int cantNinios_Cliente;
	string estadoSocio_Cliente;
	string tarjeta_Cliente;
	string convenio_Cliente;
	//métodos
	//string buscar_id(string& por_id);
};

#endif


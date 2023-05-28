#include "Cliente.h"

Cliente::Cliente() {
	nombre_Cliente = "Empty"; //string
	id_Cliente = "Empty"; //string
	metodoPago_Cliente = " "; //char
	telefono_Cliente = "Empty"; //string
	numCuenta_Cliente = "Empty"; //string
	cantAdultos_Cliente = 0; //int
	cantNinios_Cliente = 0; //int
	estadoSocio_Cliente = "Empty"; //string
	tarjeta_Cliente = "Empty"; //string
	convenio_Cliente = "Empty"; //string
}
Cliente::Cliente(
	string nombre_Cliente,
	string id_Cliente,
	string metodoPago_Cliente,
	string telefono_Cliente,
	string numCuenta_Cliente,
	int cantAdultos_Cliente,
	int cantNinios_Cliente,
	string estadoSocio_Cliente,
	string tarjeta_Cliente,
	string convenio_Cliente){
	
	this -> nombre_Cliente = nombre_Cliente;
	this -> id_Cliente = id_Cliente;
	this -> metodoPago_Cliente = metodoPago_Cliente;
	this -> telefono_Cliente = telefono_Cliente;
	this -> numCuenta_Cliente = numCuenta_Cliente;
	this -> cantAdultos_Cliente = cantAdultos_Cliente;
	this -> cantNinios_Cliente = cantNinios_Cliente;
	this -> estadoSocio_Cliente = estadoSocio_Cliente;
	this -> tarjeta_Cliente = tarjeta_Cliente;
	this -> convenio_Cliente = convenio_Cliente;
	
}
Cliente::~Cliente() {
	
}
//sets
void Cliente::setNombre_Cliente(string nombre_Cliente){
	this -> nombre_Cliente = nombre_Cliente;
}
void Cliente::setID_Cliente(string id_Cliente){
	this -> id_Cliente = id_Cliente;
}
void Cliente::setMetodoPago_Cliente(string metodoPago_Cliente){
	this -> metodoPago_Cliente = metodoPago_Cliente;
}
void Cliente::setTelefono_Cliente(string telefono_Cliente){
	this -> telefono_Cliente = telefono_Cliente;
}
void Cliente::setNumCuenta_Cliente(string numCuenta_Cliente){
	this -> numCuenta_Cliente = numCuenta_Cliente;
}
void Cliente::setCantAdultos_Cliente(int cantAdultos_Cliente){
	this -> cantAdultos_Cliente = cantAdultos_Cliente;
}
void Cliente::setCantNinios_Cliente(int cantNinios_Cliente){
	this -> cantNinios_Cliente = cantNinios_Cliente;
}
void Cliente::setEstadoSocio_Cliente(string estadoSocio_Cliente){
	this -> estadoSocio_Cliente = estadoSocio_Cliente;
}
void Cliente::setTarjeta_Cliente(string tarjeta_Cliente){
	this -> tarjeta_Cliente = tarjeta_Cliente;
}
void Cliente::setConvenio_Cliente(string convenio_Cliente){
	this -> convenio_Cliente = convenio_Cliente;
}
//gets
string Cliente::getNombre_Cliente(){
	return nombre_Cliente;
}
string Cliente::getID_Cliente(){
	return id_Cliente;
}
string Cliente::getMetodoPago_Cliente(){
	return metodoPago_Cliente;
}
string Cliente::getTelefono_Cliente(){
	return telefono_Cliente;
}
string Cliente::getNumCuenta_Cliente(){
	return numCuenta_Cliente;
}
int Cliente::getCantAdultos_Cliente(){
	return cantAdultos_Cliente;
}
int Cliente::getCantNinios_Cliente(){
	return cantNinios_Cliente;
}
string Cliente::getEstadoSocio_Cliente(){
	return estadoSocio_Cliente;
}
string Cliente::getTarjeta_Cliente(){
	return tarjeta_Cliente;
}
string Cliente::getConvenio_Cliente(){
	return convenio_Cliente;
}

//string Cliente::buscar_id(string& por_id){
//	por_id = por_id;
//	return por_id;
//}

string Cliente::toString_Cliente(){
	stringstream DataCliente;
	DataCliente << "Nombre: " << nombre_Cliente <<endl;
	DataCliente << "Numero ID: " << id_Cliente <<endl;
	DataCliente << "Metodo de pago 1 tarjeta, 2 efectivo: " << metodoPago_Cliente <<endl;
	DataCliente << "Numero de cuenta: " << numCuenta_Cliente <<endl;
	DataCliente << "Telefono: " << telefono_Cliente <<endl;
	DataCliente << "C. Adultos: " << cantAdultos_Cliente <<endl;
	DataCliente << "C. Ninios: " << cantNinios_Cliente <<endl;
	DataCliente << "Socio: " << estadoSocio_Cliente <<endl;
	DataCliente << "Beneficios: " << tarjeta_Cliente <<endl;
	DataCliente << "Convenio: " << convenio_Cliente <<endl;
	
	return DataCliente.str();
}

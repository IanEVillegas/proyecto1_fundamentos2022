#include "Habitacion.h"

Habitacion::Habitacion() {
	numero_Room = 0; //int
	estado_Room = 'L'; //char       
	precio_Room = 200.0; //double     
	tipo_Room = 0; //int        
	categoria_Room = " "; //string    
	cantNoches_Room = 0; //int      
	servicio_Room = " "; //string      
	personasMax_Room = 0; //int
}
Habitacion::Habitacion(
	int numero_Room,
	char estado_Room,        
	double precio_Room,        
	int tipo_Room,         
	string categoria_Room,     
	int cantNoches_Room,       
	string servicio_Room,       
	int personasMax_Room){ 
	
	this -> numero_Room = numero_Room;
	this -> estado_Room = estado_Room;
	this -> precio_Room = precio_Room;
	this -> tipo_Room = tipo_Room;
	this -> categoria_Room = categoria_Room;
	this -> cantNoches_Room = cantNoches_Room;
	this -> servicio_Room = servicio_Room;
	this -> personasMax_Room = personasMax_Room;
}

Habitacion::~Habitacion() {
	
}
//sets
void Habitacion::setNumero_Room(int numero_Room){
	this -> numero_Room = numero_Room;
}
void Habitacion::setEstado_Room(char estado_Room){
	this -> estado_Room = estado_Room;
}
void Habitacion::setPrecio_Room(double precio_Room){
	this -> precio_Room = precio_Room;
}
void Habitacion::setTipo_Room(int tipo_Room){
	this -> tipo_Room = tipo_Room;
}
void Habitacion::setCategoria_Room(string categoria_Room){
	this -> categoria_Room = categoria_Room;
}
void Habitacion::setCantNoches_Room(int cantNoches_Room){
	this -> cantNoches_Room = cantNoches_Room;
}
void Habitacion::setServicio_Room(string servicio_Room){
	this -> servicio_Room = servicio_Room;
}
void Habitacion::setPersonasMax_Room(int personasMax_Room){
	this -> personasMax_Room = personasMax_Room;
}
//gets
int Habitacion::getNumero_Room(){//
	return numero_Room;
}
char Habitacion::getEstado_Room(){//
	return estado_Room;
}
double Habitacion::getPrecio_Room(){
	return precio_Room;
}
int Habitacion::getTipo_Room(){
	return tipo_Room;
}
string Habitacion::getCategoria_Room(){
	return categoria_Room;
}
int Habitacion::getCantNoches_Room(){
	return cantNoches_Room;
}
string Habitacion::getServicio_Room(){
	return servicio_Room;
}
int Habitacion::getPersonasMax_Room(){
	return personasMax_Room;
}

string Habitacion::toString_Room(){
	stringstream DataHabitacion;
	DataHabitacion << "Numero de habitacion: " << numero_Room <<endl;
	DataHabitacion << "Estado de la habitacion: " << estado_Room <<endl;
	DataHabitacion << "Precio: " << precio_Room <<endl;
	DataHabitacion << "Tipo, 1 Individual, 2 doble, 4 para mas: " << tipo_Room <<endl;
	DataHabitacion << "Suit normal o grande: " << categoria_Room <<endl;
	DataHabitacion << "Cantidad de noches: " << cantNoches_Room <<endl;
	DataHabitacion << "Servicio estandar o todo: " << servicio_Room <<endl;
	DataHabitacion << "Personas maximas: " << personasMax_Room <<endl;
	
	return DataHabitacion.str();
}

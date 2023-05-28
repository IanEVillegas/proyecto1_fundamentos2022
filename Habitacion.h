#ifndef HABITACION_H
#define HABITACION_H
#include <iostream>
#include <sstream>

using namespace std;
class Habitacion {
public:
	Habitacion();
	Habitacion(int numero_Room, //numero de habitaci�n
	char estado_Room,           //estado de habitaci�n "ocupado, libre, mantenimiento"
	double precio_Room,          //precio de la habitaci�n
	int tipo_Room,              //tipo de camas "individual, dobles..."
	string categoria_Room,      //categor�a de la habitaci�n "suite normal o suit grande"
	int cantNoches_Room,        //cantidad de noches a reservar
	string servicio_Room,       //clase de servicio "est�ndar o todo incluido"
	int personasMax_Room);      //m�ximo de personas por habitaci�n
	~Habitacion();
	
	//sets
	void setNumero_Room(int numero_Room);
	void setEstado_Room(char estado_Room);
	void setPrecio_Room(double precio_Room);
	void setTipo_Room(int tipo_Room);
	void setCategoria_Room(string categoria_Room);
	void setCantNoches_Room(int cantNoches_Room);
	void setServicio_Room(string servicio_Room);
	void setPersonasMax_Room(int personasMax_Room);
	//gets
	int getNumero_Room();
	char getEstado_Room();
	double getPrecio_Room();
	int getTipo_Room();
	string getCategoria_Room();
	int getCantNoches_Room();
	string getServicio_Room();
	int getPersonasMax_Room();
	
	string toString_Room();
	
private:
	int numero_Room;
	char estado_Room;        
	double precio_Room;        
	int tipo_Room;         
	string categoria_Room;     
	int cantNoches_Room;       
	string servicio_Room;       
	int personasMax_Room; 
};

#endif


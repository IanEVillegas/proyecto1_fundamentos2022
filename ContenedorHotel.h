#ifndef CONTENEDORHOTEL_H
#define CONTENEDORHOTEL_H

#include <iostream>
#include <sstream>

#include "Cliente.h"
#include "Habitacion.h"
	
using namespace std;
class ContenedorHotel {
public:
	ContenedorHotel();
	ContenedorHotel(string nombre_Hotel,
	int estrellas_Hotel,
	string telefono_Hotel,
	string direccion_Hotel,
	string correo_Hotel,
	string pagina_Hotel,
	string redes_Hotel,
	string temporada_Baja,
	string temporada_Alta);
	~ContenedorHotel();
	
	void setNombre_Hotel(string nombre_Hotel);
	void setEstrellas_Hotel(int estrellas_Hotel);
	void setTelefono_Hotel(string telefono_Hotel);
	void setDireccion_Hotel(string direccion_Hotel);
	void setCorreo_Hotel(string correo_Hotel);
	void setPagina_Hotel(string pagina_Hotel);
	void setRedes_Hotel(string redes_Hotel);
	void setTemporada_Baja(string temporada_Baja);
	void setTemporada_Alta(string temporada_Alta);
	
	
	string getNombre_Hotel();
	int getEstrellas_Hotel();
	string getTelefono_Hotel();
	string getDireccion_Hotel();
	string getCorreo_Hotel();
	string getPagina_Hotel();
	string getRedes_Hotel();
	string getTemporada_Baja();
	string getTemporada_Alta();
	
	void registroAuto_cliente();
	void mat_habitacion();
	void disponibilidad_habitacion(int& L, int& O, int& M);
	int adultos_hotel();
	void cliente_ID(string id);
	void habitacion_num(int num);
	void liberar_habitacion(string liberar);
	void checkin_habitacion(int ocupar);
	void ingresos_hotel();

	void sub_tipo_habitacion(int& dos, int& cuatro);
	void sub_categoria(int& normal, int& lujo);
	void sub_servicio(int& estandar, int& todo);
	void sub_todo_ingreso(int& todo1, int& todo2, int& todo3, int& todo4, int& todo5, int& todo6);
	
	string toString_Hotel();
	
private:
	string nombre_Hotel;
	int estrellas_Hotel;
	string telefono_Hotel;
	string direccion_Hotel;
	string correo_Hotel;
	string pagina_Hotel;
	string redes_Hotel;
	string temporada_Baja;
	string temporada_Alta;
	
	Cliente matriz_cliente[10][10];
	Habitacion matriz_habitacion[10][10];
};

#endif

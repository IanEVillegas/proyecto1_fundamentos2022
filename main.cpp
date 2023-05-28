#include <iostream>
#include "ContenedorHotel.h"
#include "Habitacion.h"
#include "Cliente.h"

using namespace std;
/*
COLORES
printf ("\033[5;1;36m");
printf ("\033[0m\n");
*/
int main () {
	
	int opc = 0;
	ContenedorHotel datos_H;
	Habitacion datos_R;
	Cliente datos_C;
	
	do{
		system("cls");
		cout<<"\033[31m";
		cout<< "  Para un mejor servicio,"<<endl; 
		cout<< "digite primero la opcion 2.\n" <<endl;
		cout<<"\033[0m\n";
		cout<< "\033[5;1;36m"; cout<< "\t Welcome to "; cout<< "\033[0m\n";
		cout<< "\033[5;36m"; cout<< "\tIan's Hotel" <<endl; cout<< "\033[0m\n";
		
		cout<< "1- Informacion del hotel." <<endl;//
		cout<< "2- Registro automatico." <<endl;//
		cout<< "3- Registro de habitaciones." <<endl;//
		cout<< "4- Estado de disponibilidad de habitaciones." <<endl;//
		cout<< "5- Check in." <<endl;
		cout<< "6- Informacion de cliente por ID." <<endl;//
		cout<< "7- Liberar habitacion." <<endl;//
		cout<< "8- Adultos ingresados." <<endl;//
		cout<< "9- Consultar habitacion." <<endl;//
		cout<< "10- Ingresos diarios." <<endl;
		cout<< "11- Salir." <<endl;
		cout<< "\nOpcion a realizar: ";
		cin>>opc;
		
		switch(opc){
			
		case 1:
		{	
			system("cls"); 
			datos_H.setNombre_Hotel("Ian's Hotel"); 
			datos_H.setEstrellas_Hotel(5);
			datos_H.setTelefono_Hotel("6104 4195");
			datos_H.setDireccion_Hotel("10.01978 - 84.19716");
			datos_H.setCorreo_Hotel("ianshotel@gmail.com");
			datos_H.setPagina_Hotel("www.ianshotel.com");
			datos_H.setRedes_Hotel("@ians_hotel");
			datos_H.setTemporada_Baja("Marzo - Septiembre");
			datos_H.setTemporada_Alta("Octubre - Febrero\n");
			printf ("\033[1;36m");
			cout<< datos_H.toString_Hotel();
			printf ("\033[0m\n");
			system("pause");
			break;
		}	
		case 2:
		{	
			system("cls");
//			datos_H.por_defecto_cliente();
//			datos_C.setNombre_Cliente("Emmanuel Jimenez");
//			datos_C.setID_Cliente("207800171");
//			datos_C.setMetodoPago_Cliente(1);
//			datos_C.setNumCuenta_Cliente("1122334455");
//			datos_C.setTelefono_Cliente("61044195");
//			datos_C.setCantAdultos_Cliente(2);
//			datos_C.setCantNinios_Cliente(1);
//			datos_C.setEstadoSocio_Cliente("No socios");
//			datos_C.setTarjeta_Cliente("No beneficios");
//			datos_C.setConvenio_Cliente("Sin convenio\n");
//			cout<< datos_C.toString_Cliente();
//			
//			datos_R.setNumero_Room(1.2);
//			datos_R.setEstado_Room('O');
//			datos_R.setPrecio_Room(100000);
//			datos_R.setTipo_Room(4);
//			datos_R.setCategoria_Room("Normal");
//			datos_R.setCantNoches_Room(2);
//			datos_R.setServicio_Room("Todo incluido");
//			datos_R.setPersonasMax_Room(4);
//			cout<< datos_R.toString_Room();
//			cout<<"\n\n";
			datos_H.registroAuto_cliente();
			system("pause");
			break;
		}
		case 3:
		{	
			system("cls");
			datos_H.mat_habitacion();
			system("pause");
			break;
		}
		case 4:
		{	
			system("cls");
			int L = 0;
			int O = 0;
			int M = 0;
			string libre,ocupado,mantenimiento;
			datos_H.disponibilidad_habitacion(L,O,M);
			
			cout<<"\033[5;1;32m";
			cout<<endl<<"\t ----Digitacion en MAYUSCULAS----\t\n\n";
			cout<<"\033[0m";
			
			cout<<"Si desea la cantidad de habitaciones libres, digite L: ";
			cin>>libre;cout<<"\n";
			cout<<"Si desea la cantidad de habitaciones ocupadas, digite O: ";
			cin>>ocupado;cout<<"\n";
			cout<<"Si desea la cantidad de habitaciones en mantenimiento, digite M: ";
			cin>>mantenimiento;
			cout<<"\n";cout<<"\n";
			if(libre == "L"){
				cout<<"Habitaciones libres: "<<L<<endl;
			}
			if(ocupado == "O"){
				cout<<"Habitaciones ocupadas: "<<O<<endl;
			}
			if(mantenimiento == "M"){
				cout<<"Habitaciones en mantenimiento: "<<M<<"\n"<<endl;
			}
			system("pause");
			break;
		}
		case 5:
		{	
			system("cls");
			cout<<"\033[5;31m";
			cout<<endl<<"\t ----Opcion 5 no funciona, perdon----\t\n\n";
			cout<<"\033[0m\n";
			/*int ocupar = 0;
			cout<<"Digite el numero de habitacion disponible que desea: ";
			cin>>ocupar;
			datos_H.checkin_habitacion(ocupar);
			//cout<<"Digite el numero de habitacion disponible que desea: "<<
			
			string nombre = " ";
			string id = " ";
			int metodo_pago = 0;
			string numero_cuenta = " ";
			string telefono = " ";
			int c_adultos = 0;
			int c_ninios = 0;
			cout<<"Digite sus datos\n";
			cout<<"Nombre: ";cin>>nombre;
			cout<<"ID: ";cin>>id;
			cout<<"Metodo de pago 1 tarjeta, 2 efectivo: ";cin>>metodo_pago;
			cout<<"Numero de cuenta: ";cin>>numero_cuenta;
			cout<<"Telefono: ";cin>>telefono;
			cout<<"Cantidad de adultos: ";cin>>c_adultos;
			cout<<"Cantidad de ninios: ";cin>>c_ninios;*/
			
			system("pause");
			break;
		}
		case 6:
		{	
			system("cls");
			string id = " ";
			cout<<"Digite numero de cedula del cliente: "; 
			cin>>id;
			datos_H.cliente_ID(id);
			cout<<"\n";
			system("pause");
			break;
		}
		case 7:
		{	
			system("cls");
			string liberar;
			cout<<"Digite numero de cedula del cliente: "; 
			cin>>liberar;
			datos_H.liberar_habitacion(liberar);
			cout<<"\n";
			system("pause");
			break;
		}
		case 8:
		{	
			system("cls");
			cout<<"\n";
			cout<<datos_H.adultos_hotel()<<" Adultos en el hotel\n\n"<<endl;
			system("pause");
			break;
		}
		case 9:
		{	
			system("cls");
			int num = 0;
			cout<<"Digite el numero de habitacion: ";
			cin>>num;
			datos_H.habitacion_num(num);
			system("pause");
			break;
		}
		case 10:
		{	int opc1 = 0;
			system("cls");
			do{
				system("cls");
				cout<< "\033[5;1;36m"; cout<< "\t Menu de ingresos "; cout<< "\033[0m\n" <<endl;
				cout<< "1- Ingresos por tipo de habitacion." <<endl;
				cout<< "2- Ingresos por categoria." <<endl;
				cout<< "3- Ingresos por servicio." <<endl;
				cout<< "4- Todos los ingresos." <<endl;
				cout<< "5- Regresar al menu." <<endl;
				cout<< "\nOpcion a realizar: ";
				cin>>opc1;
				switch(opc1){
				case 1:
					{
					system("cls");
					int dos = 0;
					int cuatro = 0;
					datos_H.sub_tipo_habitacion(dos,cuatro);
					cout<<"\n";
					cout<< "Recaudacion por tipo de habitacion doble: " <<dos <<endl;
					cout<< "Recaudacion por tipo de habitacion cuadruple: " <<cuatro <<endl;
					cout<<"\n";
					system("pause");
					break;
					}
				case 2:
					{system("cls");
					int normal = 0;
					int lujo = 0;
					datos_H.sub_categoria(normal, lujo);
					cout<<"\n";
					cout<< "Recaudacion por Suit Normal: " <<normal <<endl;
					cout<< "Recaudacion por Suit Grande: " <<lujo <<endl;
					cout<<"\n";
					system("pause");
					break;
					}
				case 3:
					{system("cls");
					int estandar = 0;
					int todo = 0;
					datos_H.sub_servicio(estandar, todo);
					cout<<"\n";
					cout<< "Recaudacion por servicio estandar: " <<estandar <<endl;
					cout<<"\n";
					if(estandar == 0){
						cout<<"\033[5;31m";
						cout<<"\tNo hay clientes en la habitacion.";
						cout<<"\033[0m";
						cout<<"\n";
					}
					cout<< "\nRecaudacion por servicio todo incluido: " <<todo <<endl;
					cout<<"\n";
					if(todo > 0){
						cout<<"\033[5;1;32m";
						cout<<"\tNuestro Hotel ofrece todo incluido siempre.";
						cout<<"\033[0m";
						cout<<"\n"<<endl;
					}
					system("pause");
					break;
					}
				case 4:
					{system("cls");
					int todo1 = 0; int todo2 = 0; int todo3 = 0; int todo4 = 0;
					int todo5 = 0; int todo6 = 0;
					datos_H.sub_todo_ingreso(todo1,todo2,todo3,todo4,todo5,todo6);
					cout<<"\n";
					cout<< "Recaudacion por tipo de habitacion doble: " <<todo1 <<endl;
					cout<< "Recaudacion por tipo de habitacion cuadruple: " <<todo2 <<endl;
					cout<< "Recaudacion por Suit Normal: " <<todo3 <<endl;
					cout<< "Recaudacion por Suit Grande: " <<todo4 <<endl;
					cout<< "Recaudacion por servicio estandar: " <<todo5 <<endl;
					cout<< "Recaudacion por servicio todo incluido: " <<todo6 <<endl;
					cout<< "Suma total: "<<todo1+todo2+todo3+todo4+todo5+todo6<<endl;
					cout<<"\n";
					system("pause");
					break;
					}
				case 5:
					{
					break;
					}
				}
			}while(opc1 != 5);
			system("pause");
			
			break;
		}
		case 11:
			break;
		}
	}while(opc != 11);
	
	
	return 0;
}


#include "ContenedorHotel.h"
#include<iostream>
#include<time.h>

ContenedorHotel::ContenedorHotel() {
	nombre_Hotel = "Empty";
	estrellas_Hotel = 0;
	telefono_Hotel = "Empty";
	direccion_Hotel = "Empty";
	correo_Hotel = "Empty";
	pagina_Hotel = "Empty";
	redes_Hotel = "Empty";
	temporada_Baja = "Empty";
	temporada_Alta = "Empty";
}
ContenedorHotel::ContenedorHotel(
	string nombre_Hotel,
	int estrellas_Hotel,
	string telefono_Hotel,
	string direccion_Hotel,
	string correo_Hotel,
	string pagina_Hotel,
	string redes_Hotel,
	string temporada_Baja,
	string temporada_Alta){
	
	this -> nombre_Hotel = nombre_Hotel;
	this -> estrellas_Hotel = estrellas_Hotel;
	this -> telefono_Hotel = telefono_Hotel;
	this -> direccion_Hotel = direccion_Hotel;
	this -> correo_Hotel = correo_Hotel;
	this -> pagina_Hotel = pagina_Hotel;
	this -> redes_Hotel = redes_Hotel;
	this -> temporada_Baja = temporada_Baja;
	this -> temporada_Alta = temporada_Alta;
	
}
ContenedorHotel::~ContenedorHotel() {
	
}
void ContenedorHotel::setNombre_Hotel(string nombre_Hotel){
	this -> nombre_Hotel = nombre_Hotel;
}
void ContenedorHotel::setEstrellas_Hotel(int estrellas_Hotel){
	this -> estrellas_Hotel = estrellas_Hotel;
}
void ContenedorHotel::setTelefono_Hotel(string telefono_Hotel){
	this -> telefono_Hotel = telefono_Hotel;
}
void ContenedorHotel::setDireccion_Hotel(string direccion_Hotel){
	this -> direccion_Hotel = direccion_Hotel;
}
void ContenedorHotel::setCorreo_Hotel(string correo_Hotel){
	this -> correo_Hotel = correo_Hotel;
}
void ContenedorHotel::setPagina_Hotel(string pagina_Hotel){
	this -> pagina_Hotel = pagina_Hotel;
}
void ContenedorHotel::setRedes_Hotel(string redes_Hotel){
	this -> redes_Hotel = redes_Hotel;
}
void ContenedorHotel::setTemporada_Baja(string temporada_Baja){
	this -> temporada_Baja = temporada_Baja;
}
void ContenedorHotel::setTemporada_Alta(string temporada_Alta){
	this -> temporada_Alta = temporada_Alta;
}

string ContenedorHotel::getNombre_Hotel(){
	return nombre_Hotel;
}
int ContenedorHotel::getEstrellas_Hotel(){
	return estrellas_Hotel;
}
string ContenedorHotel::getTelefono_Hotel(){
	return telefono_Hotel;
}
string ContenedorHotel::getDireccion_Hotel(){
	return direccion_Hotel;
}
string ContenedorHotel::getCorreo_Hotel(){
	return correo_Hotel;
}
string ContenedorHotel::getPagina_Hotel(){
	return pagina_Hotel;
}
string ContenedorHotel::getRedes_Hotel(){
	return redes_Hotel;
}
string ContenedorHotel::getTemporada_Baja(){
	return temporada_Baja;
}
string ContenedorHotel::getTemporada_Alta(){
	return temporada_Alta;
}

void ContenedorHotel::mat_habitacion(){
	
	for(int i = 0; i<10; i++){
		cout<<" Piso "<<i+1<<"- ";
		for(int j = 0; j<10; j++){
			cout<<"\t"<<matriz_habitacion[i][j].getNumero_Room()<<"-"<<matriz_habitacion[i][j].getEstado_Room();
		}
		cout<<endl;
	}
}
void ContenedorHotel::registroAuto_cliente(){
	
	cout<<"\033[5;1;32m";
	cout<<endl<<"\t ----REGISTRO CONCRETADO----\t";
	cout<<endl<<"\t      visite la opcion 3\t"<<endl<<endl;
	cout<<"\033[0m";
	
	Habitacion H_1 {1,'L', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_2 {2,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};
	Habitacion H_3 {3,'M', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_4 {4,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};
	Habitacion H_5 {5,'L', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_6 {6,'O', 200.0, 4, "Suit Normal", 3, "Todo incluido", 4};
	Habitacion H_7 {7,'M', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_8 {8,'0', 200.0, 2, "Suit Normal", 1, "Todo incluido", 2};
	Habitacion H_9 {9,'L', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_10 {10,'L', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	
	matriz_habitacion[0][0] = H_1; matriz_habitacion[0][5] = H_6;
	matriz_habitacion[0][1] = H_2; matriz_habitacion[0][6] = H_7; 
	matriz_habitacion[0][2] = H_3; matriz_habitacion[0][7] = H_8;
	matriz_habitacion[0][3] = H_4; matriz_habitacion[0][8] = H_9; 
	matriz_habitacion[0][4] = H_5; matriz_habitacion[0][9] = H_10;
	
	Cliente C_2 {"Ian Villegas", "207800171", "Efectivo", "6104 4195", "N/A", 2, 0, "NO", "NO", "NO"};
	Cliente C_4 {"Cristopher Villegas", "207800170", "Tarjeta", "6204 5733", "1234567890", 1, 1, "NO", "NO", "NO"};
	Cliente C_6 {"Cristina Jimenez", "602780746", "Efectivo", "8836 3888", "N/A", 2, 0, "NO", "NO", "NO"};
	Cliente C_8 {"Erick Villegas", "502410723", "Efectivo", "8582 9722", "N/A", 2, 0, "NO", "NO", "NO"};
	
	matriz_cliente[0][1] = C_2;
	matriz_cliente[0][3] = C_4;
	matriz_cliente[0][5] = C_6;
	matriz_cliente[0][7] = C_8;
	///
	Habitacion H_11 {11,'L', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_12 {12,'L', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};	Habitacion H_13 {13,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};
	Habitacion H_14 {14,'L', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_15 {15,'M', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_16 {16,'O', 200.0, 4, "Suit Normal", 3, "Todo incluido", 4};	Habitacion H_17 {17,'M', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_18 {18,'L', 0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_19 {19,'O', 200.0, 2, "Suit Normal", 1, "Todo incluido", 2};
	Habitacion H_20 {20,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	
	matriz_habitacion[1][0] = H_11; matriz_habitacion[1][5] = H_16;
	matriz_habitacion[1][1] = H_12; matriz_habitacion[1][6] = H_17; 
	matriz_habitacion[1][2] = H_13; matriz_habitacion[1][7] = H_18;
	matriz_habitacion[1][3] = H_14; matriz_habitacion[1][8] = H_19;
	matriz_habitacion[1][4] = H_15; matriz_habitacion[1][9] = H_20;
	
	Cliente C_13 {"Julieth Soto", "119140055", "Efectivo", "6041 8948", "N/A", 2, 0, "NO", "NO", "NO"};
	Cliente C_16 {"Jairo Valverde", "208420072", "Efectivo", "6205 6539", "N/A", 2, 0, "NO", "NO", "NO"};
	Cliente C_19 {"Cristin Lux", "687200746", "Efectivo", "8836 3888", "N/A", 2, 0, "NO", "NO", "NO"};
	
	matriz_cliente[1][2] = C_13;
	matriz_cliente[1][5] = C_16;
	matriz_cliente[1][8] = C_19;
	///
	Habitacion H_21 {21,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_22 {22,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};	Habitacion H_23 {23,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_24 {24,'O', 200.0, 4, "Suit Normal", 3, "Todo incluido", 4};
	Habitacion H_25 {25,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_26 {26,'O', 200.0, 4, "Suit Normal", 4, "Todo incluido", 4};	Habitacion H_27 {27,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_28 {28,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_29 {29,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_30 {30,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	
	matriz_habitacion[2][0] = H_21; matriz_habitacion[2][5] = H_26;
	matriz_habitacion[2][1] = H_22; matriz_habitacion[2][6] = H_27; 
	matriz_habitacion[2][2] = H_23; matriz_habitacion[2][7] = H_28;
	matriz_habitacion[2][3] = H_24; matriz_habitacion[2][8] = H_29;
	matriz_habitacion[2][4] = H_25; matriz_habitacion[2][9] = H_30;
	
	Cliente C_22 {"Lukas Obando", "514280723", "Efectivo", "8582 9722", "N/A", 2, 0, "NO", "NO", "NO"};	Cliente C_24 {"Jairo Valverde", "208420072", "Efectivo", "6205 6539", "N/A", 2, 0, "NO", "NO", "NO"};
	Cliente C_26 {"Cristian Orosko", "207080171", "Tarjeta", "6204 5733", "1234567890", 1, 1, "NO", "NO", "NO"};
	
	matriz_cliente[2][1] = C_22;
	matriz_cliente[2][3] = C_24;
	matriz_cliente[2][5] = C_26;
	///
	Habitacion H_31 {31,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_32 {32,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};	Habitacion H_33 {33,'O', 200.0, 4, "Suit Normal", 4, "Todo incluido", 4};
	Habitacion H_34 {34,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_35 {35,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_36 {36,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};	Habitacion H_37 {37,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_38 {38,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_39 {39,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};
	Habitacion H_40 {40,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	
	matriz_habitacion[3][0] = H_31; matriz_habitacion[3][5] = H_36;
	matriz_habitacion[3][1] = H_32; matriz_habitacion[3][6] = H_37; 
	matriz_habitacion[3][2] = H_33; matriz_habitacion[3][7] = H_38;
	matriz_habitacion[3][3] = H_34; matriz_habitacion[3][8] = H_39;
	matriz_habitacion[3][4] = H_35; matriz_habitacion[3][9] = H_40;
	
	Cliente C_33 {"Esteban Sanches", "164530171", "Tarjeta", "9874 5733", "1234567890", 1, 1, "NO", "NO", "NO"};	Cliente C_36 {"Jocabed Sibaja", "209370171", "Tarjeta", "2234 5733", "1234567890", 1, 1, "NO", "NO", "NO"};	Cliente C_39 {"Maria Cespedes", "512340171", "Tarjeta", "6234 5733", "1234567890", 1, 1, "NO", "NO", "NO"};
	
	matriz_cliente[3][2] = C_33;
	matriz_cliente[3][5] = C_36;
	matriz_cliente[3][8] = C_39;
	///
	Habitacion H_41 {41,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_42 {42,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};	Habitacion H_43 {43,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_44 {44,'O', 200.0, 4, "Suit Normal", 3, "Todo incluido", 4};
	Habitacion H_45 {45,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_46 {46,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};	Habitacion H_47 {47,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_48 {48,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_49 {49,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_50 {50,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	
	matriz_habitacion[4][0] = H_41; matriz_habitacion[4][5] = H_46;
	matriz_habitacion[4][1] = H_42; matriz_habitacion[4][6] = H_47; 
	matriz_habitacion[4][2] = H_43; matriz_habitacion[4][7] = H_48;
	matriz_habitacion[4][3] = H_44; matriz_habitacion[4][8] = H_49;
	matriz_habitacion[4][4] = H_45; matriz_habitacion[4][9] = H_50;
	
	Cliente C_42 {"Aang Aire", "211110000", "Efectivo", "3456 6539", "N/A", 2, 0, "NO", "NO", "NO"};
	Cliente C_44 {"Momo Aire", "509874471", "Tarjeta", "3875 5733", "1234567890", 1, 1, "NO", "NO", "NO"};	Cliente C_46 {"Katara Agua", "533540171", "Tarjeta", "6234 5733", "1234567890", 1, 1, "NO", "NO", "NO"};
	
	matriz_cliente[4][1] = C_42;
	matriz_cliente[4][3] = C_44;
	matriz_cliente[4][5] = C_46;
	///
	Habitacion H_51 {51,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_52 {52,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};	Habitacion H_53 {53,'O', 200.0, 4, "Suit Normal", 3, "Todo incluido", 4};
	Habitacion H_54 {54,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_55 {55,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_56 {56,'O', 200.0, 4, "Suit Normal", 4, "Todo incluido", 4};	Habitacion H_57 {57,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_58 {58,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_59 {59,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};
	Habitacion H_60 {60,'L',0.0, 2, "Suit Grande", 0, "Sin cliente", 2};
	
	matriz_habitacion[5][0] = H_51; matriz_habitacion[5][5] = H_56;
	matriz_habitacion[5][1] = H_52; matriz_habitacion[5][6] = H_57; 
	matriz_habitacion[5][2] = H_53; matriz_habitacion[5][7] = H_58;
	matriz_habitacion[5][3] = H_54; matriz_habitacion[5][8] = H_59;
	matriz_habitacion[5][4] = H_55; matriz_habitacion[5][9] = H_60;
	
	Cliente C_53 {"Toph Tierra", "222213000", "Efectivo", "3336 6539", "N/A", 2, 0, "NO", "NO", "NO"};	Cliente C_56 {"Zhoka Boomerang", "222232000", "Efectivo", "1116 6539", "N/A", 2, 0, "NO", "NO", "NO"};
	Cliente C_59 {"Zuki Kioshy", "222241000", "Efectivo", "2226 6539", "N/A", 2, 0, "NO", "NO", "NO"};
	
	matriz_cliente[5][2] = C_53;
	matriz_cliente[5][5] = C_56;
	matriz_cliente[5][8] = C_59;
	///
	Habitacion H_61 {61,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_62 {62,'O', 200.0, 4, "Suit Grande", 3, "Todo incluido", 4};	Habitacion H_63 {63,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_64 {64,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};
	Habitacion H_65 {65,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_66 {66,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};	Habitacion H_67 {67,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_68 {68,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_69 {69,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_70 {70,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	
	matriz_habitacion[6][0] = H_61; matriz_habitacion[6][5] = H_66;
	matriz_habitacion[6][1] = H_62; matriz_habitacion[6][6] = H_67; 
	matriz_habitacion[6][2] = H_63; matriz_habitacion[6][7] = H_68;
	matriz_habitacion[6][3] = H_64; matriz_habitacion[6][8] = H_69;
	matriz_habitacion[6][4] = H_65; matriz_habitacion[6][9] = H_70;
	
	Cliente C_62 {"Elizabeth Ferrari", "202830171", "Tarjeta", "7346 5733", "1234887890", 1, 1, "NO", "NO", "NO"};	Cliente C_64 {"Eduardo Umania", "212359983", "Tarjeta", "3983 5733", "1234566690", 1, 1, "NO", "NO", "NO"};
	Cliente C_66 {"Norma Camacho", "229983872", "Tarjeta", "1234 5733", "1237767890", 1, 1, "NO", "NO", "NO"};
	
	matriz_cliente[6][1] = C_62;
	matriz_cliente[6][3] = C_64;
	matriz_cliente[6][5] = C_66;
	///
	Habitacion H_71 {71,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_72 {72,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};	Habitacion H_73 {73,'O', 200.0, 4, "Suit Grande", 2, "Todo incluido", 4};
	Habitacion H_74 {74,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_75 {75,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_76 {76,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};	Habitacion H_77 {77,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_78 {78,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_79 {79,'O', 200.0, 4, "Suit Normal", 3, "Todo incluido", 4};
	Habitacion H_80 {80,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	
	matriz_habitacion[7][0] = H_71; matriz_habitacion[7][5] = H_76;
	matriz_habitacion[7][1] = H_72; matriz_habitacion[7][6] = H_77; 
	matriz_habitacion[7][2] = H_73; matriz_habitacion[7][7] = H_78;
	matriz_habitacion[7][3] = H_74; matriz_habitacion[7][8] = H_79;
	matriz_habitacion[7][4] = H_75; matriz_habitacion[7][9] = H_80;
	
	Cliente C_73 {"Logitech Key", "112360700", "Efectivo", "3456 6539", "N/A", 2, 0, "NO", "NO", "NO"};	Cliente C_76 {"Penny Cannon", "309870600", "Efectivo", "3456 6539", "N/A", 2, 0, "NO", "NO", "NO"};
	Cliente C_79 {"Zuko Fuego", "609883872", "Tarjeta", "1234 5733", "1237767890", 1, 1, "NO", "NO", "NO"};
	
	matriz_cliente[7][2] = C_73;
	matriz_cliente[7][5] = C_76;
	matriz_cliente[7][8] = C_79;
	///
	Habitacion H_81 {81,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_82 {82,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};	Habitacion H_83 {83,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_84 {84,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};
	Habitacion H_85 {85,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_86 {86,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};	Habitacion H_87 {87,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_88 {88,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_89 {89,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_90 {90,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	
	matriz_habitacion[8][0] = H_81; matriz_habitacion[8][5] = H_86;
	matriz_habitacion[8][1] = H_82; matriz_habitacion[8][6] = H_87; 
	matriz_habitacion[8][2] = H_83; matriz_habitacion[8][7] = H_88;
	matriz_habitacion[8][3] = H_84; matriz_habitacion[8][8] = H_89;
	matriz_habitacion[8][4] = H_85; matriz_habitacion[8][9] = H_90;
	
	Cliente C_82 {"Benny Rococo", "712783872", "Tarjeta", "1234 5733", "1237767890", 1, 1, "NO", "NO", "NO"};	Cliente C_84 {"Lenovo Herrera", "598730600", "Efectivo", "3456 6539", "N/A", 2, 0, "NO", "NO", "NO"};
	Cliente C_86 {"Resorte Elisondo", "601823872", "Tarjeta", "1234 5733", "1237767890", 1, 1, "NO", "NO", "NO"};
	
	matriz_cliente[8][1] = C_82;
	matriz_cliente[8][3] = C_84;
	matriz_cliente[8][5] = C_86;
	///
	Habitacion H_91 {91,'O', 200.0, 4, "Suit Normal", 3, "Todo incluido", 4};
	Habitacion H_92 {92,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_93 {93,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};
	Habitacion H_94 {94,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_95 {95,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_96 {96,'O', 200.0, 4, "Suit Normal", 4, "Todo incluido", 4};
	Habitacion H_97 {97,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_98 {98,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	Habitacion H_99 {99,'O', 200.0, 2, "Suit Normal", 2, "Todo incluido", 2};
	Habitacion H_100{100,'L',0.0, 2, "Suit Normal", 0, "Sin cliente", 2};
	
	matriz_habitacion[9][0] = H_91; matriz_habitacion[9][5] = H_96;
	matriz_habitacion[9][1] = H_92; matriz_habitacion[9][6] = H_97; 
	matriz_habitacion[9][2] = H_93; matriz_habitacion[9][7] = H_98;
	matriz_habitacion[9][3] = H_94; matriz_habitacion[9][8] = H_99;
	matriz_habitacion[9][4] = H_95; matriz_habitacion[9][9] = H_100;

	Cliente C_91 {"Fabricio Hermandez", "598730600", "Efectivo", "3456 6539", "N/A", 2, 0, "NO", "NO", "NO"};
	Cliente C_93 {"Gabriel Villalobos", "601823872", "Tarjeta", "1234 5733", "1237767890", 1, 1, "NO", "NO", "NO"};
	Cliente C_96 {"Aaron Villalobos", "598730600", "Efectivo", "3456 6539", "N/A", 2, 0, "NO", "NO", "NO"};	Cliente C_99 {"Uno Segura", "601823872", "Tarjeta", "1234 5733", "1237767890", 1, 1, "NO", "NO", "NO"};
	
	matriz_cliente[9][0] = C_91;
	matriz_cliente[9][2] = C_93;
	matriz_cliente[9][5] = C_96;
	matriz_cliente[9][8] = C_99;
}
void ContenedorHotel::disponibilidad_habitacion(int& L, int& O, int& M){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(matriz_habitacion[i][j].getEstado_Room() == 'L'){
				L++;
			}else if(matriz_habitacion[i][j].getEstado_Room() == 'O'){
				O++;
			}else if(matriz_habitacion[i][j].getEstado_Room() == 'M'){
				M++;
			}
		}
	}
}
int ContenedorHotel::adultos_hotel(){
	int validacion = 0;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			validacion = validacion + matriz_cliente[i][j].getCantAdultos_Cliente();
		}
	}
	return validacion;
}
void ContenedorHotel::cliente_ID(string id){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(id == matriz_cliente[i][j].getID_Cliente()){
				cout<<matriz_cliente[i][j].toString_Cliente();
				cout<<"\n";
				cout<<matriz_habitacion[i][j].toString_Room();
			}
		}
	}
}
void ContenedorHotel::habitacion_num(int num){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(num == matriz_habitacion[i][j].getNumero_Room()){
				cout<<matriz_habitacion[i][j].toString_Room();
				cout<<"\n";
				cout<<matriz_cliente[i][j].toString_Cliente();
			}
		}
	}	
}
void ContenedorHotel::liberar_habitacion(string liberar){
	string preguntado;
	Habitacion libre {0,'L', 200.0, 0, "Suit Normal", 0, "Sin cliente", 0};
	Habitacion mantenimiento {0,'M', 200.0, 0, "Suit Normal", 0, "Sin cliente", 0};
	Cliente vacio {" ", " ", " ", " ", " ", 0, 0, "NO", "NO", "NO"};

	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(liberar == matriz_cliente[i][j].getID_Cliente()){
				cout<<"\033[5;1;32m";
				cout<<endl<<"\t ----Digitacion en MAYUSCULAS----\t\n\n";
				cout<<"\033[0m";
				cout<<"  Quiere poner la habitacion en mantenimiento? "<<endl;
				cout<<"  ";
				cin>>preguntado;
				if(preguntado == "SI"){
					matriz_habitacion[i][j] = mantenimiento;
					matriz_cliente[i][j] = vacio;
					cout<<"\033[5;31m";
					cout<<endl<<"\t ----Puesta en mantenimiento----\t\n\n";
					cout<<"\033[0m";
				}else{
					matriz_habitacion[i][j] = libre;
					matriz_cliente[i][j] = vacio;
				}
			}
		}
		cout<<endl;
	}	
}	
void ContenedorHotel::checkin_habitacion(int ocupar){
	/*//Cliente lleno;
	//Habitacion llena;
	//Cliente maximo;
	string preguntado;
	Habitacion ocupada {0,'O', 200.0, 0, " ", 0, " ", 0};
	//Habitacion mantenimiento {0,'M', 200.0, 0, "Suit Normal", 0, "Sin cliente", 0};
	Cliente vacio {" ", " ", " ", " ", " ", 0, 0, "NO", "NO", "NO"};
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(ocupar == matriz_habitacion[i][j].getNumero_Room()){
				cout<<matriz_habitacion[i][j].toString_Room();
				cout<<"\n";
				//cout<<matriz_cliente[i][j].toString_Cliente();
			
			if(ocupar == matriz_habitacion[i][j].getNumero_Room()){
//				cout<<"\033[5;1;32m";
//				cout<<endl<<"\t ----Digitacion en MAYUSCULAS----\t\n\n";
//				cout<<"\033[0m";
				cout<<"  Quiere ocupar la habitacion? "<<endl;
				cout<<"  ";
				cin>>preguntado;
				if(preguntado == "SI"){
					matriz_habitacion[i][j] = ocupada;
					matriz_cliente[i][j] = vacio;
					cout<<"\033[5;31m";
					cout<<endl<<"\t ----Puesta en mantenimiento----\t\n\n";
					cout<<"\033[0m";
				}
//				}else{
//					matriz_habitacion[i][j] = libre;
//					matriz_cliente[i][j] = vacio;
				}
			}
		}
	}*/
}

void ContenedorHotel::ingresos_hotel(){
	
}
/////////////////////////////////////////////
void ContenedorHotel::sub_tipo_habitacion(int& dos, int& cuatro){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getTipo_Room() == 2){
				dos+=matriz_habitacion[i][j].getPrecio_Room();
			}
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getTipo_Room() == 4){
				cuatro+=matriz_habitacion[i][j].getPrecio_Room();
			}
		}
	}
}
void ContenedorHotel::sub_categoria(int& normal, int& lujo){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getCategoria_Room() == "Suit Normal"){
				normal+=matriz_habitacion[i][j].getPrecio_Room();
			}
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getCategoria_Room() == "Suit Grande"){
				lujo+=matriz_habitacion[i][j].getPrecio_Room();
			}
		}
	}
}
void ContenedorHotel::sub_servicio(int& estandar, int& todo){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getServicio_Room() == "Sin cliente"){
				estandar+=matriz_habitacion[i][j].getPrecio_Room();
			}
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getServicio_Room() == "Todo incluido"){
				todo+=matriz_habitacion[i][j].getPrecio_Room();
			}
		}
	}
}
void ContenedorHotel::sub_todo_ingreso(int& todo1, int& todo2, int& todo3, int& todo4, int& todo5, int& todo6){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getTipo_Room() == 2){
				todo1+=matriz_habitacion[i][j].getPrecio_Room();
			}
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getTipo_Room() == 4){
				todo2+=matriz_habitacion[i][j].getPrecio_Room();
			}
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getCategoria_Room() == "Suit Normal"){
				todo3+=matriz_habitacion[i][j].getPrecio_Room();
			}
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getCategoria_Room() == "Suit Grande"){
				todo4+=matriz_habitacion[i][j].getPrecio_Room();
			}
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getServicio_Room() == "Sin cliente"){
				todo5+=matriz_habitacion[i][j].getPrecio_Room();
			}
			if(matriz_habitacion[i][j].getEstado_Room() == 'O' && matriz_habitacion[i][j].getServicio_Room() == "Todo incluido"){
				todo6+=matriz_habitacion[i][j].getPrecio_Room();
			}
		}
	}
}
string ContenedorHotel::toString_Hotel(){
	stringstream DataHotel;
	DataHotel << "Nombre del Hotel: " << nombre_Hotel <<endl;
	DataHotel << "\nEstrellas: " << estrellas_Hotel <<endl;
	DataHotel << "\nNumero de Telefono: " << telefono_Hotel <<endl;
	DataHotel << "\nDireccion: " << direccion_Hotel <<endl;
	DataHotel << "\nCorreo: " << correo_Hotel <<endl;
	DataHotel << "\nPagina WEB: " << pagina_Hotel <<endl;
	DataHotel << "\nRedes Sociales: " << redes_Hotel <<endl;
	DataHotel << "\nTemporada Baja: " << temporada_Baja <<endl;
	DataHotel << "\nTemporada Alta: " << temporada_Alta <<endl;
	
	return DataHotel.str();
}

